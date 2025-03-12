// Your code here..
#include<stdio.h>
int main(){
    float cost_price,selling_price;
    scanf("%f %f",&cost_price,&selling_price);
    if(selling_price > cost_price){
        printf("Loss\n");
    }
    else if(cost_price < selling_price){
        printf("profit\n");
            }
        else{
        printf("No Profit No Loss");
        }    
        return 0;
}