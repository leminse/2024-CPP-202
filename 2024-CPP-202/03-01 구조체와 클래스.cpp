
#include <iostream>
#include <string>

using namespace std;

class Student {
public:					
	//������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	//�����ڴ� ��ȯ��(����)�� ����. �Լ� �̸��� Ŭ���� �̸��̴�.

	Student() {
		//this : �ڱ� �ڽ��� ����Ű�� ������
		//���� : ����� ��Ȯ�ϰ� ����ų �� �ִ�.
		this -> hakbun_ = 2222;;
		name_ = "swah";
	}

	Student(int hakbun, string name) {
		hakbun_ = hakbun;
		name_ = name;
	}
	
	//Ŭ������ ����� ���
	void show(void) {			//void�� �ް�����
		cout << hakbun_ << " ";
		cout << name_ << endl;
	}

private:
	int hakbun_;			//���۹�� (������_)   _�� ����
	string name_;

};

int main(void) {
	//�����Ҵ� : �޸𸮴� heap���� �Ҵ�.	����(��Ÿ��) �� �޸� ũ�Ⱑ ������. heap�� ���� �޸𸮸� ���� �� ������, ���� �޸� ���� ����
	Student* jisu = new Student(2202, "������");

	//�����Ҵ� : �޸𸮿��� stack���� �Ҵ�.	������ �� �޸� ũ�Ⱑ ������. stack�� ���� ó�� �� ������
	Student swag = Student();

	jisu -> show();
	swag.show();

	//�����Ҵ� ���� (������ ���� �� �־����)
	delete jisu;
	
	return 0;

}