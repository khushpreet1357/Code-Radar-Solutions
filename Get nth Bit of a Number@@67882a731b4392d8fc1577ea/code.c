#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if((num & (1 << num)) ! = 0){
        printf("0 or 1");
    }
    return 0;
}