// Your code here..
#include<stdio.h>
int main(){
    float c,l;
    scanf("%f %f",&c,&l);
    if(c> l){
    printf("Profit");
}
else if(c< l){
printf("Loss");
}
else{
    printf("No Profit No Loss");

    }
    return 0;
}