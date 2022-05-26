#include <stdio.h>
#define PI 3.14159
int
main(void){
int first, second, third;
double x, area, radius;
x = 21.234;
radius = 5;
area = 4 * PI * radius * radius;
printf("Enter three integers> ");
scanf("%d %d %d", &first, &second, &third);
printf("First: %d, second: %d, third: %d\n", first, second, third);
printf("The value of x is %f\n", x);
printf("The surface area of a sphere with radius %f is %f.\n", radius, area);
return (0);
}
