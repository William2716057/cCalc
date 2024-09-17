#include <stdio.h>

int main() {
    int inputValue;
    int result;
    
    //user input
    printf("Enter minutes: ");
    scanf("%d", &inputValue);
    
    //multiply by 60
    result = inputValue * 60;
    
    //print result
    printf("%d seconds\n", result);
    
    return 0;
}
