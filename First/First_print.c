/* ��ǻ�� ���α׷���*/

#include<stdio.h>

void main()
{
	int num = 0;
	int size;

	size = sizeof num;
	printf("num�� ũ��: %d\n", size);

	size = sizeof(int);
	printf("num�� ũ��: %d\n", size);

	size = sizeof(num);
	printf("num�� ũ�� %d\n", size);

}

