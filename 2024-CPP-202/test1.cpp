#include <string>
#include <iostream>
using namespace std;

class Person {
public:
	Person(string name, int hakbun)
		:name_(name), hakbun_(hakbun) {

	}
	
	void PrintShow() {
		cout << "아무노래" << endl;
	}

private:
	string name_;
	int hakbun_;
};

class Student : public Person {
	Student(string name, int hakbun) : Person(name, hakbun) {

	}

	void Print_Show() {
		cout << "자식" << endl;
		Person::PrintShow();
	}
};

int main() {
	Student* std = new Student("아무노래", 1111);
	std->PrintShow();
	delete std;

}