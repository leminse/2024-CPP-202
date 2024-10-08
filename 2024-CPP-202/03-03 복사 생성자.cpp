
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

	//복사생성자
	/*Student(const Student& rhs) {
		cout << "복사생성자 호출 완료" << endl;
	}*/

	//복사생성자(얕은 복사)
	Student(const Student& rhs) :hakbun_(rhs.hakbun_), name_(rhs.name_) {
		cout << "복사생성자 호출 완료" << endl;

		//깊은 복사
		int length = strlen(rhs.name_);

		//'\'가 들어가기 위해 공간 하나 더 추가
		name_ = new char[length + 1];
		strcpy(name_, rhs.name_);
		cout << "생성자 호출 완료" << endl;
	}

	//소멸자 : 소멸될 때 (메모리에서 지워질 때) 호출되는 함수, 소멸자 선언 시 ~사용
	~Student(void) {
		// TODO : 얕은 복사로 인하여 이미 제거된 공간을 또 제거하려고 하기에 에러 발생
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
	char* name_;													//멤버변수
};

int main(void) {

	//일반적인 생성자
	Student stu = Student(2208, "LMS");

	//복사 생성자
	Student stu2 = stu;

	return 0;

} 