#include <stdio.h>
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1;a < 6;a++)
//	{
//		for (b = 1;b < 6;b++)
//		{
//			for (c = 1;c < 6;c++)
//			{
//				for (d = 0;d < 6;d++)
//				{
//					for (e = 0;e < 6;e++)
//					{
//						if ((((b == 2 && a != 3) == 1 )|| (( b!= 2 && a == 3) == 1)==1)
//							&&(((b==2&&e!=4)==1)||((b!=2&&e==4)==1)==1)
//							&&(((c==1&&d!=2)==1)||((c!=1&&d==2)==1)==1)
//							&&(((c==5&&d!=3)==1)||((c!=5&&d==3)==1)==1)
//							&&(((e==4&&a!=1)==1)||((e!=4&&a==1)==1)==1))
//
//						{
//							if (a != b&&a != c&&a != d&&a != e&&b != c&&b != d&&b != e&&c != d&&c != e&&c != e)
//							{
//								printf("%d %d %d %d %d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个。
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//判断凶手
//int main()
//{
//	char killer = 0;
//	for (killer = 'A';killer<= 'D';killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c", killer);
//		}
//	}
//}
//杨辉三角
void Yanghui(int arr[][10],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j <= i;j++)
		{
			if (j == 0 || i == j)
			{
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}				
		}
	}
}
void Show(int arr[][10], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j <= i;j++)
		{
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[10][10] = {0};
	Yanghui(arr, 10, 10);
	Show(arr, 10, 10);
	system("pause");
}