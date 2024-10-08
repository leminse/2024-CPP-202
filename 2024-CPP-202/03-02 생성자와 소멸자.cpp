
#include <iostream>
#include <string.h>

using namespace std;

class Student {
public:		

	Student(int hakbun, const char* name) : hakbun_(hakbun) {		
		int length = strlen(name);

		//'\'가 들어가기 위해 공간 하나 더 추가
		name_ = new char[length + 1];
		strcpy(name_, name);							
		cout << "생성자 호출 완료" << endl;
	}

	//소멸자 : 소멸될 때 (메모리에서 지워질 때) 호출되는 함수
	~Student(void) {
		delete []name_;												//배열 여러개 만들었으므로 []붙이기
		cout << "소멸자 호출 완료" << endl;
	}
	
	//클래스의 멤버를 출력
	void show(void) {												//void는 메개변수
		cout << hakbun_ << " ";
		cout << name_ << endl;
	}

private:
	int hakbun_;													//구글방식 (변수명_)   _을 붙임
	char* name_;

};

int main(void) {
	//동적할당 : 메모리는 heap에서 할당.	실행(런타임) 시 메모리 크기가 정해짐. heap는 많은 메모리를 만들 수 있으며, 많은 메모리 관리 가능
	Student* stu = new Student(2208,"이민서");
	cout << "I'm still hungry - 거스 히딩크" << endl;

	delete stu;											
	cout << "It ain't over itll it's over - 요기 베라" << endl;
	

	return 0;

} 