#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int w = 0;
	char q[20] = { 0 };
	printf("����������:");
	for (w = 0; w < 3; w++)
	{
		scanf("%s", q);
		if (strcmp(q, "25678851231") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else if (w < 2)//�������һ��ѭ����ӡ��һ���
		{
			printf("���������������������");
		}
	}
	if (w == 3)
	{
		printf("����������������˳�����\n");
	}
	return 0;
}