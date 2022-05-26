#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//①计算数组大小
//int main()
//{
//	char test[5] = {'a','b','c','d','\0'};
//	printf("%d",strlen(test));
//	return 0;
//}
// 
// 
// ②比较大小
//int main()
//{
//	float a = 0;
//	float b = 0;
//	printf("请输入您需要比较大小的两个数字：\n");
//	scanf("%f%f",&a,&b);
//	if (a > b)
//		printf("较大的值为:%f\n", a);
//	else if (a < b)
//		printf("较大的值为:%f\n", b);
//	else
//		printf("巧了，这两个数字一样大");
//	return 0;
//}
// 
// 
// 
// ③利用函数比较大小
//int Max(float num1, float num2)
//{   
//	int z = 0;
//	if (num1 > num2)
//		z = num1;
//	else if (num1 < num2)
//		z = num2;
//	return z;
//}
//int main()
//{
//	float a = 0;
//	float b = 0;
//	float c = 0;
//	printf("请输入您需要比较大小的两个数字：\n");
//	scanf("%f%f",&a,&b);
//	c = Max(a,b);
//	printf("%f",c);
//	return 0;
//}
// 
// 
//④ while循环输出1-10
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		printf("%d\n",a);
//		a++;
//	}
//	printf("%d",a);
//	return 0;
//}
// 
// 
//⑤数组
//int main()
//{
//	char arr[] = "abc\0";
//	int num1;
//	printf("%d\n",sizeof(arr));
//	printf("%d\n", strlen(arr));
//	num1 = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", num1);
//	return 0;
//}
//
// 

//⑥输出两个数字之间的较大者
//int main()
//{
//	int a = 10;
//	int b = 90;
//	int c = 0;
//	c = (a>b?a:b);
//	printf("%d",c);
//	return 0;
//}

//⑦结构体的尝试
//struct People
//{
//	char name[20];
//	int age;
//	char sex[8];
//};
//int main()
//{
//	struct People student = {"王娅妮",24,"女"};
//	printf("%d\n",student.age);
//	student.age = 18;
//	printf("%d\n", student.age);
//	return 0;
//}


//⑧判断一个数字是否为奇数
//int main()
//{
//	int num;
//	printf("请输入你需要判断的数字：");
//	scanf("%d",&num);
//	if (num % 2 == 1)
//		printf("是奇数\n");
//	else
//		printf("不是奇数");
//	return 0;
//}


//⑨判断一个数字是否为奇数
//int main()
//{
//	int num;
//	printf("请输入你需要判断的数字：");
//	scanf("%d",&num);
//	num % 2 == 1 ? printf("是奇数") : printf("不是奇数");
//	return 0;
//}


//⑩利用while循环语句输出100以内的奇数
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		if(i%2==1)
//		{ 
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}