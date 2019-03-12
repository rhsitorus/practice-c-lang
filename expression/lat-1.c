#include <stdio.h>

int main(void) {

    int a;
    int b;
    int result;
    int sisa;
    float hasil_bagi;

    a = 7;
    b = 5;

    hasil_bagi = a/b;
    sisa = a % b;


    printf("%d dibagi %d = %.2f\n", a, b, hasil_bagi);
    printf("Sisa %d dibagi %d = %d", a, b, sisa);

    return 0;
}
