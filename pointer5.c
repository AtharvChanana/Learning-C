#include<stdio.h>
int main(){
    int marks[5];
    printf("enter the marks :");
    for (int i = 0; i< 5; i++)
    {
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("marks of student %d is %d\n",i,marks[i]);
    }
    return 0;
}
