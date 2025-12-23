#include <stdio.h>
int main() {
    // Abhigyan patra
    // RU-25-10039
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        char ch = 'A';
        for(int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}

// output
// Enter the number of rows: 5  
// A
// AB   
// ABC
// ABCD
// ABCDE