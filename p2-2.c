#include <stdio.h>
void print1 (int *ptr, int rows);       //�迭 �����͸� �Ű������� ����
int main()
{
int one[] = {0, 1, 2, 3, 4};            //int�� �迭 one����
printf("one = %p\n", one);              //�迭 one�� ù��° �޸� �ּ�
printf("&one = %p\n", &one);            //�迭 one�� ù��° �޸� �ּ�
printf("&one[0] = %p\n", &one[0]);      //one[0]�� �޸� �ּ�
printf("\n");
print1(&one[0], 5);                     //�Լ� ȣ�� �� �迭 one[0]�� �޸� �ּ�,one �迭����� ������ �ѱ�
printf("[----- [����ȭ] [2019038062] -----]\n");
return 0;
}
void print1 (int *ptr, int rows)        //�Լ� ȣ��� one[0]�� �޸� �ּҸ� �����Ƿ� ptr�� �迭 �������̴�.
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");       //�޸� �ּ�      ���
for (i = 0; i < rows; i++)              //�迭����� ���� ��ŭ �ݺ�
printf("%p \t %5d\n", ptr + i, *(ptr + i));     //ptr+i�� ����� �޸� �ּ�(==&one[i])
printf("\n");                                   //ptr+i�� ����Ű�� �޸� �ּҿ� �����Ͽ� ����� ���� ������(==one[i])
}