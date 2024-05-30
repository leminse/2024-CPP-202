#include <string>
#include <iostream>
using namespace std;

class Person {
public:
	Person(string name, int hakbun)
		:name_(name), hakbun_(hakbun) {

	}
	
	void PrintShow() {
		cout << "�ƹ��뷡" << endl;
	}

private:
	string name_;
	int hakbun_;
};

class Student : public Person {
	Student(string name, int hakbun) : Person(name, hakbun) {

	}

	void Print_Show() {
		cout << "�ڽ�" << endl;
		Person::PrintShow();
	}
};

int main() {
	Student* std = new Student("�ƹ��뷡", 1111);
	std->PrintShow();
	delete std;

}