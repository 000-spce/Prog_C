/* 컴퓨터 프로그래밍*/

#include<stdio.h>

void main()
{
	int num = 0;
	int size;

	size = sizeof num;
	printf("num의 크기: %d\n", size);

	size = sizeof(int);
	printf("num의 크기: %d\n", size);

	size = sizeof(num);
	printf("num의 크기 %d\n", size);

}

