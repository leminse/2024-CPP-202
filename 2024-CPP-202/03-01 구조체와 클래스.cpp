
#include <iostream>
#include <string>

using namespace std;

struct Student {
	int hakbun_;			//구글방식 (변수명_)   _을 붙임
	string name_;
};

int main(void) {
	struct Student jisu;
	//구조체는 default(자동값)가 public이다.
	jisu.hakbun_ = 2202;
	jisu.name_ = "나지수";

	return 0;

}