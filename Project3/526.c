//�ٵ�һ��д�ļ����ַ������һ�����ʵĳ��ȣ�����ֻ�ܼ����ڶ����ַ������Լ�����ľͲ�����

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    int i = 14;
//    int num = 0;
//    char test[] = "hello nowcoder";
//    while (test[i] != ' ')
//    {
//        num++;
//        i--;
//    }
//    printf("%d\n", num - 1);
//    //scanf("%s",&test);
//
//    return 0;
//}


//��forѭ�����ʵ���������ֵĽ׳˼���
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int num;
	int i = 1;
	int result = 1;
	scanf("%d",&num);
	for (i = 1;i < num;i++ )
	{
		result = result * (i + 1);
	}
	printf("%d",result);
	return 0;
}

//��whileѭ�����ʵ���������ֵĽ׳˼���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int i = 1;
//	int result = 1;
//	int num;
//	scanf("%d",&num);
//	while (i < num)
//	{
//		result = result * (i + 1);
//		i++;
//	}
//	printf("%d",result);
//	return 0;
//}



//��do whileѭ�����ʵ���������ֵĽ׳˼���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int i = 1;
//	int num;
//	scanf("%d",&num);
//	int result = 1;
//	do
//	{
//		result = result * i;
//	    i++; 
//	} 
//	while (i<=num);
//	printf("%d",result);
//	return 0;
//}

//��for��Ƕ��ѭ�����ʵ��1��+2��+3��+������+n!
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	int j = 1;
//	int num;
//	int result1 = 1;
//	int result2 = 0;
//	printf("����������Ҫ��������֣�");
//	scanf("%d",&num);
//	for (j = 1;j <= num;j++)
//	{
//		for (result1=1,i = 0;i < j;i++)
//		{
//			result1 = result1 * (i+1) ;
//		}
//		result2 = result1 + result2;
//	}
//	printf("%d",result2);
//	return 0;
//}

//��while��Ƕ��ѭ�����ʵ��1��+2��+3��+������+n!
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	int j = 1;
//	int num;
//	int result1 = 1;
//	int result2 = 0;
//	printf("����������Ҫ��������֣�");
//	scanf("%d",&num);
//	while (j <= num)
//	{
//		result1 = 1, i = 0;
//			while (i < j)
//			{
//				result1 = result1 * (i + 1);
//				i++;
//	     	}
//			result2 = result1 + result2;
//			j++;
//	}
//	printf("%d",result2);
//	return 0;
//}


//��do while��Ƕ��ѭ�����ʵ��1�� + 2�� + 3�� + ������ + n!
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	int j = 1;
//	int num;
//	int result1 = 1;
//	int result2 = 0;
//	printf("����������Ҫ��������֣�");
//	scanf("%d", &num);
//	do
//	{
//		result1 = 1, i = 0;
//		{
//			do
//			{
//				result1 = result1 * (i + 1);
//				i++;
//			} while (i < j);
//		}
//		result2 = result1 + result2;
//		j++;
//	}
//	while (j <= num);
//	
//	printf("%d", result2);
//	return 0;
//}


