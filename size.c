#include<stdio.h>
#include<stdlib.h>
void main()
{
int **x;    //���� ������ ����x ����
printf("sizeof(x) = %lu\n", sizeof(x));         //x�� ����� �޸� �ּ��� ũ��:4
printf("sizeof(*x) = %lu\n", sizeof(*x));       //x�� ����Ű�� �޸� �ּ��� ũ��:4
printf("sizeof(**x) = %lu\n", sizeof(**x));     //x�� ����Ű�� �޸� �ּҿ� �����ϰ� �� ���� ����� ���� ũ��:4(int������ ���� �Ͽ��� ����)
printf("[----- [����ȭ] [2019038062] -----]\n");
}