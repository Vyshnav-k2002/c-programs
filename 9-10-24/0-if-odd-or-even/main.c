#include <stdio.h>

int main() {
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a>0){
        printf("the number is positive\n");
        if(a%2==0){
            printf("even");
        }
            else{
                printf("odd");
            }
            
    }
    else if(a<0){
        printf("the number is negetive");
    } 
    else{
        printf("the number is zero");
    }
    }    
