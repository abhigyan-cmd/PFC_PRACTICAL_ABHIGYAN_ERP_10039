#include <stdio.h>
int main() {
    // Abhigyan patra
    // RU-25-10039
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;  
        sum += digit;     
        num /= 10;        
    }

    printf("Sum of digits = %d", sum);

    return 0;
}

// Output
// Enter a number: 1234
// Sum of digits = 10