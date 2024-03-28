#include <stdio.h>

int main(void) {
	int arr[4] = { 10,20,30,40 };
	int str[4] = {};

	char str[4] = "abc";						//4개면 3개 적기

	//주솟값 4바이트 만큼의 차이
	printf("%d %d\n", &arr[0],&arr[1]);			//ctrl + k + ctrl + c  주석
	printf("%d %d\n",arr+0,arr+1);

	int i = 1;
	char c = 'b';
	double d = 3.0;

	int* pi = &i;
	char* pc = &c;
	double* pd = &d;

	printf("%d %d %d\n", pi, pc, pd);
	printf("%d %d %d\n", pi+1, pc+1, pd+1);					//바이트 4, 1, 8 차이

	pi = arr;
	printf("%d %d\n", pi + 1, arr + 1);
	printf("%d %d\n", *(pi + 1), *(arr + 1));
	printf("%d %d\n", pi[1], arr[1]);

	return 0;
}