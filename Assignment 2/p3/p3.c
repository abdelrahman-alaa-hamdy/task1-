#include <stdio.h>

int main() {
    int x = 10, y = 20, z = 30;
    int *p = &x, *q = &y, *r = &z;
    
    // Print initial values
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("p = %p, q = %p, r = %p\n", p, q, r);
    
    // Execute swap code
    r = p;
    p = q;
    q = r;
    
    // Print final values
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("p = %p, q = %p, r = %p\n", p, q, r);
    
    return 0;
}
