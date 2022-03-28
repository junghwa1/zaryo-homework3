#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];
    int *plist[5] = {NULL,};        //포인터 배열 선언
    plist[0] = (int *)malloc(sizeof(int));      //포인터 배열 동적 할당
    list[0] = 1;                //list[0]에 1을 저장
    list[1] = 100;              //list[1]에 100을 저장
    *plist[0] = 200;            //plist[0]의 메모리 주소에 접근하여 200저장
    printf("value of list[0] = %d\n", list[0]);                 //list[0]에 저장된 값:1
    printf("address of list[0] = %p\n", &list[0]);              //list[0]의 메모리 주소:0061FF0C
    printf("value of list = %p\n", list);                       //list에 저장된 값은 배열 list의 첫번째 메모리 주소(==&list[0]):0061FF0C
    printf("address of list (&list) = %p\n", &list);            //list의 메모리 주소, 첫번째 메모리 주소(==&list[0]):0061FF0C
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);                 //list[1]에 저장된 값:100
    printf("address of list[1] = %p\n", &list[1]);              //list[1]의 메모리 주소:0061FF10(&list[0]보다 4bytes 큼)
    printf("value of *(list+1) = %d\n", *(list + 1));           //list[1](==list+1)이 가리키는 메모리 주소에 접근하여 값을 출력:100
    printf("address of list+1 = %p\n", list+1);                 //list +1은 list의 메모리 주소에 int형의 크기인 4bytes만큼 커진값(==&list[1]):0061FF10
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);             //plist[0]이 가리키는 메모리 주소에 접근하여 값을 가져옴:200
    printf("&plist[0] = %p\n", &plist[0]);                      //plist[0]의 메모리 주소:0061FEF8
    printf("&plist = %p\n", &plist);                            //plist의 메모리 주소, 첫번째 메모리 주소(==&plist[0]):0061FEF8
    printf("plist = %p\n", plist);                              //plist에 저장된 값은 포인터 배열 plist의 첫번째 메모리 주소(==&plist[0]):0061FEF8
    printf("plist[0] = %p\n", plist[0]);                        //plist[0]이 가리키는 주소 00B518E0
    printf("plist[1] = %p\n", plist[1]);                        //plist[1]부터 
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);                        //plist[4]까지 프로그램에서 사용하지 않았기때문에 메모리가 할당 되지 않음:00000000
    printf("[----- [염중화] [2019038062] -----]\n");
    free(plist[0]);             //free함수를 통해 할당해제
}