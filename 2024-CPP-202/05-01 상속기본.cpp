#include <string>
#include <iostream>
using namespace std;

class Person {
public:
	Person(string name, int age)
		:name_(name), age_(age) {
		cout << "부모 생성자 호출" << endl;
	}
	~Person() {
		cout << "부모 소멸자 호출" << endl;
	}

	void show_person() {
		cout << name_ << "의 나이는" << age_ << "입니다." << endl;
	}

private:
	string name_;
	int age_;
};

class Student : public Person {
public:
	//부모 생성자가 먼저 호출
	Student(string name, int age, int id) :Person(name, age), id_(id)
	{
		cout << "자식 생성자 호출" << endl;
	}
	~Student() {
		cout << "자식 소멸자 호출" << endl;
	}

	void ShowPerson() {		//override 오바라이드다.
		cout << id_ << " ";
		Person:: show_person();	//부모 클래스의 멤버함수 호출
	}

private:
	int id_;
};

int main() {
	//동적할당으로 만들기
	Student* stu = new Student("다람쥐", 1212, 12345);
	stu->ShowPerson();
	delete stu;

	return 0;
}