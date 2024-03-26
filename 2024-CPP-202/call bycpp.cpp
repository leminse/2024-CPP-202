#include <iostream>

//이름 공간. std::를 안해도 된다
using namespace std;

void call_by_value(int val) {
	
	//새로운 지역 변수 val을 만들고 값을 넣는다.
	val = 10;
}

int main(void) {
	int num = 4;
	call_by_value(num);
	cout << num;
	return 0;
}