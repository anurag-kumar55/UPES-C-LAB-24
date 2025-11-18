/* Declare a variable within different code blocks (enclosed by curly braces)and test their accessibility within and outside 
those blocks */

#include <stdio.h>
int main() {
    int a = 10; 
    printf("Inside main block: a = %d\n", a);

    {  
        int b = 20;
        printf("Inside first block: a = %d\n", a);
        printf("Inside first block: b = %d\n", b);
    }

    {   
        int c = 30;
        printf("Inside second block: a = %d\n", a);  
        printf("Inside second block: c = %d\n", c);  
    }
    return 0;
}