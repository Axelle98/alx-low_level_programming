#include <stdio.h>
#include <stdlib.h>

/**
 * change
 */

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int cents = atoi(argv[1]);

    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    int numQuarters = cents / 25;
    cents %= 25;

    int numDimes = cents / 10;
    cents %= 10;

    int numNickels = cents / 5;
    cents %= 5;

    int numTwos = cents / 2;
    cents %= 2;

    int numOnes = cents;

    int totalCoins = numQuarters + numDimes + numNickels + numTwos + numOnes;

    printf("%d\n", totalCoins);

    return 0;
}

