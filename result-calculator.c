#include <stdio.h>
int  main(){
    int js,cpp,python;
    printf("enter your marks in js :");
    scanf("%d",&js);
    printf("enter your marks in cpp :");
    scanf("%d",&cpp);
    printf("enter your marks in python :");
    scanf("%d",&python);
    printf("Your marks in js, cpp and python are %d, %d and %d\n",js,cpp,python);
    if (js<33||cpp<33||python<33){
        printf("you are not passed because you failed in some subjects\n");
    }else if ((js+cpp+python)/3<40){
        printf("you have failed\n");
    }else{
        printf("you are passed!!\n");
    }
    return 0;
}
