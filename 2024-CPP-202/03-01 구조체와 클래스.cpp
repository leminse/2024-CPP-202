
#include <iostream>
#include <string>

using namespace std;

class Student {
public:					
	//������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	//�����ڴ� ��ȯ��(����)�� ����.
	Student(int hakbun, string name) {
		hakbun_ = hakbun;
		name_ = name;
	}

private:
	int hakbun_;			//���۹�� (������_)   _�� ����
	string name_;

};

int main(void) {
	Student jisu = Student(2202, "������");

	return 0;

}