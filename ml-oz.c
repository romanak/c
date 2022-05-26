/* Author: Roman Akchurin
 * Date: 2021/02/26
 *
 * Converts a volume in mililiters to fluid ounces
 */

#include <stdio.h>
#define ML_TO_OZ 0.0338
void main(){
    int volume_ml;
    double volume_oz;
    printf("Enter the volume in mililiters> ");
    scanf("%d", &volume_ml);
    volume_oz = volume_ml * ML_TO_OZ;
    printf("The volume in fluid ounces is %.2f\n", volume_oz);
}
