#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num & 1){
        pritnf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}