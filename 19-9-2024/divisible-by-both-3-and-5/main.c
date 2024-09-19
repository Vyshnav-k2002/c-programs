#include <stdio.h>

int main() {
    int a;

    
    printf("Enter any number: ");
    scanf("%d", &a);

    
    if (a % 3 == 0 && a % 5 == 0) {
        printf("The number %d is divisible by both 3 and 5.\n", a);
    } else {
        printf("The number %d is not divisible by both 3 and 5.\n", a);
    }

    return 0;
}

