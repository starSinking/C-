#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���ز�����������1�ĸ���
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		if (n % 2 ==1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	printf("%d\n", count_one_bits(15));
//	system("pause");
//	return 0;
//}

//��ȡһ���������Ƶ�������ż��λ
//void xulie(int n)
//{
//	int i = 0;
//	printf("�������λ��\n");
//	for (i = 31;i >= 0;i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n���ż��λ��\n");
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	xulie(11);
//	system("pause");
//	return 0;
//}


//��ȡһ��������ÿһλ
//void Num(int n)
//{
//	if (n>9)
//	{
//		Num(n / 10);
//	}
//	printf("%d ", n % 10);
//
//}
//int main()
//{
//	Num(356);
//	system("pause");
//	return 0;
//}
//�Ƚ��������Ķ�����λ�Ĳ�ͬ
int Num1(int a,int b)
{
	int i = 0;
	int count = 0;
	for (i = 0;i < 32;i++)
	{
		int a1 = (a >> i)&1;
		int b1 = (b >> i) & 1;
		if ((a1^b1) != 0)
		{
			count++;
		}		
	}
	return count;

}
int main()
{
	printf("%d\n", Num1(1999, 2299));
	system("pause");
	return 0;
}