// Your code here..
#include<stdio.h>
int main(){
    float cost_price,selling_price;
    scanf("%f %f",&cost_price,&selling_price);
    if(cost_price>selling_price){
        printf("Profit");
    }
    else if(cost_price<selling_price){
        printf("Loss");
            }
        else{
        printf("No Profit No Loss");
        }    
        return 0;
}