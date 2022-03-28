#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];
    int *plist[5] = {NULL,};        //������ �迭 ����
    plist[0] = (int *)malloc(sizeof(int));      //������ �迭 ���� �Ҵ�
    list[0] = 1;                //list[0]�� 1�� ����
    list[1] = 100;              //list[1]�� 100�� ����
    *plist[0] = 200;            //plist[0]�� �޸� �ּҿ� �����Ͽ� 200����
    printf("value of list[0] = %d\n", list[0]);                 //list[0]�� ����� ��:1
    printf("address of list[0] = %p\n", &list[0]);              //list[0]�� �޸� �ּ�:0061FF0C
    printf("value of list = %p\n", list);                       //list�� ����� ���� �迭 list�� ù��° �޸� �ּ�(==&list[0]):0061FF0C
    printf("address of list (&list) = %p\n", &list);            //list�� �޸� �ּ�, ù��° �޸� �ּ�(==&list[0]):0061FF0C
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);                 //list[1]�� ����� ��:100
    printf("address of list[1] = %p\n", &list[1]);              //list[1]�� �޸� �ּ�:0061FF10(&list[0]���� 4bytes ŭ)
    printf("value of *(list+1) = %d\n", *(list + 1));           //list[1](==list+1)�� ����Ű�� �޸� �ּҿ� �����Ͽ� ���� ���:100
    printf("address of list+1 = %p\n", list+1);                 //list +1�� list�� �޸� �ּҿ� int���� ũ���� 4bytes��ŭ Ŀ����(==&list[1]):0061FF10
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);             //plist[0]�� ����Ű�� �޸� �ּҿ� �����Ͽ� ���� ������:200
    printf("&plist[0] = %p\n", &plist[0]);                      //plist[0]�� �޸� �ּ�:0061FEF8
    printf("&plist = %p\n", &plist);                            //plist�� �޸� �ּ�, ù��° �޸� �ּ�(==&plist[0]):0061FEF8
    printf("plist = %p\n", plist);                              //plist�� ����� ���� ������ �迭 plist�� ù��° �޸� �ּ�(==&plist[0]):0061FEF8
    printf("plist[0] = %p\n", plist[0]);                        //plist[0]�� ����Ű�� �ּ� 00B518E0
    printf("plist[1] = %p\n", plist[1]);                        //plist[1]���� 
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);                        //plist[4]���� ���α׷����� ������� �ʾұ⶧���� �޸𸮰� �Ҵ� ���� ����:00000000
    printf("[----- [����ȭ] [2019038062] -----]\n");
    free(plist[0]);             //free�Լ��� ���� �Ҵ�����
}