//
// bsequence_example.c
//
// Binary sequence example
//

#include <stdio.h>
#include <complex.h>
#include <math.h>

#include "liquid.h"

//#define OUTPUT_FILENAME "bsequence_example.m"

int main() {
    // create and initialize m-sequence
    unsigned int n=32;
    bsequence q = bsequence_create(n);

    bsequence_push(q,1);
    bsequence_push(q,1);
    bsequence_push(q,1);
    bsequence_push(q,1);

    bsequence_push(q,0);
    bsequence_push(q,1);

    bsequence_print(q);

    unsigned int b;
    unsigned int i;
    for (i=0; i<n; i++) {
        b = bsequence_index(q,i);
        printf("b[%3u] = %3u\n", i, b);
    }
    
    // clean up memory
    bsequence_destroy(q);

    return 0;
}
