#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void) {
	char password1;
	int password2;
	int ret = 0;
	printf("�����������:");
	scanf("%c%d", &password1, &password2);
	getchar();
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