#include <stdio.h>

int main(void) {
	int arr[4] = { 10,20,30,40 };
	int str[4] = {};

	char str[4] = "abc";						//4���� 3�� ����

	//�ּڰ� 4����Ʈ ��ŭ�� ����
	printf("%d %d\n", &arr[0],&arr[1]);			//ctrl + k + ctrl + c  �ּ�
	printf("%d %d\n",arr+0,arr+1);

	int i = 1;
	char c = 'b';
	double d = 3.0;

	int* pi = &i;
	char* pc = &c;
	double* pd = &d;

	printf("%d %d %d\n", pi, pc, pd);
	printf("%d %d %d\n", pi+1, pc+1, pd+1);					//����Ʈ 4, 1, 8 ����

	pi = arr;
	printf("%d %d\n", pi + 1, arr + 1);
	printf("%d %d\n", *(pi + 1), *(arr + 1));
	printf("%d %d\n", pi[1], arr[1]);

	return 0;
}