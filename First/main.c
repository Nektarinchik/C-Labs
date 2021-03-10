#include <stdio.h>
#include "mylib.h"

const char * to_string(const int number);

int main() {
    int number;
    while (1) {
        printf("Enter your number: ");
        if (scanf("%d", &number) != 1 || number < 1 || number > 100) {
            printf("Wrong input, try again\n");
            while (getchar() != '\n') { ; }         
        }
        else {
            break;
        }
    }
    printf("%d - %s\n", number, to_string(number));
}