#include <stdio.h>
struct student {
char lastName[13]; /* 13 bytes */   /* 3 - padding byte */  //16 bytes가 되어야 하므로 3 bytes 페딩
int studentId; /* 4 bytes */
short grade; /* 2 bytes */          /* 2 - padding byte */  //4 bytes가 되어야 하므로 2 bytes 페딩
};
int main()
{
struct student pst;     // 4 bytes
printf("size of student = %ld\n", sizeof(struct student));  //갑:24==(13+3)+4+(2+2)
printf("size of int = %ld\n", sizeof(int));                 //int 자료형의 크기: 4
printf("size of short = %ld\n", sizeof(short));             //short 자료형의 크기: 2
printf("[----- [염중화] [2019038062] -----]\n");
return 0;
}