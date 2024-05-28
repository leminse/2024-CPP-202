#include <string>
#include <iostream>
using namespace std;

class Person {
public:
	Person(string name, int age)
		:name_(name), age_(age) {
		cout << "�θ� ������ ȣ��" << endl;
	}
	~Person() {
		cout << "�θ� �Ҹ��� ȣ��" << endl;
	}

	void show_person() {
		cout << name_ << "�� ���̴�" << age_ << "�Դϴ�." << endl;
	}

private:
	string name_;
	int age_;
};

class Student : public Person {
public:
	//�θ� �����ڰ� ���� ȣ��
	Student(string name, int age, int id) :Person(name, age), id_(id)
	{
		cout << "�ڽ� ������ ȣ��" << endl;
	}
	~Student() {
		cout << "�ڽ� �Ҹ��� ȣ��" << endl;
	}

	void ShowPerson() {		//override ���ٶ��̵��.
		cout << id_ << " ";
		Person:: show_person();	//�θ� Ŭ������ ����Լ� ȣ��
	}

private:
	int id_;
};

int main() {
	//�����Ҵ����� �����
	Student* stu = new Student("�ٶ���", 1212, 12345);
	stu->ShowPerson();
	delete stu;

	return 0;
}