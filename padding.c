#include <stdio.h>
struct student {
char lastName[13]; /* 13 bytes */   /* 3 - padding byte */  //16 bytes�� �Ǿ�� �ϹǷ� 3 bytes ���
int studentId; /* 4 bytes */
short grade; /* 2 bytes */          /* 2 - padding byte */  //4 bytes�� �Ǿ�� �ϹǷ� 2 bytes ���
};
int main()
{
struct student pst;     // 4 bytes
printf("size of student = %ld\n", sizeof(struct student));  //��:24==(13+3)+4+(2+2)
printf("size of int = %ld\n", sizeof(int));                 //int �ڷ����� ũ��: 4
printf("size of short = %ld\n", sizeof(short));             //short �ڷ����� ũ��: 2
printf("[----- [����ȭ] [2019038062] -----]\n");
return 0;
}