
#include <iostream>
#include <string>

using namespace std;

struct Student {
	int hakbun_;			//���۹�� (������_)   _�� ����
	string name_;
};

int main(void) {
	struct Student jisu;
	//����ü�� default(�ڵ���)�� public�̴�.
	jisu.hakbun_ = 2202;
	jisu.name_ = "������";

	return 0;

}