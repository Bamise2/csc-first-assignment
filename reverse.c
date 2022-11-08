# include <stdio.h>
#include <string.h>

int main() {

    char string[50];
    int x;

    printf("Enter a string: ");
    scanf("%s", &string);
    reverse(string, x);


    printf("The reverse string is: %s\n", string);

    return 0;
}

void reverse(char str[50], int x){
    x = strlen(str);
    for(int i=0;i<x/2;i++){
        char straight = str[i];
        char reverse =     str[x-i-1];
        str[i] = reverse;
        str[x-i-1] = straight;
    }
}