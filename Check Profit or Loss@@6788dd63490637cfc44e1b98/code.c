// Your code here..
#include<stdio.h>
int main(){
    float cost_price,selling_price;
    scanf("%f %f",&cost_price,&selling_price);
    if(selling_price > cost_price){
    printf("Profit");
}
else if(selling_price < cost_price){
printf("Loss");
}
else{
    printf("No Profit No Loss");

    }
    return 0;
}