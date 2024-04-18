
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
	//�����Ҵ� : �޸𸮴� heap���� �Ҵ�.	����(��Ÿ��) �� �޸� ũ�Ⱑ ������. heap�� ���� �޸𸮸� ���� �� ������, ���� �޸� ���� ����
	Student* stu = new Student(2208,"�̹μ�");
	cout << "I'm still hungry - �Ž� ����ũ" << endl;

	delete stu;											
	cout << "It ain't over itll it's over - ��� ����" << endl;
	

	return 0;

} 