#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    Animal(string name, unsigned int age, int leg_num)
        : name_(name), age(age), leg_num_(leg_num) {}

    void walk(void) { 
        cout << "�ȴ�" << endl;
    }

    void eat(void) {  
        cout << "�Դ�" << endl;
    }

    void bark(void) {  
        cout << "�ٴ�" << endl;
    }

    void cute(void) {
        cout << "�ſ� �Ϳ���" << endl;
    }

private:
    string name_;
    unsigned int age;
    int leg_num_;
};

class Cat : public Animal {
public:
    Cat(string name, unsigned int age, int leg_num, int cute_level)
        : Animal(name, age, leg_num), cute_level(cute_level)
    {
        cout << "�Ϳ���" << endl;
    }

    void bark() {
        cout << "�߿˾߿�" << endl;
    }

    void eat() {
        cout << "��տ�" << endl;
    }

    void walk() {
        cout << "��������" << endl;
    }

private:
    int cute_level;
};

int main(void) {  
    Animal* animal = new Animal("�����", 5, 2);
    animal->bark();
    animal->eat();
    animal->walk();
    delete animal;

    animal = new Cat("�糪", 6, 4, 100);
    animal->bark();
    animal->eat();
    animal->walk();
    delete animal;

    return 0;  
}
