#include <iostream>
#include <string>

using namespace std;

template <typename T>
T sum(T a, T b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}

string sum(string a, string b) {
	return a + b;
}

void main(void) {
	cout << sum(1, 2) << endl;
	cout << sum(1.1, 2.1) << endl;
	cout << sum("1", "2") << endl;
}