#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	while (i<=10)
	{
		if (i == 5)
			continue;//������continue���ٴν���while�жϣ�
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
//		switch (d)//��������1�ʹ�case1��ʼִ�У�2�ʹ�case��ʼִ�С�
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
//		printf("����һ");
//		break;
//	case 2:
//		printf("����2");
//		break;
//	case 3:
//		printf("����3");
//		break;
//	case 4:
//		printf("����4");
//		break;
//	case 5:
//		printf("����5");
//		break;
//	case 6:
//		printf("����6");
//		break;
//	case 7:
//		printf("����7");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	//����swithf��Χ
//	}
//	return 0;
//}
//{
//	int i = 1;
//	while (i <= 100) 
//	{
//		if (i % 2 == 1)
//			printf("����Ϊ%d\n",i); 
//		i++;
//	}
//    return 0;
//}


//{
//	int num = 5;
//	if (5 == num)//if ֻ��һ����=����˼�Ǹ�ֵ����ô���Դ�ӡ�Ǻǣ�
//		printf("�Ǻ�\n");
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
//			printf("�Ǻ�\n");
//	
//		else
//			printf("����\n");
//	
//	return 0;
//}

//int main()
//{
//	int age = 88;
//	if (age < 18)
//		printf("δ����\n");
//	else if (15 <= age && age < 18)
//		printf("����\n");
//	else if (18 <= age && age < 50)
//		printf("׳��\n");
//	else if (50 <= age && age < 99)
//		printf("����\n");
//	//int a = 0;//һ���ֺž���һ����䣬
//	return 0;
//}