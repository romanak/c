/* Author: Roman Akchurin
 * Date: 2021/02/27
 *
 * Computes the first 10 Fibonacci numbers.
 */

#include <stdio.h>

int fibonacci(int n);

int main(){
    int f;
    for(int i = 0; i < 10; i++){
        f = fibonacci(i);
        printf("Fibonacci of %d is %d\n", i, f);
    }
}

int fibonacci(int n){
    if (n == 0) return 0;
    else if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
