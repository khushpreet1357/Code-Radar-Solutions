#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a,&b);
    if(a=='A'){
        printf("Excellent");
    }
    else if('B'){
    printf("Good");
}
else if(a=='C'){
    printf("Average");
}
else if(a=='D'){
    printf("Below Average");
}
else if(a=='F'){
    printf("Fail");
}
else{
    printf("Invalid");
}
return 0;
}