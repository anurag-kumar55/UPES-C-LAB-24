#include<stdio.h>
int main (){
    int marks ;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if(marks>=45) {
        printf("Student is pass");
    }
    else{
        printf("FAIL");
    }
    
    return 0;
    
}