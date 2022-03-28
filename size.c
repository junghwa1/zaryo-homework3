#include<stdio.h>
#include<stdlib.h>
void main()
{
int **x;    //이중 포인턴 변수x 선언
printf("sizeof(x) = %lu\n", sizeof(x));         //x에 저장된 메모리 주소의 크기:4
printf("sizeof(*x) = %lu\n", sizeof(*x));       //x가 가리키는 메모리 주소의 크기:4
printf("sizeof(**x) = %lu\n", sizeof(**x));     //x가 가리키는 메모리 주소에 접근하고 그 곳에 저장된 값의 크기:4(int형으로 선언 하였기 때문)
printf("[----- [염중화] [2019038062] -----]\n");
}