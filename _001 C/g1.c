//#include"g1.h"
//
//int main(void)
//{
//	int arr[6][6]=
//	{
//		1,1,1,1,1,1,
//		1,0,0,0,0,1,
//		1,0,2,0,0,1,
//		1,0,0,0,0,1,
//		1,0,0,0,0,1,
//		1,1,1,1,1,1,
//	};
//
//	int x = 2, y = 2;
//
//	while (1)
//	{
//		for(int i=0;i<6;i++)
//		{
//			for(int j=0;j<6;j++)
//			{
//				printf(" %d", arr[i][j]);
//			}
//			printf("\n");
//		}
//		switch(_getch())
//		{
//		case 'd':
//			if(arr[x][y + 1] == 0)
//			{
//				arr[x][y] -= 2;
//				arr[x][y + 1] += 2;
//				y++;
//			}
//			break;
//		case 'a':
//			if(arr[x][y - 1] == 0) 
//			{
//				arr[x][y] -= 2;
//				arr[x][y - 1] += 2;
//				y--;
//			}
//			break;
//		case 'w':
//			if (arr[x - 1][y] == 0)
//			{
//				arr[x][y] -= 2;
//				arr[x - 1][y] += 2;
//				x--;
//			}
//			break;
//		case 's':
//			if (arr[x + 1][y] == 0)
//			{
//				arr[x][y] -= 2;
//				arr[x + 1][y] += 2;
//				x++;
//			}
//			break;
//		default:
//			break;
//		}
//		system("pause");
//	}
//
//	return 0;
//}