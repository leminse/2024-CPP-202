
#include <iostream>
#include <string.h>

using namespace std;

class Student {
public:		

	Student(int hakbun, const char* name) : hakbun_(hakbun) {		
		int length = strlen(name);

		//'\'�� ���� ���� ���� �ϳ� �� �߰�
		name_ = new char[length + 1];
		strcpy(name_, name);							
		cout << "������ ȣ�� �Ϸ�" << endl;
	}

	//�Ҹ��� : �Ҹ�� �� (�޸𸮿��� ������ ��) ȣ��Ǵ� �Լ�
	~Student(void) {
		delete []name_;												//�迭 ������ ��������Ƿ� []���̱�
		cout << "�Ҹ��� ȣ�� �Ϸ�" << endl;
	}
	
	//Ŭ������ ����� ���
	void show(void) {												//void�� �ް�����
		cout << hakbun_ << " ";
		cout << name_ << endl;
	}

private:
	int hakbun_;													//���۹�� (������_)   _�� ����
	char* name_;
};

int main(void) {

	//�Ϲ����� ������
	Student stu = Student(2208, "�̹μ�");

	//���� ������
	Student stu2 = stu;

	//TODO : ���� ����� ���Ͽ� ���� �ּ�(stu.name_, stu2.name_)���� �� �� delete �õ�

	return 0;

} 