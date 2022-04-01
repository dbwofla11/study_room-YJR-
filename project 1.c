#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define arr_size 20

int main() {
	char arrname[arr_size] = { 수소, 헬륨, 리튬, 베릴륨, 붕소, 탄소, 질소, 산소, 플루오린(불소), 네온, 나트륨(소듐), 마그네슘, 알루미늄, 규소, 인, 황, 염소, 아르곤, 칼륨, 칼슘}
	char arrlabel[arr_size] = {H, He, Li, Be, B, C, N, O, F, Ne, Na, Mg, Al, Si, P, S, Cl, Ar, K, Ca }
	printf(arrname[0]);
	for (int i = 0; i < 20; i++)
	{
		int arrnum[arr_size];
		int arrnum[i] = {i + 1};
	}
	
	int a;
	printf("========================\n");
	printf("1");
	printf("주기율표 프로그램 Ver. 1\n\n");
	printf("1");
	printf("1. 전체 주기율표 출력 (1번 ~ 20번)\n 2. 원소 검색\n 3. 원자가전자수 계산 4. 주기 계산\n\n");
	printf("========================\n");
	printf("원하는 기능을 선택해 주세요. ->");
	scanf("%d", &a);


	return 0;
}
