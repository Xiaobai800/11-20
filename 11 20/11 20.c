#include<stdio.h>
#include<string.h>
//int main()
//{
//	//  \tˮƽ�Ʊ��
//	//  \ddd  d�ǰ˽�������
//	//  ��ת����ʮ���ƣ���������Ӧ�İ�˹����ֵ����Ӧ�ķ���
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
		getchar();//����
	}
	return 0;
}