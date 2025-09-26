#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int T;
    scanf("%d", &T);         // number of test cases

    while (T--) {
        char s[10000];       // assume max length < 10000
        scanf("%s", s);

        // Print even-indexed characters
        for (int i = 0; s[i] != '\0'; i++) {
            if (i % 2 == 0)
                printf("%c", s[i]);
        }

        printf(" ");  // space separator

        // Print odd-indexed characters
        for (int i = 0; s[i] != '\0'; i++) {
            if (i % 2 == 1)
                printf("%c", s[i]);
        }

        printf("\n");
    }
    return 0;
}
