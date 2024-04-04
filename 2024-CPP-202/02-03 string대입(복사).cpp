#include <stdio.h>

int main(void) {
	char str[30] = "develop hungry";
	char str2[30];

	//str에 있는 내용을 str2에 복사
	//'\0'을 만날때 까지
	int i = 0;
	for (; str[i] != '\0'; i++) 				//for문은 한 줄 일시 {}사용 안해도 됨.
		str2[i] = str[i];

	str2[i] = str[i];							//널문자('\0')복사

	printf("%s", str2);



}
