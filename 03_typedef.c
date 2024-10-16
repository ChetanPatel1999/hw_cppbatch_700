// typedef in c language
#include <stdio.h>
struct student_10th_class_2024_batch
{
    int rno;
    float per;
};
typedef int i;
typedef long long int lli;
typedef short int si;
typedef struct student_10th_class_2024_batch s10th;
void main()
{
    s10th s1, s2;
    i a;
    lli b;
    si c;
    char d;
    printf("size of int : %d\n", sizeof(a));
    printf("size of long long int : %d\n", sizeof(b));
    printf("size of short int : %d\n", sizeof(c));
    printf("size of char : %d\n", sizeof(d));
}