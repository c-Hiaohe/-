#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	while (i<=10)
	{
		if (i == 5)
			continue;//这里用continue会再次进行while判断，
		printf("%d",i);
		i++;
	}
	return 0;
}


///int main()
//{
//	int n = 1;
//	int m = 2;
//	int d = 1;
//	switch (n)
//	
//	{
//	case 1:n++;
//	case 2:m++;
//	case 3:
//		switch (d)//括号中是1就从case1开始执行，2就从case开始执行。
//		{
//		case 1:n++;
//		case 2:m++; n++; 
//		default:
//			break;
//		}
//	case 4:m++;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n",m,n);
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期2");
//		break;
//	case 3:
//		printf("星期3");
//		break;
//	case 4:
//		printf("星期4");
//		break;
//	case 5:
//		printf("星期5");
//		break;
//	case 6:
//		printf("星期6");
//		break;
//	case 7:
//		printf("星期7");
//		break;
//	default:
//		printf("输出错误\n");
//		break;
//	//跳出swithf范围
//	}
//	return 0;
//}
//{
//	int i = 1;
//	while (i <= 100) 
//	{
//		if (i % 2 == 1)
//			printf("奇数为%d\n",i); 
//		i++;
//	}
//    return 0;
//}


//{
//	int num = 5;
//	if (5 == num)//if 只有一个‘=’意思是赋值，那么可以打印呵呵，
//		printf("呵呵\n");
//	return 0;
//}


//#include<stdio.h>;
//int main()
//{
//	int b = 1; int a =1;
//
//	if (a == 1)
//	
//		if (b == 2)
//			printf("呵呵\n");
//	
//		else
//			printf("哈哈\n");
//	
//	return 0;
//}

//int main()
//{
//	int age = 88;
//	if (age < 18)
//		printf("未成年\n");
//	else if (15 <= age && age < 18)
//		printf("青年\n");
//	else if (18 <= age && age < 50)
//		printf("壮年\n");
//	else if (50 <= age && age < 99)
//		printf("老年\n");
//	//int a = 0;//一个分号就是一条语句，
//	return 0;
//}