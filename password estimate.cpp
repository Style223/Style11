#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void) {
	int ch = 0;
	char password[20] = { 0 };
	int ret = 0;
	printf("�����������:");
	scanf("%c%d", &password);
    
	while ((ch = getchar()) != '\n') {
		;
	}


	printf("��ȷ��(Y/N)");
	ret = getchar();
	if (ret == 'Y') {
		printf("��½�ɹ�");
	}
	else {
		printf("ȷ��ʧ��");
	}



	return 0;
}