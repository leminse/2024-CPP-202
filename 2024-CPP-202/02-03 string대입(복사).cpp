#include <stdio.h>
#include <string.h>

int main(void) {
	char str[30] = "develop hungry";
	char str2[30];

	//str�� �ִ� ������ str2�� ����
	strcpy(str2, str);

	printf("%s", str2);



}
