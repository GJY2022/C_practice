//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//
//int sj(void)
//{
//	return rand();
//}
//
//int* we(int j,int (*p)(void))
//{
//	int* arr;
//	arr = (int*)calloc(j, sizeof(int));
//	if (arr != NULL)
//	{
//		for (int i = 0; i < j; i++)
//		{
//			arr[i] = p();
//			printf("%d\n", arr[i]);
//			printf("%p\n", arr + i);
//		}
//	}
//	return arr;
//}
//
//int f17(void)
//{
//	int a;
//	printf("ÇëÊäÈë\n");
//	scanf_s("%d", &a);
//	int* p;
//	p = we(a, sj);
//	for (int i = 0; i < a; i++)
//	{
//		printf("%d\n", p[i]);
//		printf("%p\n", p + i);
//	}
//	free(p);
//	return 0;
//}