#include<stdio.h>
int main (){
    int age ;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18) {
        printf("candidate is eligible to vote");
    }
    
    return 0;
    
}