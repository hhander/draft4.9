#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>

//int main()
//{
//	FILE* pf;
//	pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return;
//	}
//	fputs("abcdef", pf);
//
//	fseek(pf, 2, SEEK_CUR);
//	int ch = fgetc(pf);
//	printf("%c", ch);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf;
//	pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return;
//	}
//	fseek(pf, 2, SEEK_CUR);//ftell rewind    feof
//	int ch = fgetc(pf);  
//	printf("%c", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf;
//	pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return;
//	}
//	fseek(pf, -2, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//{
//	int a;
//	char b;
//	short c;
//	short d;
//};
//int main()
//{
//	printf("%d", sizeof(struct S));
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s,line:%d,date:%s,time:%s,i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	printf("%s", __STDC__);
//	return 0;
//}

//#define MAX 100
//#define STR "hehe"
//#define  SQUARE(X) (X)*(X)
//int main()
//{
//	printf(STR);
//	int ret = SQUARE(6);
//	printf("%d", ret);
//	return 0;
//}
//void print(int a)
//{
//	printf("the value %c is%d\n", a,a);
//}





 
//#define PRINT(X) printf("the value "#X" is:%d\n",X);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value is:%d", a);
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}
#define MAX(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = MAX(a++, b++);
//	printf("MAX=%d\n", ret);//21
//	printf("%d\n", a);//11
//	printf("%d\n", b);//22
//	return 0;
//}

#define MAX(X,Y) ((X)>(Y)?(X):(Y))

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("%d\n", max);
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//#define SIZEOF(type) sizeof(type);
//int main()
//{
//	int ret = SIZEOF(int);
////#undef SIZEOF
//    ret = SIZEOF(int);
//	printf("%d", ret);
//	return 0;
//}

/*#define DEBUG
int main()
{
#ifdef DEBUG
	printf("heh");
#endif
	return 0;
}*/ 
//#include<stddef.h>


//#define OFFSETOF(struct_name,struct_member) (int)&(((struct_name*)0)->struct_member)
//
//struct S
//{
//	int a;
//	double b;
//	int c;
//};
//
//int main()
//{
//	/*struct S s;*/
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, b));
//	printf("%d\n", OFFSETOF(struct S, c));
//	return 0;
//}

//void FindSingle(int* arr,int sz)
//{
//	int* p1;
//	int* p2;
//	int* CUR = arr;
//	int i = 0;
//	while (sz--)
//	{
//		p1 = CUR;
//		p2 = (p1+1);
//		if (*p1 == *p2)
//		{
//			CUR++;
//			break;
//		}
//		else
//		{
//			printf("%d", *CUR);
//		}
//		CUR++;
//	}
//}
//
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,2,3,4,5,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	FindSingle(arr,sz);
//	return 0;
//}
//#include<assert.h>
//char* My_Strstr(char* p1, char* p2)
//{
//	assert(p1 && p2);
//	char* CUR = p1;
//	char* s1;
//	char* s2;
//	while (*CUR)
//	{
//		s1 = CUR;
//		s2 = p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && !(*s1 - *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return CUR;
//		}
//		CUR++;
//	}
//	return NULL;
//}
//
//
//
//
//int main()
//{
//	char ch1[] = "abbcdef";
//	char ch2[] = "bbc";
//	char* p = My_Strstr(ch1, ch2);
//	if (p == NULL)
//	{
//		printf("没找到");
//	}
//	else
//	{
//		printf("找到了是：%s\n", p);
//	}
//	return 0;
//}


//找单身

//void Bubble_Sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//void FindSingle(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz;)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			i += 2;
//		}
//		else
//		{
//			printf("%d", arr[i]);
//			i += 1;
//		}
//	}
//}
//
//
//
//int main()
//{
//	int arr[11] = { 1,2,1,2,3,4,4,5,6,5,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_Sort(arr, sz);
//	FindSingle(arr, sz);
//	//int i = 0;
//	//for(i = 0; i < sz; i++)
//	//{
//	//	printf("%d", arr[i]);
//	//}
//	return 0;
//}


int Fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		int a = 1;
		int b = 1;
		int c = 2;
		int i = 0;
		for (i = 2; i < n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}



int main()
{
	int n = 0;
	int input = 0;
	do
	{
		printf("请输入你要求的斐波拉契");
		scanf("%d", &n);
		if (n > 0)
		{
			int ret = Fib(n);
			printf("斐波拉契是%d \n", ret);
			printf("请选择1.继续 0.停止");
			scanf("%d", &input);
		}
		else
		{
			printf("error");
		}
	} while (input);
	return 0;
}