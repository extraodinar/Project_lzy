
//int fun(int n)//猴子吃桃问题
//{
//	if (n == 9)
//		return 4;
//	else return (fun(n + 1) +1)* 2;
//}
//int main()
//{
//	printf("%d", fun(8));
//	return 0;
//}
//int main()
//{
//	int i;
	/*char arr1[] = { 'a','b','c'};
	char arr2[] = "abc";
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));*/
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//都差4，连续开辟了空间
//	for(i=0;i<10;i++)
//	printf("%p\n", &arr[i]);
//	return 0;
//}
//二维数组的创建
	//int a = 16;//二进制为       00000000000000000000000000010000（补码）
	//int c = -1;//原码为10000000000000000000000000000001  反码为11111111111111111111111111111110
	//                                          //补码为反码加一 11111111111111111111111111111111
	//                                             //右移后      11111111111111111111111111111111 
	//int b = a >> 1;//右移操作符 （最右边这个0丢弃，最前面加一个原符号（正数为0，负数为1））
	//int d = c >> 1;
	//printf("%d\n", b);//左移操作符直接去掉最左边的值，最右边加个0；
	//printf("%d\n", d);//b=8
	/*int a, b;
	scanf_s("%d%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
*/
	/*int n,count=0;
	scanf_s("%d", &n);
	while (n != 0)
	{
		if (n% 2 == 1)
			count++;
		n = n / 2;	
	}
	printf("%d", count);
	return 0;
}*/
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//	int main()
//	{
//		char ss[10] = "12345";
//		strcat_s(ss,"6789");
//		gets(ss);
//		printf("%s\n", ss);
//		return 0;
//	}
//#include <stdio.h>
//int main()
//{
//	int a = 300;
//	int* p = &a;
//	printf("%p",p);
//	return 0;
//}
//#include <stdio.h>
//
//#include <math.h>
//
//void fun(int a[])
//
//{
//
//	int t, i, j;
//
//	for (j = 0; j < 5; j++)
//
//	{
//
//		for (i = 0; i < 4; i++)
//
//		{
//
//			if (abs(a[i]) > abs(a[i + 1]))
//
//			{
//
//				t = a[i];
//
//					a[i] = a[i + 1];
//
//					a[i + 1] = t;
//
//			}
//
//		}
//
//	}
//
//}
//
//void main()
//
//{
//
//	int a[5];
//
//	int i;
//
//	for (i = 0; i < 5; i++)
//
//	{
//
//		scanf_s("%d", &a[i]);
//
//	}
//
//	fun(a);
//
//	for (i = 0; i < 5; i++)
//
//		printf("%d\n", a[i]);
//
//}
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	if (a++ > 1)
//		printf("%d\n", a);
//	else
//		printf("%d\n", a--);
//	printf("%d", a);
	/*char* s = "abcde";
	s = s + 2;
	printf("%s", s);
	return 0;*/
//}
//#include <stdio.h>
//void fun(int a[],int n)
//{
//	int i, j,t;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[5];
//	int i;
//	for (i = 0; i < 5; i++)
//		scanf_s("%d", &a[i]);
//	fun(a, 5);
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(a + i));
//	}
	/*int a[100];
	int i, n, j,t;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);*/
	/*return 0;
}*/
//#include <stdio.h>
//int fun(int n)
//{
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//	if (i == n)
//		return 1;
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	printf("%d", fun(n));
//}
//#include <stdio.h>
//void fun(int a[],int n)
//{
//	int i, j, t;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = i+1; j < n; j++)
//		{
//			if (a[j] > a[i])
//			{
//				t = a[j];
//				a[j] = a[i];
//				a[i] = t;
//			}
//		}
//	}
//}
//int main()
//	{
//	int a[10];
//	int i;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	fun(a, 10);
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(a + i));
//	return 0;
//	}
//

//#include <stdio.h>
//long int fun(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * fun(n - 1);
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	printf("%ld", fun(n));
//}
//#include <stdio.h>
//int bin_search(int a[],int n)
//{
//	int left, right, mid;
//	right = 20;
//	left = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (a[mid] == n)
//		{
//			return mid;
//			break;
//		}
//		if (a[mid] > n)
//			right = mid - 1;
//		if (a[mid] < n)
//			left = mid + 1;
//	}
//	if (left > right)
//		return -1;
//}
//int main()
//{
//	int n,i;
//	int c;
//	int a[20];
//	scanf_s("%d", &n);
//	for (i = 0; i < 20; i++)
//		scanf_s("%d", &a[i]);
//	c=bin_search(a, n);
//	printf("%d", c);
//	return 0;
//}
//#include <stdio.h>
//char fun(float score)
//{
//	if (score >= 90 && score <= 100)
//		return 'A';
//	else if (score >= 80 && score <= 89)
//		return 'B';
//	else if (score >= 70 && score <= 79)
//		return 'C';
//	else if (score >= 60 && score <= 69)
//		return 'D';
//	else
//		return 'E';
//}
//int main()
//{
//	float score=0;
//	scanf_s("%f", &score);
//	printf("%c", fun(score));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int m, n,t,i,j;
//	scanf_s("%d%d", &n, & m);
//	if (m < n)
//	{
//		t = m;
//		m = n;
//		n = t;
//	}
//	for (i = n; i <= m; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i% j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	float a[8] = { 65.5,68,76,79,80,85,92,100 };
//	float k;
//	scanf_s("%f", &k);
//	int right = 8;
//	int left = 0;
//	int mid;
//	while (left <= right)
//	{
//		mid = (right + left) / 2;
//		if (a[mid] == k)
//		{
//			printf("%d", mid);
//			break;
//		}
//		if (a[mid] > k)
//			right = mid - 1;
//		if (a[mid] < k)
//			left = mid + 1;
//	}
//	if (left > right)
//		printf("-1");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//
//{
//
//	float a[6];
//	float t;
//
//	int i, j;
//
//	for (i = 0; i < 6; i++)
//
//		scanf_s("%f", &a[i]);
//
//	for (i = 0; i < 6; i++)
//
//	{
//
//		for (j = 0; j < 5; j++)
//
//		{
//
//			if (a[j] > a[j + 1])
//
//			{
//
//				t = a[j];
//
//				a[j] = a[j + 1];
//
//				a[j + 1] = t;
//
//			}
//
//		}
//
//	}
//
//	for (i = 0; i < 6; i++)
//
//		printf("%f", a[i]);
//
//	return 0;
//
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//
//{
//
//	char c[100];
//
//	gets(c);
//
//	int i;
//
//	int n = strlen(c);
//
//	for (i = 0; i < n; i++)
//
//	{
//
//		if (c[i] != c[n - i - 1])
//
//		{
//
//			printf("0");
//
//			break;
//
//		}
//
//	}
//
//	if (i == n )
//
//		puts(c);
//
//	return 0;
//
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char c[100];
//	char a[100];
//		int i;
//	gets(c);
//	int n;
//	n = strlen(c);
//	for (i = 0; i < n; i++)
//	{
//		a[i] = c[n - i - 1];
//	}
//	for (i = 0; i < n; i++)
//		printf("%c", a[i]);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int fun(int k)
//{
//	if (k <= 24)
//	{
//		if (k == 1)
//			return 1;
//		if (k == 2)
//			return 1;
//		if (k % 2 == 0 && k > 2)
//			return fun(k - 1) - fun(k - 2);
//		if (k % 2 == 1 && k > 2)
//			return fun(k - 1) + fun(k - 2);
//	}
//}
//int main()
//{ 
//	int i;
//	for (i = 1;i<=24;i++)
//	{
//		if (i != 1)
//		{
//			if ((i - 1) % 4 == 0)
//				printf("\n");
//		}
//		printf("%d ", fun(i));
//	
//	}
	/*int arr[10];
	int i;
	for (i = 0; i < 10; i++)
		scanf_s("%d", &arr[i]);
	int m = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (m > arr[i])
			m = arr[i];
	}
	for (i = 0; i < 10; i++)
	{
		if (m == arr[i])
		{
			printf("下标为%d 最小值为%d", i,m);
			break;
		}
	}*/
	
	//char c[100]="ab";
	//gets(c);
	//int n,i;
	//n=strlen(c);
	//int num=0, letter=0, space=0, others=0;
	//for(i=0;i<n;i++)
	//{
	//	if (c[i] != '?')
	//	{
	//		if (c[i] >= '0' && c[i] <= '9')
	//			num++;
	//		else if (c[i] >= 'a' && c[i] <= 'z' || c[i] >= 'A' && c[i] <= 'Z')
	//			letter++;
	//		else if (c[i] == ' ')
	//			space++;
	//		else
	//			others++;
	//	}
	//	else
	//		break;
	//}
	//printf("%d %d %d %d", num, letter, space, others);
	///*int x;
//	int i;
//	for (x = 100; x <= 200; x++)
//	{
//		for (i = 2; i < x; i++)
//		{
//			if (x % i == 0)
//				break;
//		}
//		if (i == x)
//			printf("%d ", x);
//	}*/
//	/*int x,a,b;
//for(x=10;x<=99;x++)
	/*{
		a = x % 10;
		b= x/ 10 % 10;
		if (a * b > (a + b))
			//printf("%d ", x);*/
	/*}*/
	/*int year;
	scanf("%d", &year);
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
		printf("yes");*/
	/*int a=0x10;
	printf("%d", a);*/
	/*scanf_s("%d%d", &a, &b);
	printf("a+b=%d", a + b);*/
	/*char den;
	int grade;
	den = getchar();
	switch (den)
	{
	case 'A':
		grade = 90;
	case 'B':
		grade = 60;
	case'C' :
		grade = 50;
	}
	printf("%d", grade);*/
	/*return 0;
}*/
//指针的大小是固定的4/8字节（32平台/64平台）
//#include <stdio.h>
//int main()
//{
//	char* p = "abcdef";
//	*p = 'w';
//	printf("%s", p);
//	return 0;
//}
//#include <stdio.h>
//int fun(int arr[])
//{
//	int i,t;
//	int min = arr[0];
//	for (i = 1; i < 5; i++)
//	{
//		if (min > arr[i])
//			min = arr[i];
//	}
//	return min;
//}
//int main()
//{
//	int arr[5];
//	int i;
//	for (i = 0; i < 5; i++)
//		scanf_s("%d", &arr[i]);
//	printf("%d",fun(arr));
	/*struct grade
	{
		float s1[5];
		float s2[5];
	}
	average;
	int i;
	for (i = 0; i < 5; i++)
		scanf_s("%f%f", &average.s1[i], &average.s2[i]);
	for (i = 0; i < 5; i++)
		printf("%f ", (average.s1[i] + average.s2[i]) / 2);*/
	/*
	char ch[100];
	gets(ch);
	int k;
	k = strlen(ch);
	int i;
	for (i = k - 1; i >= 0; i--)
		printf("%c", ch[i]);*/
	/*char ch[100];
	gets(ch);
	int k,i;
	k = strlen(ch);
	for (i = 0; i < k; i++)
	{
		if (ch[i] != ch[k - 1 - i])
		{
			printf("0");
			break;
		}
	}
	if (i == k)
	{
		for (i = 0; i < k; i++)
			printf("%c", ch[i]);
	}*/
	/*float a[6];
	int i,j;
	float t;
	for (i = 0; i < 6; i++)
		scanf_s("%f", &a[i]);
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for(i=0;i<6;i++)
	printf("%f ", a[i]);*/
	/*float a[8] = { 65.5,68,76,79,80,85,92,100 };
	float k;
	scanf_s("%f", &k);
	int left=0, right=7;
	int mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] > k)
			right = mid - 1;
		else if (a[mid] < k)
			left = mid + 1;
		else
		{
			printf("找到了，下标为%d", mid);
			break;
		}
	}*/
	/*int m, n;
	int i,j;
	scanf_s("%d%d", &m, &n);
	int t;
	if (m > n)
	{
		t = m;
		m = n;
		n = t;
	}
	for (i = m; i <= n; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
			printf("%d ", i);
	}*/
	/*
	float w, h;
	float BMI;
	scanf_s("%f%f", &w, &h);
	BMI = w / (h * h);
	printf("%f", BMI);*/
	/*int num;
	scanf_s("%d", &num);
	int a, b, c, d, e;
	a = num % 10;
	b = num / 10 % 10;
	c = num / 100 % 10;
	d = num / 1000 % 10;
	e = num / 10000;
	if (a == e && b == d)
		printf("1");
	else
		printf("0");*/
	/*char ch;
	scanf("%c", &ch);
	if (ch >= 65 && ch <= 90)
		ch = ch + 32;
	 if (ch >= 97 && ch <= 122)
		ch = ch - 32;
	printf("%c", ch);*/
	/*float a, b, c, d;
	scanf("%f%f%f%f", &a, &b, &c, &d);
	float max;
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	if (max < d)
		max = d;
	printf("%f", max);*/
	/*float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	printf("%f", (a + b + c) / 3);*/
	/*int x, y;
	scanf_s("%d%d", &x, &y);
	int t;
	t = x;
	x = y;
	y = t;
	printf("x=%d,y=%d", x, y);*/
	/*int num;
	int i;
	scanf_s("%d", &num);
	int arr[6];
	for(i=0;i<=5;i++)
	{
		if (num != 0)
		{
			if (num % 2 == 0)
				arr[i] = 0;
			else
				arr[i] = 1;
			num = num / 2;
		}
	}
	for (i = 5; i >= 0; i--)
		printf("%d", arr[i]);*/
	/*
	float f;
	float c;
	c = 5 / 9*(f - 32);*/
	/*int num;
	scanf_s("%d", &num);
	int a, b, c, d;
	a = num % 10;
	b = num / 10 % 10;
	c = num / 100 % 10;
	d = num / 1000;
	printf("%d %d %d %d", a, b, c, d);*/
	/*return 0;*/
	/*float r = 3.5;
	float s;
	s = 3.14 * r * r;
	printf("%f", s);
	return 0;*/
	/*int num1, num2;
	num1 = 15;
	num2 = 25;
	printf("num1+num2=%d\nnum1-num2=%d\nnum1*num2=%d\nnum1/num2=%d", num1 + num2, num1 - num2, num1 * num2, num1 / num2);
	return 0;*/
//}
//#include <stdio.h>
//#include <string.h>
//void fun(int *a, int n)
//{
//	int i,j,t;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - 1; j++)
//		{
//			if (a[j]> a [j+1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//}
//void main()
//{
//	int arr[100];
//	int n;
//	int i;
//	scanf_s("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf_s("%d", &arr[i]);
//	fun(arr, n);
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//}
//void fun(float arr[])
//{
//	int i,j;
//	float t;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (abs(arr[j]) > abs(arr[j + 1]))
//			{
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//}
//int main()
//{
//	float arr[5];
//	int i;
//	for(i=0;i<5;i++)
//	scanf_s("%f", &arr[i]);
//	fun(arr);
//	for (i = 0; i < 5; i++)
//		printf("%f ", arr[i]);
//	return 0;
//}
 /*void fun(char ch[], int arr[])
{
	int i;
	int k = strlen(ch);
	for (i = 0; i < 4; i++)
		arr[i] = 0;
	for (i = 0; i < k; i++)
	{
		while (ch[i] != '\n')
		{
			if (ch[i] >= 'a' && ch[i] <= 'z' || ch[i] >= 'A' && ch[i] <= 'Z')
				arr[0]++;
			else if (ch[i] >= '0' && ch[i] <= '9')
				arr[1]++;
			else if (ch[i] == ' ')
				arr[2]++;
			else
				arr[3]++;
		}
	}
}
void main()
{
	char ch[100];
	int arr[4] ;
	gets(ch);
	fun(ch, arr);
	int i;
	for (i = 0; i < 4; i++)
		printf("%d", arr[i]);
}*/
//#include <stdio.h>
//
//#include <string.h>
//
//void fun(char* s, int* a)
//
//{
//
//	int i;
//
//	int n = strlen(s);
//
//	for (i = 0; i < n; i++)
//
//	{
//
//		if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
//
//			a[0]++;
//
//		else if (s[i] >= '0' && s[i] <= '9')
//
//			a[1]++;
//
//		else if (s[i] == ' ')
//
//			a[2]++;
//
//		else
//
//			a[3]++;
//
//	}
//
//}
//
//void main()
//
//{
//
//	char s[200];
//
//	int a[4] = { 0 };
//
//	gets(s);
//
//	fun(s, a);
//
//	printf("letter=%d\nnumber=%d\nspace=%d\nothers=%d", a[0], a[1], a[2], a[3]);
//
//}
//#include <stdio.h>
//void fun(float* p, float* q)
//{
//	float t;
//	t = *p;
//	*p = *q;
//	*q = t;
//}
//void main()
//{
//	float x, y;
//	scanf_s("%f%f", &x, &y);
//	fun(&x, &y);
//	printf("x=%f\ny=%f", x, y);
//}
//void fun(int n)
//{
//	if (n == 1)
//		printf("@");
//	else
//	{
//		fun(n - 1);
//		printf("@");
//	}
//}
//void main()
//{
//	int n;
//	scanf_s("%d", &n);
//	fun(n);
//}
//int fun(int i)
//{
//	if (i == 1)
//		return 1;
//	else
//		return fun(i - 1) + i;
//}
//void main()
//{
//	int m, n;
//	scanf_s("%d%d", &m, &n);
//	printf("%d", fun(n) - fun(m) + m);
//}
//#include <string.h>
//int main()
//{
//	char ch[100];
//	int x = 0, y = 0, z = 0;
//	gets(ch);
//	int k;
//	k = strlen(ch);
//	int i;
//	for (i = 0; i < k; i++)
//	{
//		if (ch[i] >= 'a' && ch[i] <= 'z' || ch[i] >= 'A' && ch[i] <= 'Z')
//			x++;
//		else if (ch[i] >= '0' && ch[i] <= '9')
//			y++;
//		else
//			z++;
//	}
//	printf("字母=%d\n数字=%d\n其它=%d", x, y, z);
//	return 0;
//}
//int main()
//{
//	int arr[6];
//	int i;
//	for (i = 0; i < 6; i++)
//		scanf_s("%d", &arr[i]);
//	int min = arr[0];
//	for (i = 1; i < 6; i++)
//	{
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	for (i = 0; i < 6; i++)
//	{
//		if (min == arr[i])
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//	void fun(int arr[3][5], int x, int y)
//	{
//		int i;
//		int j;
//		for (i = 0; i < x; i++)
//		{
//			for (j = 0; j < y; j++)
//				printf("%d ", arr[i][j]);
//			printf("\n");
//		}	
//	}
//	void f(int(*p)[5], int x, int y)
//	{
//		int i, j;
//		for (i = 0; i < x; i++)
//		{
//			for (j = 0; j < y; j++)
//				printf("%d ",*(*(p + i)+j) );
//			printf("\n");
//		}
//	}
//	int main()
//	{
//		int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//		fun(arr, 3, 5);
//		f(arr, 3, 5);
//		return 0;
//	}
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", *(p + i));*/
	/*char* arr[5];
	char *(*pa)[5] = &arr;*/
	/*int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };
	int* p[3] = { arr1,arr2,arr3 };
	int i;
	int j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", *(p[i] + j));
		printf("\n");
	}*/
//#include <stdio.h>
//
//int main()
//
//{
//
//	char ch;
//
//	scanf_s("%c", &ch);
//
//	if (ch >= 'a' && ch <= 'z')
//
//		ch = ch - 32;
//
//	if (ch >= 'A' && ch <= 'Z')
//
//		ch = ch + 32;
//
//	printf("%c", ch);
//
//	return 0;
//
//}
//	
//#include <stdio.h>
//int fun(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n > 1)
//		return fun(n - 1) * n;
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	printf("%d",fun(n));
//	return 0;
//}


//int add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int (*p)(int, int) = &add;//add==&add 函数指针
//	printf("%d", (*p)(3,5));
	/*int n;
	scanf_s("%d", &n);
	int i, j, p;
	for (i = 1; i <= n; i++)
	{
		for (p = n - i; p = 0; p--)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	/*return 0;
}*/
//add(int x, int y)
//{
//	return x + y;
//}
//mul(int x, int y)
//{
//	return x * y;
//}
//sub(int x, int y)
//{
//	return x - y;
//}
//#include <stdio.h>
//int main()
//{
//	int (*pa[3])(int, int) = { add,mul,sub };
//	int i;
//	for (i = 0; i < 3; i++)
//		printf("%d ", (*pa[i])(2, 3));//函数指针数组
//}
//#include <stdio.h>
//void menu()
//{
//	printf("*******1.add  2.sub*******\n");
//	printf("*******3.mul  4.div*******\n");
//	printf("**********0.退出***********\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void con(int (*pc)(int, int))
//{
//	int x=0, y=0;
//	printf("请输入两个整数：>\n");
//	scanf_s("%d%d", &x, &y);
//	printf("%d\n", pc(x, y));
//}
//int main()
//{
//	int n=0;
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf_s("%d", &n);
//		switch (n)
//		{
//		case 1:
//			con(add);
//			break;
//		case 2:
//			con(sub);
//			break;
//		case 3:
//			con(mul);
//			break;
//		case 4:
//			con(div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (n);
//	return 0;
//}
//int main()
//{
//	
//	int n=0;
//	int x=0, y = 0;
//	int (*p[5])( int , int) = { 0,add,sub,mul,div };
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf_s("%d", &n);
//		if (n >= 1 && n <= 4)
//		{
//			printf("请输入两位整数:>\n");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", p[n](x, y));
//		}
//		else if (n == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	}while (n);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//
//}
//int main()
//{
//char* (*pf)(char*, const char*)=my_strcpy;
//char* (*pfArr)[4](char* , const char*);
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	return 0;
//	int (*(*pf)[10])(int, int);//数组指针，这个数组有十个元素，每个元素的类型是函数指针
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int x1, x2, y1, y2;
//	scanf_s("%d%d%d%d", &x1, &y1, &x2, &y2);
//	printf("%d", abs(x1 - x2) + abs(y1 - y2));
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//#include <windows.h>
//#include <tchar.h>
//float f(float x, float y, float z) {
//	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
//	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
//}
//
//float h(float x, float z) {
//	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
//		if (f(x, y, z) <= 0.0f)
//			return y;
//	return 0.0f;
//}
//int main()
//{
//	system(" color 04");
//	HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
//	_TCHAR buffer[25][80] = { _T(' ') };
//	_TCHAR ramp[] = _T(".:-=+*#%@");
//	for (float t = 0.0f;; t += 0.1f) {
//		int sy = 0;
//		float s = sinf(t);
//		float a = s * s * s * s * 0.2f;
//		for (float z = 1.3f; z > -1.2f; z -= 0.1f)
//		{
//			_TCHAR* p = &buffer[sy++][0];
//			float tz = z * (1.2f - a);
//			for (float x = -1.5f; x < 1.5f; x += 0.05f)
//			{
//				float tx = x * (1.2f + a);
//				float v = f(tx, 0.0f, tz);
//				if (v <= 0.0f)
//				{
//					float y0 = h(tx, tz);
//					float ny = 0.01f;
//					float nx = h(tx + ny, tz) - y0;
//					float nz = h(tx, tz + ny) - y0;
//					float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
//					float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
//					*p++ = ramp[(int)(d * 5.0f)];
//				}
//				else
//					*p++ = ' ';
//			}
//		}
//		for (sy = 0; sy < 25; sy++)
//		{
//			COORD coord = { 0, sy };
//			SetConsoleCursorPosition(o, coord);
//			WriteConsole(o, buffer[sy], 79, NULL, 0);
//		}
//		Sleep(33);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
/*int cmp(const void* e1, const void* e2)
{
	return *((int*) e2) - *((int*) e1);
}
int cmp_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int main()
{
	struct Stu
	{
	 char name[3];
		int age[3];
	}
	s[3] = { {"z",10},{"l",30},{"w",20} };
	int sz;
	sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof*//*(s[0]), cmp_age);*/
		/*int arr[10] = {1,3,2,4,5,6,0,9,8,-2};
		int i;
		int sz;
		sz = sizeof(arr) / sizeof(arr[0]);
		qsort(arr, sz, sizeof(arr[0]), cmp);
		for (i = 0; i < sz; i++)
			printf("%d ", arr[i]);*/
		/*return 0;
}*/
//计算长度
//只有sizeof(arr)和&arr中的arr为数组名，代表整个数组
// 其余的arr均表示首元素或首元素地址
//strlen(地址)
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { 0 };
//	printf("%d ", sizeof(arr[4]));
//	return 0;
//}

//88888888888888

#include <stdio.h>
//8道指针笔试题
//  一、
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&arr + 1);
//	printf("%d %d", *(arr + 1), *(ptr - 1));
//	return 0;
//}
//  二、
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//int main()
//{
//	p = (struct Test*)0x100000;//结构体占20个字节
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//有符号与无符号0x100001
//	printf("%p\n", (unsigned int *)p + 0x1);//0x100004
//	return 0;
//}
//   三、
//int main()
//{
//	int a[4] = { 1,2,3,4 };// 01000000 02000000 03000000 04000000
//	int* ptr1 = (int *)(&a + 1);
//	int* ptr2 = (int *)((int)a + 1);//(int)a+1在内存中向右偏移了一个字节
//	                               //   原本是01000000 变成了02000000
//	printf("%d,%x", ptr1[-1], *ptr2);   //ptr1[-1]等价于*（ptr1-1）
//	return 0;
//}
//   四、
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式取最后一个数a[0][0]=1
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}
//  五、
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p %d", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//  六、
//int main()
//{
//	int arr[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&arr + 1);//&arr为整个二维数组的地址
//	int* ptr2 = (int* )(*(arr + 1));//arr为第一行的地址，+1后为第二行地址，解引用后为第二行元素，此时到6的上面，-1后为5
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//  七、
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	printf("%c", **pa);
//	return 0;
//}
//  八、
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//易错点：cpp已经加了1，发生了变化
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2]+3);//*cpp[-2]等价于**(cpp-2)
//	printf("%s\n", cpp[-1][-1]+1);
//	return 0;
//#include <string.h>
//int main()
//{
//	char c[100];
//	gets(c);//--scanf("%s",c);
//	int sz;
//	sz = strlen(c);
//	int i;
//	for (i = sz - 1; i >= 0; i--)
//		printf("%c", c[i]);
//	return 0;
//}
//int main()
//{
//	int i, j, k;
//	int line;
//	scanf_s("%d", &line);
//	for (k = 1; k <=line; k++)
//	{
//		for (i = line - k; i >= 0; i--)
//			printf(" ");
//		for (j=1;j<=2*k-1;j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int i;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int num = i;
//		long int sum = 0;
//		while (num=num/ 10)
//			n++;
//		num = i;
//		while (num)
//		{
//			sum = sum + pow(num%10, n);
//			num = num / 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include <string.h>
//void fun(int a, int b,char ch[])
//{
//	int i;
//	int t;
//	for (i = a; i < b/2; i++)
//	{
//		t = ch[i];
//		ch[i] = ch[b - 1 - i];
//		ch[b - 1 - i] = t;
//	}
//}
//int main()
//{
//	char ch[100];
//	gets(ch);
//	char c[100];
//	gets(c);
//	int k;
//	scanf_s("%d", &k);
//	int n;
//	n = strlen(ch);
//	int i;
//	int t = 0;
//	fun(0, k, ch);
//	fun(k, n, ch);
//	fun(0, n, ch);
//	return 0;
//}
//	/*for (i = k; i < n/2; i++)
//	{
//		t = ch[i];
//		ch[i] = ch[n - 1 - i];
		/*ch[n - 1 - i] = t;
	}
	for (i = 0; i < n / 2; i++)
	{
		t = ch[i];
		ch[i] = ch[n - 1 - i];
		ch[n - 1 - i] = t;
	}*/
	/*for (i = 0; i < k; i++)
	{
		int num = ch[0];
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			ch[j] = ch[j + 1];
		}
		ch[n - 1]=num;
	}*/
	/*printf("%s", ch)*//*;*/
	/*int arr[] = {1,2,3,4,5,6,7,8,9};
	int i, j;
	int t;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (arr[j] % 2 == 0)
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (i = 0; i < 9; i++)
		printf("%d ", arr[i]);*/
	/*char ch[] = { 0 };
	char ca[] = { 0 };
	gets(ch);
	gets(ca);
	int a, b;
	a = strlen(ch);
	b = strlen(ca);
	int i;
		for (i = 0; i < b; i++)
			ch[i] = ca[i];
		printf("%s", ch);
		*/
	/*int x;
	scanf_s("%d", &x);
	int num;
	num = x;
	int empty = x;
	while (empty % 2 == 0)
	{
		num = num + empty/ 2;
		empty /= 2;
	}
	printf("%d", num);*/
	/*return 0;
}*/
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int k = strlen(arr1);
//	char arr3[] = "abcdefabcdef";
//	int i, j;
//	for (i = 0; i <= k; i++)
//	{
//		int n = 0;
//		for (j = 0; j < k; j++)
//		{
//			if (arr2[j] == arr3[j + i])
//				n++;
//		}
//		if (n == k)
//		{
//			printf("YES");
//			break;
//		}
//	}
//	if (i == k + 1)
//		printf("NO");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int k;
//	scanf_s("%d", &k);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	while (left <= right)
//	{
//		int mid;
//		mid = (right + left) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("找到了");
//			break;
//		}
//	}
//	if (left > right)
//		printf("该数组没有此数");
//	return 0;
//}
//杨氏矩阵
//int fun(int arr[3][3], int hang, int lei, int k)
//{
//	int x = 0;
//	int y = lei - 1;
//	while (x < hang && y >= 0)
//	{
//		if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int ret=fun(arr, 3, 3,7);
//	if (ret==0)
//		printf("未找到此数");
//	else
//		printf("找到了");
//	return 0;
//}
//cpy,strcmp,strlen,strncpy,strncat,strstr,
//int fun(char ch[])
//{
//	int k=0;
//	int i;
//	for (i = 0; i < 100; i++)
//	{
//		if (ch[i] != '\0')
//			k++;
//		else
//			break;
//	}
//	return k;
//}
//int main()
//{
//	char ch[] = "abcdefg";
//	printf("%d", fun(ch));
//	return 0;
//}
# define CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
//char* my_strcpy(char arr1[], char arr2[])
//{
//	char* ret = arr1;
//	while (*arr2 != 0)
//	{
//		*arr1++ = *arr2++;//等价于while(*arr1++=*arr2++)这一句话
//	}
//		*arr1 = *arr2;
//		return ret;
//}
//int main()
//{
//	char arr1[] = "America";
//	char arr2[] = "China";
//	printf("%p\n", my_strcpy(arr1, arr2));
//	printf("%s", arr1);
//}
//int fun(char* ptr)
//{
//	if (*ptr)
//		return 1+fun(++ptr);
//}
//int main()
//{
//	char arr[] = "abcef";
//	printf("%d", fun(arr));
//}
/*void my_strcat(char* ptr1, const char* ptr2)
{
	while (*ptr1 != 0)
		ptr1++;
	while (*ptr1++ = *ptr2++);
	/*int i;
	int n = strlen(ptr1);
		for (i = 0;*(ptr2+i); i++)
		{
			*(ptr1+n+i) = *(ptr2+i);
		}*/
/*}
int main()
{
	char arr1[8] = "abcd";
	char arr2[10] = "abc";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
}*/
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abch";
//	if (strstr(arr1, arr2))
//		printf("1");
//	else
//		printf("0");
//	return 0;
//}
//int my_strcmp(const char* p1, const char* p2)
//{
//	while (*p1 == *p2)
//	{
//		if (*p1 == 0)
//			return 0;
//		p1++;
//		p2++;
//	}
//	if (*p1 > *p2)
//		return 1;
//	else
//		return -1;
	/*while (*p1 && *p2)
	{
		if (*p1 == *p2)
		{
			*p1++;
			*p2++;
		}
		else if (*p1 > *p2)
			return 1;
		else
			return -1;
	}*/
	/*return 0;
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "abcd";
	printf("%d", my_strcmp(p1, p2));
	return 0;
}*/
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "abc";
//	strncpy_s(arr1, arr2, 3);
//	printf("%s", arr1);
//	return 0;
//}