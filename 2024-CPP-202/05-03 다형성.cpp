#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    Animal(string name, unsigned int age, int leg_num)
        : name_(name), age(age), leg_num_(leg_num) {}



    virtual void walk(void) {  // virtual Å°¿öµå Ãß°¡
        cout << "°È´Ù" << endl;
    }

    virtual void eat(void) {  // virtual Å°¿öµå Ãß°¡
        cout << "¸Ô´Ù" << endl;
    }

    virtual void bark(void) {  // virtual Å°¿öµå Ãß°¡
        cout << "¶Ù´Ù" << endl;
    }

    void cute(void) {
        cout << "¸Å¿ì ±Í¿±´Ù" << endl;
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
        cout << "±Í¿©¿ò" << endl;
    }

    void bark() override {
        cout << "¾ß¿Ë¾ß¿Ë" << endl;
    }

    void eat() override {
        cout << "¿ì¿Õ¿Õ" << endl;
    }

    void walk() override {
        cout << "Á¶¿ëÁ¶¿ë" << endl;
    }

private:
    int cute_level;
};

int main(void) { 

    Animal* animal = new Cat("·ç³ª", 6, 4, 100);
 
    delete animal;

    return 0; 
}
