#include<stdio.h>
#include<string.h>
//int main()
//{
//	//  \t水平制表符
//	//  \ddd  d是八进制数字
//	//  先转换成十进制，代表所对应的阿斯克码值所对应的符号
//
//	/*int n;
//	int a, b, c, d;
//	scanf_s("%d", &n);
//	if (1000 <= n <= 9999)
//	{
//		a = n / 1000;
//		b = n / 100 % 10;
//		c = n / 10 % 10;
//		d = n % 10;
//		printf("%d%d%d%d", d, c, b, a);
//	}*/
//
//	int n;
//	scanf_s("%d", &n);
//	while (n != 0)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}

//int main()
//{
//	int n=0;
//	int result = 0;
//	int i = 0;
//	int k = 1;
//	scanf_s("%d", &n);
//	while (n != 0)
//	{
//		
//		i = n % 2;
//		result = k * i + result;
//		k *= 10;
//		n /= 2;
//	}
//	printf("%d", result);
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		/*putchar(ch + 32); */
		printf("%c\n", ch + 32);
		getchar();//清理
	}
	return 0;
}