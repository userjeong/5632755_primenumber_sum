#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_NUM 100 //100까지 구하기
int main()
{
	int num; //숫자 변수
	int is_rem;//나머지가 0인지 판별하는 변수
	int prime_sum =0;
	for (num = 0; num <= MAX_NUM; num++) //0부터 100까지의 정수값 체크
	{
		for (is_rem = 2; is_rem < num; is_rem++)//판별하고 있는 num값보다 작은 값으로 나눴을때 나머지가 0이 되는지 확인
			//1이하의 값은 소수에 포함되지 않으므로 2부터 시작
		{
			if ((num % is_rem) == 0) //나머지가 0이 될 경우(나누어 떨어질 경우)
			{
				break;
			}
			
		}
		if (num == is_rem)//num보다 1작은 is_rem값까지 나눠봤을때 나머지가 0이 되지 않고, 값이 같아지면 소수(소수는 1과 자기자신만으로 나누어떨어지기 떄문이다)
		{
			prime_sum = prime_sum + num; //소수의 총합을 저장하는 변수 sum에 i값을 누적
		}
		
		
	}
	printf("0부터 %d까지의 숫자 중에서 소수들의 합: %d", MAX_NUM, prime_sum);
}