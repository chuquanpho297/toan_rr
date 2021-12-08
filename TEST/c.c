#include<stdio.h>
#include<string.h>
#define PRO 53
int main(){
  char Name[30], Pg[]="HESPI";
  char Stt[14];
  int day, month, year;
  printf("Input name of student: ");
  scanf("%s",Name);
  while(getchar()!='\n');
  printf("Input his/her status: ");
  fgets(Stt, 14, stdin);
  while(getchar()!='\n');
  printf("Input day/month/year(dd/mm/yyyy):");
  scanf("%d%*c%d%*c%d", &day, &month, &year);
  printf("Here is note:\n");
  printf("Student Name\t: %s\n", Name);
  printf("Progarm\t\t: %s\n", Pg);
  printf("Promotion\t: %d\n", PRO);
  printf("Status\t\t: %s\n", Stt);
  printf("At\t\t: %d/%d/%d\n", day, month, year);
}
// #include <stdio.h>
// #define MAX 15
// int main()
// {
//     char buf[MAX];
//     fgets(buf, MAX, stdin);
//     printf("string is: %s\n", buf);
  
//     return 0;
// }