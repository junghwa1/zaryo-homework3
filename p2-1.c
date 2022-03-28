#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int);        //배열의 주소를 매개변수로 받는다.
float input[MAX_SIZE], answer;
int i;
void main(void)
{
    for(i=0; i < MAX_SIZE; i++)         //input[0]=0, input[1]=1 ... input[98]=98, input[99]
        input[i] = i;
    /* for checking call by reference */
    printf("address of input = %p\n", input);   //input의 주소(&input[0])
    answer = sum(input, MAX_SIZE);              //answer=1+2+3+ ... 97+98+99(input은 배열의 주소)
    printf("The sum is: %f\n", answer);         //answer=4950
    printf("[----- [염중화] [2019038062] -----]\n");
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list);       //list의 값:004070A0(list에 저장된 input의 메모리 주소)
    printf("address of list = %p\n\n", &list);  //list의 메모리 주소:0061FF00
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];                     //list[i]==input[i]
    return tempsum;                             //tempsum=4950
}