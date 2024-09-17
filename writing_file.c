#writing a file
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("raghav.txt","w");
    int num = 100;
    fprintf(fptr,"%d",num);
    fclose(fptr);
    return 0;
}
