#include<stdio.h>
#include<ctype.h>
int main(){
    char d;
    scanf("%c",&d);
    if(d=='a'|| d=='e'|| d=='i'||d=='o'||d=='u' ||d=='A'|| d=='E'||d=='I'||d='O'||d=='U'){
     printf("Vowel\n");   
    }
    else if(isalpha(d)){
        printf("Consonant\n");
    }
    else if(isdigit(d)){
        printf("Digit\n");
    }
    else{
        printf("Special Character\n");
    }
    return 0;
}
