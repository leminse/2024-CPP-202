
#include <iostream>
#include <string.h>

using namespace std;

class Student {
public:		

	//TODO : �����ڿ��� �����Ҵ��� �� �޸� ������ ���� �� ����.					//todo �ѱ� �� �� ��
	Student(int hakbun, const char* name) : hakbun_(hakbun) {		
		int length = strlen(name);

		//'\'�� ���� ���� ���� �ϳ� �� �߰�
		name_ = new char[length+1];

		strcpy(name_, name);							//������� ���� �� �̻��� ���ڳ���
	}
	
	//Ŭ������ ����� ���
	void show(void) {			//void�� �ް�����
		cout << hakbun_ << " ";
		cout << name_ << endl;
	}

private:
	int hakbun_;			//���۹�� (������_)   _�� ����
	char* name_;

};

int main(void) {
	//�����Ҵ� : �޸𸮴� heap���� �Ҵ�.	����(��Ÿ��) �� �޸� ũ�Ⱑ ������. heap�� ���� �޸𸮸� ���� �� ������, ���� �޸� ���� ����
	Student* stu = new Student(2208,"�̹μ�");
//	stu.show();
	stu->show();
	delete stu;											//delete�� ��� �� ��ü 2208�� �������� ��ü "�̹μ�"�� �������� ����
	

	return 0;

}