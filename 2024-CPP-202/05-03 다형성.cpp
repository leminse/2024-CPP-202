#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    Animal(string name, unsigned int age, int leg_num)
        : name_(name), age(age), leg_num_(leg_num) {}



    virtual void walk(void) {  // virtual Ű���� �߰�
        cout << "�ȴ�" << endl;
    }

    virtual void eat(void) {  // virtual Ű���� �߰�
        cout << "�Դ�" << endl;
    }

    virtual void bark(void) {  // virtual Ű���� �߰�
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

    void bark() override {
        cout << "�߿˾߿�" << endl;
    }

    void eat() override {
        cout << "��տ�" << endl;
    }

    void walk() override {
        cout << "��������" << endl;
    }

private:
    int cute_level;
};

int main(void) { 

    Animal* animal = new Cat("�糪", 6, 4, 100);
 
    delete animal;

    return 0; 
}
