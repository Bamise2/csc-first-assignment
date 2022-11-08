#include <stdio.h>
#include <stdlib.h>

int main() {
    int n =10;  
    char arr[n][20];
    int i;
    

    for(i=1; i<=10; i++){
        printf("Enter name %d: ", i);
        scanf("%s", &arr[i]);
    }

    printf("Names entered are: ");
    for(i=1; i<=10; i++){
        printf("%s\n", arr[i]);
    };

    return 0;
}
