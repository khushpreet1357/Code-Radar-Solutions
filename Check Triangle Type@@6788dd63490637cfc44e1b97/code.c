#include<stdio.h>
int main(){
     int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
        if(a==b && b==a && c==b &&   a==c){
    printf("Equilateral");
    }
    else if(a==b && b!=a && c!=a){
    printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
    }
