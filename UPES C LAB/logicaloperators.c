
#include <stdio.h>

int main(){
     int a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(b>c))
    printf("%d is greatest",a);
    else if(b>a&&b>c)
    printf("%d is greatest",b);
    else if (c>a&&c>b)
    printf("%d is greatest",c);
    else if (a==b && b==c)
    printf("All numbers are same");
    return 0;
}