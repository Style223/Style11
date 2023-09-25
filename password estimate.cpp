#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void) {
	int ch = 0;
	char password[20] = { 0 };
	int ret = 0;
	printf("输入你的密码:");
	scanf("%c%d", &password);
    
	while ((ch = getchar()) != '\n') {
		;
	}


	printf("请确认(Y/N)");
	ret = getchar();
	if (ret == 'Y') {
		printf("登陆成功");
	}
	else {
		printf("确认失败");
	}



	return 0;
}