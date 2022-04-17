#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int w = 0;
	char q[20] = { 0 };
	printf("请输入密码:");
	for (w = 0; w < 3; w++)
	{
		scanf("%s", q);
		if (strcmp(q, "25678851231") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else if (w < 2)//不让最后一次循环打印下一语句
		{
			printf("密码输入错误请重新输入");
		}
	}
	if (w == 3)
	{
		printf("三次密码输入错误，退出程序\n");
	}
	return 0;
}