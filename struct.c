#include <stdio.h>

struct student1 {           //구조체 정의
    char lastName;
    int studentId;
    char grade;
};                          //(struct student1 구조체 이름)으로 구조체 변수를 선언 하여야 함
typedef struct {            //구조체 정의
    char lastName;
    int studentId;
    char grade;
} student2;                 //typedef로 인해 (student2 구조체 이름)으로 선언 가능
int main()
{
    struct student1 st1 = {'A', 100, 'A'};          //구조체 변수 st1 선언, st1.lastName=='A',st1.studentId==100,st1.grade=='A'
    printf("st1.lastName = %c\n", st1.lastName);    //st1.lastName의 값:A
    printf("st1.studentId = %d\n", st1.studentId);  //st1.studentId의 값:100
    printf("st1.grade = %c\n", st1.grade);          //st1.grade의 값:A
    student2 st2 = {'B', 200, 'B'};                 //구조체 변수 st2 선언, st2.lastName=='B',st2.studentId==200,st2.grade=='B'
    printf("\nst2.lastName = %c\n", st2.lastName);  //st2.lastName의 값:B
    printf("st2.studentId = %d\n", st2.studentId);  //st2.studentId의 값:200
    printf("st2.grade = %c\n", st2.grade);          //st2.grade의 값:B
    student2 st3;                                   //구조체 변수 st3선언
    st3 = st2;                                      //st3.lastName='B',st3.studentId=200,st3.grade='B'(st2=st3로 구조체 복사 가능)
    printf("\nst3.lastName = %c\n", st3.lastName);  //st3.lastName=='B'
    printf("st3.studentId = %d\n", st3.studentId);  //st3.studentId==200
    printf("st3.grade = %c\n", st3.grade);          //st3.grade=='B'
    /* equality test */
    //if(st3 == st2) /* not working */              //실행 오류
    //    printf("equal\n");                        //구조체 요소를 하나 하나 비교하여야 함
    //else
    //    printf("not equal\n");
    int T_F=1;
    if(st2.lastName!=st3.lastName)                  //st2.lastName과 st3.lastName이 같지 않다면
        T_F=0;                                      //T_F=0
    if(st2.studentId!=st3.studentId)                //st2.studentId과 st3.studentId이 같지 않다면
        T_F=0;                                      //T_F=0
    if(st2.grade!=st3.grade)                        //st2.grade과 st3.grade이 같지 않다면
        T_F=0;                                      //T_F=0
    if(T_F==1)                                      //T_F=1이면(st2와 st3이 같다면)
        printf("equal\n");                          //equal 출력
    else
        printf("not equal\n");                      //(st2와 st3의 요소중 하나라도 같지 않다면) not equal 출력
    printf("    [----- [염중화] [2019038062] -----]\n");
    return 0;
}