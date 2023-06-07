//#include<stdio.h>
//#include<malloc.h>
//
//int pvz(void)
//{
//	printf("1\n");
//	return 1;
//}
//
//typedef struct Asm
//{
//	int(*p)();
//}Asm;
//
//int main(void)
//{
//	Asm* asm = (Asm*)malloc(sizeof(Asm));
//	
//	if (asm != NULL)
//	{
//		asm->p = pvz();
//		printf("%d\n", (int)asm->p);
//	}
//	free(asm);
//
//	return 0;
//}
