#include <stdio.h>
/**
 * This program used to calculate the volume of "Kecurut"
 * Author Rofilde Hasudungan <rofilde@umkt.ac.id>
 */

int main(void) {
    // stage 0: Define variables: r, t,v, pi
    float r, t, v;

    // stage 1: ask for r from the user
    printf("Enter r = "); // Output
    scanf("%f", &r);      // Input

    // stage 2: ask for t from the user
    printf("\nEnter t= ");
    scanf("%f", &t);

    // stage 3: calculate the v for the volume
    v = (r * r * t * 22)/(7 * 3);

    // stage 4: print the v to the screen
    printf("The volume is %.2f cubic", v);

    return 0;
}
