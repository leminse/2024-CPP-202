
#include <iostream>
#include <string>

using namespace std;

class Student {
	int hakbun_;			//구글방식 (변수명_)   _을 붙임
	string name_;
};

int main(void) {
	Student jisu;								//struct Student 안해도 됨.
	//class는 default(자동값)가 private이다.
	jisu.hakbun_ = 2202;
	jisu.name_ = "나지수";

	return 0;

}