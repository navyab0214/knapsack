#include <stdio.h>
#include <ctype.h>

char input[100];
int i = 0;

void E();
void T();
void F();
void error();

void match(char expected) {
    if(input[i] == expected)
        i++;
    else
        error();
}

void error() {
    printf("Syntax Error\n");
    exit(1);
}

void E() {
    T();
    if(input[i] == '+') {
        match('+');
        T();
        E();
    }
}

void T() {
    F();
    if(input[i] == '*') {
        match('*');
        F();
        T();
    }
}

void F() {
    if(isalnum(input[i]))
        match(input[i]);
    else if(input[i] == '(') {
        match('(');
        E();
        match(')');
    }
    else
        error();
}

int main() {
    printf("Enter an arithmetic expression: ");
    scanf("%s", input);

    E();

    if(input[i] == '\0')
        printf("INValid Expression\n");
    else
        printf("valid Expression\n");

    return 0;
}

