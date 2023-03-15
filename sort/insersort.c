#include<stdio.h>


void insertsort(int *p_arr)
{
	int last, i, j;
	for(i = 1; i < 10; i ++)
	{
		last = *(p_arr + i);
		j = i;
		while(j > 0, *(p_arr + j -1) > last)
		{
			*(p_arr + j) = *(p_arr +j - 1);
			j -= 1;
		}
	 	*(p_arr + j) = last;
	}
}

int main ()
{
	int arr[10] = {8,6,5,3,9,1,7,4,2,0};
	insertsort(arr);
	for(int i = 0; i < 10; i ++)
	{
		printf("phan tu thu %d = %d\n", i, *(arr + i));
	}
}

