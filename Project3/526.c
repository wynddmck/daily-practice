//①第一次写的计算字符串最后一个单词的长度，但是只能计算内定的字符串，自己输入的就不可以

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


//②for循环语句实现所输数字的阶乘计算
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

//③while循环语句实现所输数字的阶乘计算
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



//④do while循环语句实现所输数字的阶乘计算
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

//⑤for的嵌套循环语句实现1！+2！+3！+···+n!
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
//	printf("请输入你想要计算的数字：");
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

//⑥while的嵌套循环语句实现1！+2！+3！+···+n!
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
//	printf("请输入你想要计算的数字：");
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


//⑥do while的嵌套循环语句实现1！ + 2！ + 3！ + ··· + n!
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
//	printf("请输入你想要计算的数字：");
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


