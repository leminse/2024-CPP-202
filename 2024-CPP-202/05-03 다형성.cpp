#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    Animal(string name, unsigned int age, int leg_num)
        : name_(name), age(age), leg_num_(leg_num) {}

    void walk(void) { 
        cout << "°È´Ù" << endl;
    }

    void eat(void) {  
        cout << "¸Ô´Ù" << endl;
    }

    void bark(void) {  
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

    void bark() {
        cout << "¾ß¿Ë¾ß¿Ë" << endl;
    }

    void eat() {
        cout << "¿ì¿Õ¿Õ" << endl;
    }

    void walk() {
        cout << "Á¶¿ëÁ¶¿ë" << endl;
    }

private:
    int cute_level;
};

int main(void) {  
    Animal* animal = new Animal("°í¾çÀÌ", 5, 2);
    animal->bark();
    animal->eat();
    animal->walk();
    delete animal;

    animal = new Cat("·ç³ª", 6, 4, 100);
    animal->bark();
    animal->eat();
    animal->walk();
    delete animal;

    return 0;  
}
