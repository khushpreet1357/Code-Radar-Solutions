// Your code here..
#include<stdio.h>
int main(){
    float cost,selling;
    scanf("%f %f",&cost,&selling);
    if(cost>selling){
        printf("Profit");
    }
    else if(cost<selling){
        printf("Loss");
            }
        else{
        printf("No Profit No Loss");
        }    
        return 0;
}