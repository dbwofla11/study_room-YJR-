#define _CRT_SECURE_NO_WARNINGS // scanf_s대신에 scanf만 사용해도 프로그램이 실행되도록 설정
#include <stdio.h>
#include <string.h>
#define ArrSize 20 // 원소의 개수가 20개이므로 미리 설정함
int c ;
int main() {
   //무한 반복이 설정되어 있으므로 while(1)을 이용해서 밑의 내용을 감쌀것임.
   while (1)
   {
      int a;
      // 다음줄 부터 scnaf 문까지는 기본적으로 출력되어야 하는 부분
      // scanf를 통해서 사용자의 입력을 받음
      printf("==================================\n");
      printf("주기율표 프로그램 VER.1\n\n");
      printf("1. 전체 주기율표 출력 (1번 ~ 20번)\n 2. 원소 검색\n 3.원자가 전자수 계산\n 4. 주기 계산\n\n");
      printf("==================================\n");
      printf("원하는 기능을 선택해주세요->");
      scanf("%d", &a);

      unsigned char name[ArrSize][ArrSize] = { "수소", "헬륨", "리튬", "베릴륨", "붕소", "탄소", "질소", "산소", "불소", "네온", "나트륨", "마그네슘", "알루미늄", "규소", "인", "황", "염소", "아르곤", "칼륨", "칼슘" }; // 원소의 이름 2차원 배열
      // printf("%s", name[5]); // 체킹을 위해서 남겨 두었음

      char sym[ArrSize][ArrSize] = { "H ","He","Li","Be","B ","C ","N ","O ", "F ","Ne","Na","Mg","Al","Si","P ","S ","Cl","Ar","K ","Ca" }; // 원소의 기호 2차원 배열
      //printf("%s", sym[1]); // 체킹을 위해서 남겨두었음

      int per[ArrSize] = { 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4 }; // 원소의 주기 배열

      int num[ArrSize]; // 원소의 원자 번호 배열
      for (int i = 0; i < ArrSize; i++) // 원자 번호 배열에 자동으로 원자 번호를 배열하도록 지정
      {
         num[i] = i + 1;
      }


      switch (a)
      {
      case 1: // 위에서 1번 메뉴 선택시 돌아가야할 프로그램
         printf("주기율표 전체 출력 메뉴입니다.\n");
         for (int b = 0; b < ArrSize; b++) //원자 번호 배열과 원자 이름 배열이 순서대로 프린트 되게 하는 for문
         {
            printf("%d %s\n", num[b], name[b]);
         }
         break;

      case 2: // 위에서 2번 메뉴를 선택시 돌아가야할 프로그램
         printf("원소 검색 메뉴입니다.\n");
         unsigned char inputname;
         printf("찾고자 하는 원소의 이름을 입력하세요.\n");
         scanf("%c", &inputname);
         char* ptr = strstr(name, inputname);
         for (c = 0; c < ArrSize; c++) //위에서 받은 원소 이름이 원자이름 배열과 동일한지 찾는 것
         {
            if (inputname == name[c])
            {
               printf("%s 의 원자번호 : %d\n %s의 원소 기호 : %s\n", inputname, num[c], ptr, sym[c]);
            }
            
            	
         }
         
         
      case 3: // 위의 프린트 문에서 3번 메뉴를 실행하였을때 돌아가야할 프로그램
         printf("원자가 전자수 계산 메뉴입니다.\n");
         int d;
         printf(" 원자번호를 입력해주세요.(수소, 헬륨 제외)");
         scanf("%d", &d);
         for (int e = 0; e < ArrSize; e++)//원자 번호를 입력받아서 원자 번호가 같은 원자의 원자가 전자를 출력하는 프로그램
         {
            if (d == num[e])
            {
               printf("%d 번 원소의 원자가 전자는 %d개 입니다\n.", d, (num[e]-2) % 8);
            }
         }
         break;
      case 4: // 위의 프린트 문에서 4번 메뉴를 실행하였을때 돌아가야할 프로그램
         printf("주기 계산 메뉴입니다.\n");
         int f;
         printf("원자 번호를 입력해주세요->\n");
         scanf("%d", &f);
         for (int g = 0; g < ArrSize; g++) //위와 마찬가지로 단지 원자의 주기 출력
         {
            if (num[g] == f )
            {
               printf("%d번 원소는 %d 주기 원소입니다.\n", f, per[g]);
            }
         }
         break; 
      }
   }
   return 0;
}
