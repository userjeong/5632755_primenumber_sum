#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_NUM 100 //100���� ���ϱ�
int main()
{
	int num; //���� ����
	int is_rem;//�������� 0���� �Ǻ��ϴ� ����
	int prime_sum =0;
	for (num = 0; num <= MAX_NUM; num++) //0���� 100������ ������ üũ
	{
		for (is_rem = 2; is_rem < num; is_rem++)//�Ǻ��ϰ� �ִ� num������ ���� ������ �������� �������� 0�� �Ǵ��� Ȯ��
			//1������ ���� �Ҽ��� ���Ե��� �����Ƿ� 2���� ����
		{
			if ((num % is_rem) == 0) //�������� 0�� �� ���(������ ������ ���)
			{
				break;
			}
			
		}
		if (num == is_rem)//num���� 1���� is_rem������ ���������� �������� 0�� ���� �ʰ�, ���� �������� �Ҽ�(�Ҽ��� 1�� �ڱ��ڽŸ����� ����������� �����̴�)
		{
			prime_sum = prime_sum + num; //�Ҽ��� ������ �����ϴ� ���� sum�� i���� ����
		}
		
		
	}
	printf("0���� %d������ ���� �߿��� �Ҽ����� ��: %d", MAX_NUM, prime_sum);
}