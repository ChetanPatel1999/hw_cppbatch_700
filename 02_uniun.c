// Union in c language
#include <stdio.h>
#include <string.h>
union pen
{
    char name[12]; // data members of union
    int price;
    float rating;
};
void main()
{
    union pen p1;
    printf("size of p1 = %d\n", sizeof(p1));
    printf("enter p1 info : \n");
    printf("enter pen name : ");
    scanf("%s", p1.name);
    printf("name of pen : %s\n", p1.name);
    printf("enter pen price : ");
    scanf("%d", &p1.price);
    printf("price of pen : %d\n", p1.price);
    printf("enter pen rating : ");
    scanf("%f", &p1.rating);
    printf("rating of pen : %.2f\n", p1.rating);
}