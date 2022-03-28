#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int);        //�迭�� �ּҸ� �Ű������� �޴´�.
float input[MAX_SIZE], answer;
int i;
void main(void)
{
    for(i=0; i < MAX_SIZE; i++)         //input[0]=0, input[1]=1 ... input[98]=98, input[99]
        input[i] = i;
    /* for checking call by reference */
    printf("address of input = %p\n", input);   //input�� �ּ�(&input[0])
    answer = sum(input, MAX_SIZE);              //answer=1+2+3+ ... 97+98+99(input�� �迭�� �ּ�)
    printf("The sum is: %f\n", answer);         //answer=4950
    printf("[----- [����ȭ] [2019038062] -----]\n");
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list);       //list�� ��:004070A0(list�� ����� input�� �޸� �ּ�)
    printf("address of list = %p\n\n", &list);  //list�� �޸� �ּ�:0061FF00
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];                     //list[i]==input[i]
    return tempsum;                             //tempsum=4950
}