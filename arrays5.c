#include<stdio.h>
int main(){
    char n[] ="RAGHAV";
    for (int i = 0; i <6; i++)
    {
        printf("%d alphabet is %c\n",i+1,n[i]);  //another way (printf("%s",n))
    }
    return 0;
}
