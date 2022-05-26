#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(void){
    double rim_length, /* total length of door and window rims in cm */
    bead_thickness, /* thickness of the bead in mm */
    caulk_volume; /* volume of the tube of caulk */
    printf("Enter rim length in cm and bead thickness in mm> ");
    scanf("%lf %lf", &rim_length, &bead_thickness);
    caulk_volume = PI * pow(bead_thickness / 100 / 2, 2) * rim_length * 1.1;
    /* V = pi * r^2 * h; adding 10% allowance to be left */
    printf("The volume of the smallest tube with sufficient caulk is %f cubic cm.\n", caulk_volume);
    return (0);
}
