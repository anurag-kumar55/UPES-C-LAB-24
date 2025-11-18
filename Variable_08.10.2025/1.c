//Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>
int x = 10;
void display()
{
    printf("inside display() the function is, x = %d\n", x);
}

void change()
{
    x = x + 5;   
    printf("inside change() the function, x = %d\n", x);
}

int main()
{
    printf("inside main(), initial is x = %d\n", x);
    display();  
    change();    
    display();

    return 0;
}

