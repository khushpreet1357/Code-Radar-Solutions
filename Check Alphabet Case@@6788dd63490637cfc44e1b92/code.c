#include<stdio.h>
#include<ctype.h>
int main(){
char m;
scanf("%c",&m);
if(isupper(m)){
    printf("Uppercase\n");
}
else if(islower(m)){
    printf("Lowercase");
}
else{
    printf("Not an alphabet");
}
return 0;
}