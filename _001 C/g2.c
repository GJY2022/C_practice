//#include"g2.h"
//
//int main(int argc, char* argv[])
//{
//	int a[10] = { 0 };
//	int max = 10;
//	int min = 0;
//	int x = 0;
//	int b = 0;
//
//	while (1)
//	{
//		printf("请选择\n输入1为存入数值\n输入2为查看数值\n存入上限为10\n");
//		scanf_s("%d", &x);
//		if (x == 1 || x == 2)
//		{
//			switch (x)
//			{
//			case 1:
//				if (min >= max)
//				{
//					printf("数组已满，无法再存入\n");
//				}
//				else
//				{
//					printf("请输入\n");
//					scanf_s("%d", &b);
//					printf("输入的值为%d\n", b);
//					a[min] = b;
//					min++;
//				}
//				break;
//			case 2:
//				printf("-------------------------\n");
//				printf("已存入数组的值\n");
//				for (int i = 0; i < min; i++)
//				{
//					printf("%d\t\n", a[i]);
//				}
//				printf("-------------------------\n");
//				break;
//			default:
//				return 0;
//			}
//		}
//		else
//		{
//			printf("输入错误,请重试\n");
//		}
//	}
//}