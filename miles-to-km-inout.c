/*
 * Author: Roman Akchurin
 * Date: 2021-02-26
 *
 * Converts distances from miles to kilometers.
 */

#include <stdio.h> /* Standard input output definitions */ 
#define KMS_PER_MILE 1.609 /* conversion constant */

int main(){
    double miles, kms;
    FILE *inp, *outp;

    /* Open the input and output files. */
    inp = fopen("distance.txt", "r");
    outp = fopen("distance.out", "w");
    
    /* Get and echo the distance in miles. */
    fscanf(inp, "%lf", &miles);
    fprintf(outp, "The distance in miles is %.2f.\n", miles);

    /* Convert the distance to kilometers. */
    kms = KMS_PER_MILE * miles;

    /* Display the distance in kilometers. */
    fprintf(outp, "That equals %.2f kilometers.\n", kms);

    /* Close files. */
    fclose(inp);
    fclose(outp);

    return (0);
}
