#include <stdio.h>

int main()
{
    float firstNumber, secondNumber, finalResult;
    char operation = ' ';

    printf("Enter the first number: ");
    scanf("%f", &firstNumber);
    
    do {
        printf("Enter the operation (+, -, *, /): ");
        scanf(" %c", &operation); 
    } while (operation != '+' && operation != '-' && operation != '/' && operation != '*'); 

    printf("Enter the second number: ");
    scanf("%f", &secondNumber); 

    if (operation == '+')
    {
        finalResult = firstNumber + secondNumber;
        printf("The result is %.2f\n", finalResult);
    }
    else if (operation == '-')
    {
        finalResult = firstNumber - secondNumber;
        printf("The result is %.2f\n", finalResult);  
    }
    else if (operation == '*')
    {
        finalResult = firstNumber * secondNumber;
        printf("The result is %.2f\n", finalResult);  
    }
    else if (operation == '/')
    {
        while (secondNumber == 0) {
            printf("You can't divide by zero. Please enter a new second number: ");
            scanf("%f", &secondNumber);
        }
        finalResult = firstNumber / secondNumber;
        printf("The result is %.2f\n", finalResult);
    }

    return 0;
}