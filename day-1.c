#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int intInput;
    double doubleInput;
    char stringInput[100];
    scanf("%d", &intInput);
    scanf("%lf", &doubleInput);
    getchar();
    fgets(stringInput, sizeof(stringInput), stdin);
    stringInput[strcspn(stringInput, "\n")] = '\0';
    printf("%d\n", i + intInput);
    printf("%.1f\n", d + doubleInput);
    printf("%s%s\n", s, stringInput); 
    return 0;
}
