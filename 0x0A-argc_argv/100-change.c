#include <stdio.h>
#include <stdlib.h>

/**
 * change
 */

int main(int argc, char *argv[]) {
    int cents, numQuarters, numDimes, numNickels, numTwos, numOnes, totalCoins;

    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    cents = atoi(argv[1]);

    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    numQuarters = cents / 25;
    cents %= 25;

    numDimes = cents / 10;
    cents %= 10;

    numNickels = cents / 5;
    cents %= 5;

    numTwos = cents / 2;
    cents %= 2;

    numOnes = cents;

    totalCoins = numQuarters + numDimes + numNickels + numTwos + numOnes;

    printf("%d\n", totalCoins);

    return 0;
}
