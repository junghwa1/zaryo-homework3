#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];                //배열 list 선언
    int *plist[5];              //포인터 배열 plist 선언
    list[0] = 10;               //list[0]에 10을 저장
    list[1] = 11;               //list[1]에 11을 저장
    plist[0] = (int*)malloc(sizeof(int));               //포인터 배열 동적 할당
    printf("list[0] \t= %d\n", list[0]);                //list[0]의 값:10
    printf("address of list \t= %p\n", list);           //list의 메모리 주소:0061FF0C
    printf("address of list[0] \t= %p\n", &list[0]);    //list[0]의 메모리 주소:0061FF0C
    printf("address of list + 0 \t= %p\n", list+0);     //list의 메모리 주소:0061FF0C
    printf("address of list + 1 \t= %p\n", list+1);     //list[1]의 메모리 주소:0061FF10
    printf("address of list + 2 \t= %p\n", list+2);     //list[2]의 메모리 주소:0061FF14
    printf("address of list + 3 \t= %p\n", list+3);     //list[3]의 메모리 주소:0061FF18
    printf("address of list + 4 \t= %p\n", list+4);     //list[4]의 메모리 주소:0061FF1C
    printf("address of list[4] \t= %p\n", &list[4]);    //list[4]의 메모리 주소:0061FF1C
    printf("[----- [염중화] [2019038062] -----]\n");
    free(plist[0]);             //free함수를 통해 할당해제
}