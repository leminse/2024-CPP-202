
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

	//��� ���� �ʱ�ȭ : const / ���� ��� ������ �ʱ�ȭ �� �� �ִ�.
	Student(int hakbun, string name) : hakbun_(hakbun), name_(name) {			
		
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
	Student* denjle = new Student[3]{
		{1010, "û ��"},
		{215, "�赶��"},
		{320, "����� Ű�����"}
	};

	for (int i = 0; i < 3; i++)				
		denjle[i].show();							//���� ��ü�� *�� ���� ������ .�� ���


	//�迭�� �����Ҵ� ���� (������ ���� �� �־����)
	delete []denjle;
	
	return 0;

}