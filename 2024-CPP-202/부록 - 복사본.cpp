#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string name;
    int age;

public:
    Animal(string _name, int _age) : name(_name), age(_age) {}
    virtual void sound() {  // ���� �Լ��� ����
        cout << "Animal sound" << endl;
    }

    // Getter �Լ���
    string getName() const { return name; }
    int getAge() const { return age; }
};

class Dog : public Animal {
public:
    Dog(string _name, int _age) : Animal(_name, _age) {}

    void bark() {
        cout << "�� ��" << endl;
    }

    void sound() override {  // �������̵�
        bark();  // �������� �Ҹ��� ¢�� �Ҹ��̹Ƿ� bark() �Լ� ȣ��
    }
};

int main() {
    Dog myDog("Buddy", 3);

    myDog.sound();
    myDog.bark();

    return 0;
}