#include <stdio.h>

struct student1 {           //����ü ����
    char lastName;
    int studentId;
    char grade;
};                          //(struct student1 ����ü �̸�)���� ����ü ������ ���� �Ͽ��� ��
typedef struct {            //����ü ����
    char lastName;
    int studentId;
    char grade;
} student2;                 //typedef�� ���� (student2 ����ü �̸�)���� ���� ����
int main()
{
    struct student1 st1 = {'A', 100, 'A'};          //����ü ���� st1 ����, st1.lastName=='A',st1.studentId==100,st1.grade=='A'
    printf("st1.lastName = %c\n", st1.lastName);    //st1.lastName�� ��:A
    printf("st1.studentId = %d\n", st1.studentId);  //st1.studentId�� ��:100
    printf("st1.grade = %c\n", st1.grade);          //st1.grade�� ��:A
    student2 st2 = {'B', 200, 'B'};                 //����ü ���� st2 ����, st2.lastName=='B',st2.studentId==200,st2.grade=='B'
    printf("\nst2.lastName = %c\n", st2.lastName);  //st2.lastName�� ��:B
    printf("st2.studentId = %d\n", st2.studentId);  //st2.studentId�� ��:200
    printf("st2.grade = %c\n", st2.grade);          //st2.grade�� ��:B
    student2 st3;                                   //����ü ���� st3����
    st3 = st2;                                      //st3.lastName='B',st3.studentId=200,st3.grade='B'(st2=st3�� ����ü ���� ����)
    printf("\nst3.lastName = %c\n", st3.lastName);  //st3.lastName=='B'
    printf("st3.studentId = %d\n", st3.studentId);  //st3.studentId==200
    printf("st3.grade = %c\n", st3.grade);          //st3.grade=='B'
    /* equality test */
    //if(st3 == st2) /* not working */              //���� ����
    //    printf("equal\n");                        //����ü ��Ҹ� �ϳ� �ϳ� ���Ͽ��� ��
    //else
    //    printf("not equal\n");
    int T_F=1;
    if(st2.lastName!=st3.lastName)                  //st2.lastName�� st3.lastName�� ���� �ʴٸ�
        T_F=0;                                      //T_F=0
    if(st2.studentId!=st3.studentId)                //st2.studentId�� st3.studentId�� ���� �ʴٸ�
        T_F=0;                                      //T_F=0
    if(st2.grade!=st3.grade)                        //st2.grade�� st3.grade�� ���� �ʴٸ�
        T_F=0;                                      //T_F=0
    if(T_F==1)                                      //T_F=1�̸�(st2�� st3�� ���ٸ�)
        printf("equal\n");                          //equal ���
    else
        printf("not equal\n");                      //(st2�� st3�� ����� �ϳ��� ���� �ʴٸ�) not equal ���
    printf("    [----- [����ȭ] [2019038062] -----]\n");
    return 0;
}