#pragma warning(disable: 4996)
#include <stdio.h>
int main(void)
{
	int t;//테스트 케이스 설정
	int r;//반복할 횟수 
	char arr[21];//문자열 설정
	scanf("%d", &t);
	for (int a = 0; a < t; a++)//테스트 케이스 함수
	{
		scanf("%d %s", &r, &arr);
		for (int b = 0; arr[b] !='\0'; b++)
		{
			for (int c = 0; c < r; c++)
			{
				printf("%c", arr[b]);
			}
		}
		printf("\n");
	}
}
