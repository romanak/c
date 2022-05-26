/* Author: Roman Akchurin
 * Date: 2021/02/27
 *
 * Test switch statement.
 */

#include <stdio.h>

int main(){
    int x = 1;
    int y = 6;
    int z = 20;
    switch (x){
        case 0: printf("x is 0\n");
        case 1: printf("x is 1\n");
        case 2: printf("x is 2\n");
        case 3: printf("x is 3\n");
    }
    switch (y){
        case 4:
            printf("y is 4\n");
            break;
        case 5:
            printf("y is 5\n");
            break;
        case 6:
            printf("y is 6\n");
            break;
        case 7:
            printf("y is 7\n");
            break;
    }
    switch (z){
        case 8:
            printf("z is 8\n");
            break;
        case 9:
            printf("z is 9\n");
            break;
        case 10:
            printf("z is 10\n");
            break;
        default:
            printf("z is some other value.\n");
            break;
    }
}
