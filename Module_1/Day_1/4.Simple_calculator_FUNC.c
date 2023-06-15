#include<stdio.h>

int calculator(float operand_1, float operand_2);

int main()
{
    float operand_1;
    float operand_2;

    printf("Enter Operand_1 and Operand_2 values: ");
    scanf("%f %f", &operand_1, &operand_2);

    calculator(operand_1, operand_2);

    return 0;
}

int calculator(float operand_1, float operand_2)
{
    char operator;
    float answer;

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator)
    {
        case '+':
            answer = operand_1 + operand_2;
            printf("Answer: %.2f\n", answer);
            break;
        case '-':
            answer = operand_1 - operand_2;
            printf("Answer: %.2f\n", answer);
            break;
        case '*':
            answer = operand_1 * operand_2;
            printf("Answer: %.2f\n", answer);
            break;
        case '/':
            if (operand_2 != 0) {
                answer = operand_1 / operand_2;
                printf("Answer: %.2f\n", answer);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }
    return 0;
}
