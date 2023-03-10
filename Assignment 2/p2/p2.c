#include <stdio.h>

int main() {
    int x = 10, y = 20, z = 30;
    int *p, *q, *r;

    p = &x;
    q = &y;
    r = &z;

    
    printf("p = %p, q = %p, r = %p\n", p, q, r);

    // Swap pointers
    int *temp;
    temp = p;
    p = q;
    q = r;
    r = temp;

    printf(" swapping pointers\n");
    printf("p = %p, q = %p, r = %p\n", p, q, r);

    return 0;
}
