#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//�ټ��������С
//int main()
//{
//	char test[5] = {'a','b','c','d','\0'};
//	printf("%d",strlen(test));
//	return 0;
//}
// 
// 
// �ڱȽϴ�С
//int main()
//{
//	float a = 0;
//	float b = 0;
//	printf("����������Ҫ�Ƚϴ�С���������֣�\n");
//	scanf("%f%f",&a,&b);
//	if (a > b)
//		printf("�ϴ��ֵΪ:%f\n", a);
//	else if (a < b)
//		printf("�ϴ��ֵΪ:%f\n", b);
//	else
//		printf("���ˣ�����������һ����");
//	return 0;
//}
// 
// 
// 
// �����ú����Ƚϴ�С
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
//	printf("����������Ҫ�Ƚϴ�С���������֣�\n");
//	scanf("%f%f",&a,&b);
//	c = Max(a,b);
//	printf("%f",c);
//	return 0;
//}
// 
// 
//�� whileѭ�����1-10
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
//������
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

//�������������֮��Ľϴ���
//int main()
//{
//	int a = 10;
//	int b = 90;
//	int c = 0;
//	c = (a>b?a:b);
//	printf("%d",c);
//	return 0;
//}

//�߽ṹ��ĳ���
//struct People
//{
//	char name[20];
//	int age;
//	char sex[8];
//};
//int main()
//{
//	struct People student = {"�����",24,"Ů"};
//	printf("%d\n",student.age);
//	student.age = 18;
//	printf("%d\n", student.age);
//	return 0;
//}


//���ж�һ�������Ƿ�Ϊ����
//int main()
//{
//	int num;
//	printf("����������Ҫ�жϵ����֣�");
//	scanf("%d",&num);
//	if (num % 2 == 1)
//		printf("������\n");
//	else
//		printf("��������");
//	return 0;
//}


//���ж�һ�������Ƿ�Ϊ����
//int main()
//{
//	int num;
//	printf("����������Ҫ�жϵ����֣�");
//	scanf("%d",&num);
//	num % 2 == 1 ? printf("������") : printf("��������");
//	return 0;
//}


//������whileѭ��������100���ڵ�����
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