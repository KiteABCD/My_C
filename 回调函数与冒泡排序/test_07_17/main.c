#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

struct Stu
{
	char name[20];
	int age;
};

int cmp(void* e1, void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_f(void* e1, void* e2)
{
	return (int)(*(double*)e1 - *(double*)e2);
}

void swap(char* e1, char* e2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *e1;
		*e1 = *e2;
		*e2 = temp;
		e1++;
		e2++;
	}
}

void bubble_sort(void* arr,int sz,int width,int(*cmp)(void*,void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)arr+j*width,(char*)arr+(j+1)*width) > 0)
			{
				swap(((char*)arr + j * width), (char*)arr + (j + 1)*width,width);
			}
		}
	}
}
void test1()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test2()
{
	double f[] = { 10.0,6.0,5.0,2.0,3.0,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	bubble_sort(f, sz, sizeof(f[0]), cmp_f);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%lf ", f[i]);
	}
}

int cmp_stu(void* e1, void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test3()
{
	struct Stu s3[] = { {"lisi",20},{"wangwu",40},{"liuhu",10} };
	int sz = sizeof(s3) / sizeof(s3[0]);
	bubble_sort(s3, sz, sizeof(s3[0]), cmp_stu);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", s3[i].age);
	}
}

int main()
{
	test3();
	system("pause");
	return 0;
}