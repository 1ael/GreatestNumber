#include <stdio.h>

int main() {

	int num1, num2, num3;
	
	printf("enter value of number one, number two, and number three:\n");

	scanf("%d %d %d", &num1, &num2, &num3);

	if ((num1 > num2) && (num1 > num3))
		printf("number one is greatest\n");
	else if ((num2 > num1) && (num2 > num3))
		printf("number two is greatest\n");
	else
		printf("number three is greatest\n");
	return 0;
}

