
#include <iostream>
#include <string>

using namespace std;

class Student {
	int hakbun_;			//���۹�� (������_)   _�� ����
	string name_;
};

int main(void) {
	Student jisu;								//struct Student ���ص� ��.
	//class�� default(�ڵ���)�� private�̴�.
	jisu.hakbun_ = 2202;
	jisu.name_ = "������";

	return 0;

}