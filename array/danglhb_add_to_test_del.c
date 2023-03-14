#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char  *longestCommonPrefix(char ** strs, int strsSize)
{
	char b[200];
	char *g = (char*)b;
	int x = 0;
	int check = -1;
	char *a;

	for(int i = 0; i < 200; i ++)
	{
		for (int j = 0; j < strsSize; j++)
		{
			if(*(*(strs + j) + i)  == *(*(strs) + i) )	// so sánh với phần tử i ở các hàng với phần tử i ở hàng số 0 ;  
			// if(strs[j][i] != strs[0][i])
			{
				check = 1;
			}
			else
			{
				check = 0;
			}
		}
		
		if(check == 0)
		{
			printf("break here");
			break;			
		}
		else if(check == 1)
		{
			x = i+1;
		}
	}

	printf("log check loi x = %d, ",x);

	if(x == 0)
	{
		a = (char *)malloc(x * sizeof(char));
		printf(" ket qua : %s \n",a);
	
	}
	else
	{
		a = (char *)malloc(x * sizeof(char));
		for(int i = 0; i < x; i ++)
		{
			*(a + i) = *(*(strs) +i);
		}
	printf(" ket qua : %s \n",a);	
	}
	return a;
}



int main()
{
	int stt_chuoi, cot,hang;
	int phantu;
	char **p;
	//char **t =(char **)p;
	//char ketqua[200];
	printf("Tong so chuoi la :\n");
	scanf("%d",&hang);
	printf("Tong so phan tu trong chuoi la : \n");
	scanf("%d", &cot);
	p = (char**)malloc(hang * sizeof(char*));
	for(int i = 0; i < cot; i++)
	{
		p[i] = (char*)malloc(cot * sizeof(char));
	}
	for(int i = 0; i < hang; i ++)
	{
		printf("nhap mang %d\n", i);
		scanf("%s", p[i]);
	}
	//*(p) = *d;
	for(int i = 0; i < hang; i ++)
	{
		printf("in chuoi so %d %s\n", i, *(p + i));
	}

	char* k = longestCommonPrefix(p, hang);
	printf(" ket qua : %s \n", k);
	// printf(" ket qua : %s \n",longestCommonPrefix(p, hang));
	// for(int i = 0; i < cot; i ++)
	// free(p[i]);	
	// free(p);

	// free(p[i]);	

	return 0;
}