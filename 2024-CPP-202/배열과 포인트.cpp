#include <stdio.h>

int main(void) {
	int arr[4] = { 10,20,30,40 };

	char str[4] = "abc";						//4개면 3개 적기

	//주솟값 4바이트 만큼의 차이
	printf("%d %d\n", &arr[0],&arr[1]);			//ctrl + k + ctrl + c  주석
	printf("%d %d\n",arr+0,arr+1);

	return 0;
}