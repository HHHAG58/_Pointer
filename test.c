#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//һά���鴫��
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test2(int *arr[20])
//{}
//void test2(int **arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//��ά���鴫��
//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
////void test2(int arr[3][])//����
////{}
////void test3(int *arr)//����
////{}
////void test4(int **arr)//����
////{}
//void test5(int (*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr);
//	test5(arr);
//	return 0;
//}

//��������(һ��ָ��)
//void test1(int* p)
//{}
//void test2(char* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}

//��������(����ָ��)
//void test(int **p)
//{}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);
//
//	return 0;
//}

//����ָ�� - ָ������ָ��
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", Add(a, b));
//	//&�������ͺ��������Ǻ����ĵ�ַ
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello bit");
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����Դ��4�������ĵ�ַ - ����ָ�������
//	int(*pa)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}

//��ϰ
//char* my_strcpy(char* dest, const char* src)
//{}
////1.дһ������ָ��pf,�ܹ�ָ��my_strcpy
////2.дһ������ָ������parr,�ܹ����4��my_strcpy�����ĵ�ַ
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*parr[4])(char*, const char*) = { my_strcpy };
//	return 0;
//}

//����ָ�����鰸�� - ������(����)
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}

void menu()
{
	printf("****************************\n");
	printf("**** 1.add        2.sub ****\n");
	printf("**** 3.mul        4.div ****\n");
	printf("**** 5.xor        0.exit****\n");
	printf("****************************\n");
}

//��ͨд��,���Ż�
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("����������������:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("����������������:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("����������������:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("����������������:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����,������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//�Ż� - ����ָ������
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������:");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����,������ѡ��\n");
//		}
//	} while (input);
//
//	return 0;
//}

//switch case�Ż�
//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����,������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//ָ����ָ�������ָ��
//int main()
//{
//	int (*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//����ָ������
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr��һ������ָ��,ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)
//	
//	return 0;
//}

//�ص�����
//void Print(char* str)
//{
//	printf("haha:%s", str);
//}
//
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("һ�ۻ�");
//}
//
//int main()
//{
//	test(Print); 
//	return 0;
//}






























