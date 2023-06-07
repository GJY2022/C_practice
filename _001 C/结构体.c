//#include"g2.h"
//#include<stdio.h>
//#define 整形 int
//
//typedef struct Date_Of_Birth
//{
//	int Year;//年
//	int Month;//月
//	int Day;//日
//}Date_Of_Birth;
//
//typedef struct Student
//{
//	long long ID;
//	char* Name;//姓名
//	int Age;//年龄
//	char* Gender;//性别
//	float Grades;//成绩
//	Date_Of_Birth Info;
//}Student;
//
//void StudentInfo(Student* stu, int i)
//{
//	for(int j = 0;j < i;j++)
//	{
//		printf("学号:%lld,姓名:%s,年龄:%d,性别:%s,成绩:%.3f,%d-%d-%d\n",
//			stu[j].ID, (stu + j)->Name, (stu + j)->Age, (stu + j)->Gender, (stu + j)->Grades,
//			(stu + j)->Info.Year, (stu + j)->Info.Month, (stu + j)->Info.Day);//p[i]=*(p+i)
//	}	
//}
//
//int f4(void)
//{
//	/*int arr[3][4] =
//	{
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12},
//	};
//	int(*p)[4] = arr;
//	int* pp[3] = { p[0],p[1],p[2] };
//	int** ppp = pp;
//	printf("%d\t\n", *(*(ppp + 1)));
//	return 0;*/
//	//整形 x = 10;
//	//printf("%d", x);
//	Student stu1[2] =
//	{
//		{.ID = 202017502028,.Name = "黄华溢",.Age = 24,.Gender = "男",.Grades = 99.9919f,
//		.Info.Year = 2003,.Info.Month = 3,.Info.Day = 4 },
//		{.ID = 202217604032,.Name = "肖锦鲤",.Age = 23,.Gender = "女",.Grades = 79.9919f,
//		.Info.Year = 2004,.Info.Month = 2,.Info.Day = 2 }
//	};
//	Student* stu = &stu1[0];
//	StudentInfo(stu,2);
//	//printf("%zd %zd %zd %zd", sizeof(short), sizeof(float), sizeof(double), sizeof(long long));
//	return 0;
//}