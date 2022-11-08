#include <stdio.h>

int main() {

    int userInput;
    printf("Enter a number: ");
    scanf("%d", &userInput);

    int x;
    for (x=1; x<=userInput; x++){
        printf("%d\n", x)
  ;  }

  return 0;
}