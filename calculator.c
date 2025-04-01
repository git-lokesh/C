#include <stdio.h>
int main(){

    int op1, op2;
    char op;

    printf("Enter the operator ['+','-','*','/','%%'] :");
    scanf("%c", &op);

    printf("Enter number 1: ");
    scanf("%d", &op1);

    printf("Enter number 2: ");
    scanf("%d", &op2);

    switch (op){
    case '+':
        printf("Sum : %d", op1+op2);
        break;
    case '-':
        printf("Difference : %d", op1+op2);
        break;
    case '*':
        printf("Product : %d", op1*op2);
        break;
    case '/':
        printf("Divide : %.3f", (float)op1 / op2);
        break;
    case '%':
        printf("Modulus : %d", op1 % op2);
        break;

    default:
        printf("Enter Valid operator!!!");
        break;
    }

    return 0;
}