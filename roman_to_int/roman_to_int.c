/*
I 1 
V 5 
X 10 
L 50 
C 100 
D 500 
M 1000

Nhập vào số  la mã từ bàn phím, số la mã gồm 7 kí tự I, V, X, L, C, D, M
Chuyển đổi số la mã vừa nhập vào thành số nguyên.
Trước hết đơn giản hóa bài toán : VD : Nhập gía trị từ 1 đến 10 để chuyển đổi : chỉ sử dụng 3 kí tự I, V, X. sau đó áp dụng với 7 kí tự.
*/
#include<stdio.h>
	
int g_nums = 0;

int romanToInt(char * s)
{
	int result = 0;
	int check_case_9_4 = 0;
	int check_case_90_40 = 0;
	int check_case_900_400 = 0; 
	for(int i = 0; i < g_nums; i ++)
	{
		switch (*(s + i))
		{
		case 'I':
			if(check_case_9_4)
			{
				result += 1;
			}
			else
			{
				result +=1;
			}
			check_case_9_4 = 1;
			printf("I - result = %d\n", result);
			break;
		case 'V':
			if(check_case_9_4)
				result = result - 1 + 4;
			else
			{
				result += 5;
			}
			printf("V - result = %d\n", result);			
			break;
		case 'X':
			if(check_case_9_4)
				result = result - 1 + 9;			
			else 
				result += 10;
			check_case_90_40 = 1;
			printf("X - result = %d\n", result);			
			break;
		case 'L':
			if(check_case_90_40)
				result = result - 10 + 40;
			else
			{
			result += 50;
			}
			printf("L - result = %d\n", result);			
			break;
		case 'C':
			if(check_case_90_40)
				result = result - 10 + 90;
			else
				result += 100;
			check_case_900_400 = 1;
			printf("C - result = %d\n", result);			
			break;
		case 'D':
			if(check_case_900_400)
				result = result - 100 + 400;
			else
				result += 500;
			printf("D - result = %d\n", result);			
			break;
		case 'M':
			if(check_case_900_400)
				result = result - 100 + 900;
			else
				result += 1000;
			printf("M - result = %d\n", result);			
			break;
		}




			// truong hop nay cac ki tu se la I X,C, 
			// if( (*(s+i) != 'V') && (*(s+i) != 'L') && (*(s+i) != 'D') && (*(s+i) != 'M'))	
			// {
			// 	check_case_9_4 = 1;
			// }
			// else 
			// {
			// 	switch(*(s+i))
			// 	{
			// 		case 'V' :
			// 			result += 5;
			// 			break;
			// 		case 'L' :
			// 			result += 50;
			// 			break;
			// 		case 'D' :
			// 			result += 500;
			// 			break;
			// 		case 'M' :
			// 			result += 1000;
			// 			break;
			// 	}
			// }
	}
	return result;
}


int main()
{
// 	char string_of_roman [100];
// 	char * p_string_of_rm = string_of_roman;
// 	printf("Ki tu la ma gom I, V, X, L, C, D, M . Nhap so la ma muon chuyen doi : \n");
// 	scanf("%s", p_string_of_rm);
// 	printf("IN ra chuoi vua nhap :%s\n", )
	int result;
	char string_of_roman[] = "MMCMXCIX";
	char * p_string_of_rm = string_of_roman;
	 // nums = num_of_member_in_string(p_string_of_rm);
	g_nums = sizeof(string_of_roman)/sizeof(char) - 1;
	printf("nums = %d\n", g_nums);
	result = romanToInt(p_string_of_rm);
	printf("result = %d\n", result);

}