#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    Animal(string name, unsigned int age, int leg_num)
        : name_(name), age(age), leg_num_(leg_num) {}

    virtual void walk(void) {  // virtual 키워드 추가
        cout << "걷다" << endl;
    }

    virtual void eat(void) {  // virtual 키워드 추가
        cout << "먹다" << endl;
    }

    virtual void bark(void) {  // virtual 키워드 추가
        cout << "뛰다" << endl;
    }

    void cute(void) {
        cout << "매우 귀엽다" << endl;
    }

    // 순수 가상함수(추상메서드)
    virtual void sleep(void) = 0;  // 순수 가상 함수
    virtual void makeSound(void) = 0;  // 순수 가상 함수

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
        cout << "귀여움" << endl;
    }

    void bark() override {
        cout << "야옹야옹" << endl;
    }

    void eat() override {
        cout << "우왕왕" << endl;
    }

    void walk() override {
        cout << "조용조용" << endl;
    }

    void sleep() override {  // 순수 가상 함수 구현
        cout << "Zzz..." << endl;
    }

    void makeSound() override {  // 순수 가상 함수 구현
        cout << "고양이 소리" << endl;
    }

private:
    int cute_level;
};

int main(void) {

    //추상클래스는 객체를 생성할 수 없다(new Animal() 불가)
    Animal* animal = new Cat("루나", 6, 4, 100);
    animal->bark();
    animal->makeSound();
    animal->sleep();
    delete animal;

    return 0;
}
