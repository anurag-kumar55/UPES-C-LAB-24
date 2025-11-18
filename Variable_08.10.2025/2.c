/*Declare a local variable inside a function and try to acceess it outside the function.compare this with accessing the global 
variable from within the function.
*/

#include <stdio.h>
int g = 100;  
void display() {
    int x = 10;    
    printf("Inside display(): x = %d\n", x);
    printf("Inside display(): g = %d\n", g);
}

int main() {

    display();
    printf("Inside main(): g = %d\n", g);  
    return 0;
}