
#include <iostream>
#include <string.h>

using namespace std;

class Student {
public:		

	//TODO : 생성자에서 동적할당을 한 메모리 공간을 지울 수 없다.					//todo 한국 뜻 할 일
	Student(int hakbun, const char* name) : hakbun_(hakbun) {		
		int length = strlen(name);

		//'\'가 들어가기 위해 공간 하나 더 추가
		name_ = new char[length+1];

		strcpy(name_, name);							//사용하지 않을 시 이상한 한자나옴
	}
	
	//클래스의 멤버를 출력
	void show(void) {			//void는 메개변수
		cout << hakbun_ << " ";
		cout << name_ << endl;
	}

private:
	int hakbun_;			//구글방식 (변수명_)   _을 붙임
	char* name_;

};

int main(void) {
	//동적할당 : 메모리는 heap에서 할당.	실행(런타임) 시 메모리 크기가 정해짐. heap는 많은 메모리를 만들 수 있으며, 많은 메모리 관리 가능
	Student* stu = new Student(2208,"이민서");
//	stu.show();
	stu->show();
	delete stu;											//delete를 사용 시 객체 2208만 지워지고 객체 "이민서"는 지워지지 않음
	

	return 0;

}