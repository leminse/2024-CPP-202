#include <string>
#include <iostream>

using namespace std;

class C {
public:
    C(bool g_pointer, bool g_structure, bool I_stdio, bool g_array, bool g_if, bool g_for)
        : g_pointer_(g_pointer), g_structure_(g_structure), I_stdio_(I_stdio), g_array_(g_array), g_if_(g_if), g_for_(g_for)
    {}

    void print_show() {
        cout << "포인터" << g_pointer_ << endl;
        cout << "구조체" << g_structure_ << endl;
        cout << "stdio" << I_stdio_ << endl;
        cout << "배열" << g_array_ << endl;
        cout << "조건문" << g_if_ << endl;
        cout << "for문" << g_for_ << endl;
    }

    void dynamic_allocation_int() {
        int* ptr = (int*)malloc(sizeof(int));
        return ptr;                                         //c언어의 동적할당
    }   

    void free_dynamic_allocation_int(int* ptr) {
        free(ptr);                                      //C언어 동적할당
    }

private:
    bool g_pointer_;
    bool g_structure_;
    bool I_stdio_;
    bool g_array_;
    bool g_if_;
    bool g_for_;
};

class CPP : public C {
public:
    CPP(bool g_pointer, bool g_structure, bool I_stdio, bool g_array, bool g_if, bool g_for, bool g_class, bool g_inheritance, bool g_reference)
        : C(g_pointer, g_structure, I_stdio, g_array, g_if, g_for), g_class_(g_class), g_inheritance_(g_inheritance), g_reference_(g_reference)
    {}

    void print_show() {
        C::print_show();
        cout << "클래스" << g_class_ << endl;
        cout << "상속" << g_inheritance_ << endl;
        cout << "참조" << g_reference_ << endl;
    }

    int* dynamic_allocation_int() {
        int* ptr = new int;
        return ptr;
    }

    void free_dynamic_allocation_int(int* ptr) {
        delete(ptr);                                    //C++언어 동적할당
    }

private:
    bool g_class_;
    bool g_inheritance_;
    bool g_reference_;
};

int main() {
    CPP* cpp = new CPP(true, true, true, true, true, true, true, true, true);
    cpp->print_show();
    delete cpp;
    return 0;
}