#include <stdio.h>

int main(void) {
    // You can declare the variables + the values
    int height = 8, length = 12, width = 10, volume, weight;

    // you can override the default value by assigning the new value into variable

    printf("Enter the height value : " );
    scanf("%d", &height);

    printf("Enter Length : ");
    scanf("%d", &length);

    printf("Enter Width : ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
