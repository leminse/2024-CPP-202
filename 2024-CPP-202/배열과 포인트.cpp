#include <stdio.h>

int main(void) {
	int arr[4] = { 10,20,30,40 };

	char str[4] = "abc";						//4���� 3�� ����

	//�ּڰ� 4����Ʈ ��ŭ�� ����
	printf("%d %d\n", &arr[0],&arr[1]);			//ctrl + k + ctrl + c  �ּ�
	printf("%d %d\n",arr+0,arr+1);

	return 0;
}