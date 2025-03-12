// Your code here..
#include<stdio.h>
int main(){
    float p,l;
    scanf("%f %f",&p,&l);
    if(p>l){
        printf("Profit");
    }
    else if (p<l){
        printf("Loss");
            }
        else{
        printf("No Profit No Loss");
        }    
        return 0;
}