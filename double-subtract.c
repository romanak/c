/* Author: Roman Akchurin
 * Date: 2021/2/26
 *
 * Doubles and subtracts and integer value
 */

#include <stdio.h>

void main(){
    int x;
    printf("Enter an integer value> ");
    scanf("%d", &x);
    x = x * 2 - 10;
    printf("The new value is %d.\n", x);
}
