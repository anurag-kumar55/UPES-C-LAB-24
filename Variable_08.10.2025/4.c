//Declare a static local variable inside a function.observe how its value persists across function calls.

#include <stdio.h>
void counter() {
    static int x = 0;   
    x++;                
    printf("x = %d\n", x);
}

int main() {

    counter();  
    counter();  
    counter();  
    return 0;
}