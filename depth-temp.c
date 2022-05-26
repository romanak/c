/* Author: Roman Akchurin
 * Date: 2021/02/26
 *
 * Computes the temperature inside the Earth at a given depth in kilometers in Celsius and Fahrenheit.
 */

#include <stdio.h>

void main(){
    double depth, celsius, fahr;
    printf("Enter the depth in kilometers inside the Earth: ");
    scanf("%lf", &depth);
    celsius = depth * 10 + 20;
    fahr = celsius * 1.8 + 32;
    printf("The temperature is %.1f degrees Celsius, or %.1f degrees Fahrenheit.\n", celsius, fahr);
}
