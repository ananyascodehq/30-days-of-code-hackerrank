#include <stdio.h>

int main() {
    char input[1000];                 
    fgets(input, 1000, stdin);        

    printf("Hello, World.\n");        
    printf("%s", input);              
    return 0;
}
