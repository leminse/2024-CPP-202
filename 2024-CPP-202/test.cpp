#include <iostream>
#include <string>

using namespace std;

class Animal {
    string name;
    int weight;

void PrintMethod() {
    cout << "�θ� �����" << endl;
    }


public:
    // �⺻ ������
    Animal() { // �⺻������ �ʱ�ȭ
        cout << "Animal ����" << endl;
    }
    ~Animal() { cout << "Animal �Ҹ�" << endl; }

    // �Ű����� ������
    Animal(const string& name, int weight) : name(name), weight(weight) { // ��� �ʱ�ȭ
        cout << name << "�� ���Դ� " << weight << "�Դϴ�" << endl;
    }
    void PrintMethod() {
        Animal::PrintMethod();
        cout << "�ڽ� �����" << endl;
    }
};

class Cat : public Animal {
public:
    // �Ű����� ������
    Cat(const string& name, int weight)
        : Animal(name, weight) // Animal Ŭ������ �Ű����� ������ ȣ��
    {
        cout << "Cat ����" << endl;
    }
    ~Cat() { cout << "Cat �Ҹ�" << endl; }
};

// `main` �Լ� ����
int main() {
    // Cat ��ü ����
    Cat cat("�̸������", 55); // �̶� Animal�� �Ű����� �����ڰ� ȣ���
}

int main() {
    Cat cat;
    cat.PrintMethod();
    return 0;
}







