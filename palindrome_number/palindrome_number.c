/*************************************************
Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
******************************************************/

#include<stdio.h>
#include<stdbool.h>

long long int poww(int x, int y)
{
	long long ketqua = 1;
	// return x^y
	if(y == 0)
		return 1;
	for(int i = 0;i < y; i ++)
	{
		ketqua = ketqua*x;
	}
	//printf("%d\n",ketqua);
	
	return ketqua;
}

int caculator_nums(int x)
{
 	int ketqua = 0;
	for(int i = 0;i < 31 ;i ++)
	{
		if((x/poww(10,i)) < 1)
		{
			ketqua = i;
			return ketqua;
		}
	}
}

int isPalindrome(long long int x)
{
	long long int mirrow = 0;
	long long int b = x;
	long long int a = x;
	if(x < 0)
	{
		return 0;
	}
	for(int i = caculator_nums(x); i > 0; i--)
	{
		// printf("1---------a = %d, caculator_nums =%d , i = %d\n",a, caculator_nums(x),i);
		a = a/poww(10,i-1 );	// chia tach so
		// printf("2---------a = %d, caculator_nums =%d , i = %d\n",a, caculator_nums(x),i);
		mirrow = mirrow + a*poww(10,(caculator_nums(x) - i));	// Tạo số đảo ngược
		a = b - a*poww(10,i-1 );
		b = a;		 
		// printf("3---------a = %d, mirrow = %d\n",a, mirrow);
	}
	if(mirrow == x)
		return 1;
	else
		return 0;
	return 0; 
}
int main()
{
	long long int a;
	int b;
	printf("Nhap so dau vao :\n");
	scanf("%lld",&a);
	//b = caculator_nums(a);
	//printf("%d\n",b);
	b = isPalindrome(a);
	if(b == 0)
	{
		printf("Not palindrome\n");
	}
	else if(b == 1)
	{
		printf("Is palindrome\n");
	}
	return 0;
}