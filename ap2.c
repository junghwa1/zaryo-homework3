#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];                //�迭 list ����
    int *plist[5];              //������ �迭 plist ����
    list[0] = 10;               //list[0]�� 10�� ����
    list[1] = 11;               //list[1]�� 11�� ����
    plist[0] = (int*)malloc(sizeof(int));               //������ �迭 ���� �Ҵ�
    printf("list[0] \t= %d\n", list[0]);                //list[0]�� ��:10
    printf("address of list \t= %p\n", list);           //list�� �޸� �ּ�:0061FF0C
    printf("address of list[0] \t= %p\n", &list[0]);    //list[0]�� �޸� �ּ�:0061FF0C
    printf("address of list + 0 \t= %p\n", list+0);     //list�� �޸� �ּ�:0061FF0C
    printf("address of list + 1 \t= %p\n", list+1);     //list[1]�� �޸� �ּ�:0061FF10
    printf("address of list + 2 \t= %p\n", list+2);     //list[2]�� �޸� �ּ�:0061FF14
    printf("address of list + 3 \t= %p\n", list+3);     //list[3]�� �޸� �ּ�:0061FF18
    printf("address of list + 4 \t= %p\n", list+4);     //list[4]�� �޸� �ּ�:0061FF1C
    printf("address of list[4] \t= %p\n", &list[4]);    //list[4]�� �޸� �ּ�:0061FF1C
    printf("[----- [����ȭ] [2019038062] -----]\n");
    free(plist[0]);             //free�Լ��� ���� �Ҵ�����
}