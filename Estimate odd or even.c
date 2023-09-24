#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
int main(void){

	int num1;
	printf("input a number:");
	scanf("%d", &num1);
	
	if (num1 != 0) {
		if (num1 % 2 != 0) {
			printf("This is a odd");

		}
		else {
			printf("This is a even");

		}
	}

	return 0;
}*/
int main(void) {
	
	int i=1;
	int ;
	for (i >= 1;i <= 100;i++) {
		
		if (i% 2 != 0) {
			printf("odd=%d\n",i);
		}
		else {
			printf("even=%d\n",i);
		}

	}
	return 0;
}