#include <stdio.h>


//�迭�� ��� ��Ҹ� 0���� �ٲ��ִ� �Լ�
void erase(int* ptr, int length) {

	for (int i = 0; i < 4; i++) 
		ptr[i] = 0;
	

}

int main(void) {
	int arr[4] = { 10,20,30,40 };
	int length = sizeof(arr) / sizeof(arr[0]);
	erase(arr, length);

	//�迭�� ��� ��Ҹ� ���
	for (int i = 0; i < 4; i++) 
		printf("%d", arr[i]);


	return 0;
}