
#include <iostream>
#include <string>

using namespace std;

class Student {
public:					
	//생성자 : 객체가 생성될 때 호출되는 함수
	//생성자는 반환형(리턴)이 없다. 함수 이름은 클래스 이름이다.

	Student() {
		//this : 자기 자신을 가리키는 포인터
		//장점 : 멤버를 명확하게 가리킬 수 있다.
		this -> hakbun_ = 2222;;
		name_ = "swah";
	}

	//멤버 변수 초기화 : const / 참조 멤버 변수를 초기화 할 수 있다.
	Student(int hakbun, string name) : hakbun_(hakbun), name_(name) {			
		
	}
	
	//클래스의 멤버를 출력
	void show(void) {			//void는 메개변수
		cout << hakbun_ << " ";
		cout << name_ << endl;
	}

private:
	int hakbun_;			//구글방식 (변수명_)   _을 붙임
	string name_;

};

int main(void) {
	//동적할당 : 메모리는 heap에서 할당.	실행(런타임) 시 메모리 크기가 정해짐. heap는 많은 메모리를 만들 수 있으며, 많은 메모리 관리 가능
	Student* denjle = new Student[3]{
		{1010, "청 명"},
		{215, "김독자"},
		{320, "사쿠사 키요오미"}
	};

	for (int i = 0; i < 3; i++)				
		denjle[i].show();							//연산 자체에 *이 들어가기 때문에 .을 사용


	//배열의 동적할당 해제 (무조건 해제 해 주어야함)
	delete []denjle;
	
	return 0;

}