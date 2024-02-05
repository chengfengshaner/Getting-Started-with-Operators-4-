//（类型） - 强制类型转换
#include <stdio.h>
int main()
{
	int a = 3.14;//从double转化成int可能会丢失精度
	//int a =(int)3.14; 不推荐，但可以强制使用不会出现警告

	printf("%d\n", a);
	return 0;
}

