#include <stdio.h>
void print1 (int *ptr, int rows);       //배열 포인터를 매개변수로 가짐
int main()
{
int one[] = {0, 1, 2, 3, 4};            //int형 배열 one선언
printf("one = %p\n", one);              //배열 one의 첫번째 메모리 주소
printf("&one = %p\n", &one);            //배열 one의 첫번째 메모리 주소
printf("&one[0] = %p\n", &one[0]);      //one[0]의 메모리 주소
printf("\n");
print1(&one[0], 5);                     //함수 호출 시 배열 one[0]의 메모리 주소,one 배열요소의 개수를 넘김
printf("[----- [염중화] [2019038062] -----]\n");
return 0;
}
void print1 (int *ptr, int rows)        //함수 호출시 one[0]의 메모리 주소를 받으므로 ptr은 배열 포인터이다.
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");       //메모리 주소      요소
for (i = 0; i < rows; i++)              //배열요소의 개수 만큼 반복
printf("%p \t %5d\n", ptr + i, *(ptr + i));     //ptr+i에 저장된 메모리 주소(==&one[i])
printf("\n");                                   //ptr+i가 가리키는 메모리 주소에 접근하여 저장된 값을 가져옴(==one[i])
}