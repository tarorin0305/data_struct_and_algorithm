#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stack_pointer, stack[1000];

void push(int x) {
    stack[stack_pointer++] = x;
}

int pop() {
    stack_pointer--;
    return stack[stack_pointer+1];
}

int main(){
    int a, b;
    stack_pointer = 0;
    char s[100];

    while( scanf("%s", s) != EOF ) {
        if (s[0] == '+') {
            a = pop();
            b = pop();
            push(a + b);
        } else if (s[0] == '-') {
            a = pop();
            b = pop();
            push(a - b);
        } else if (s[0] == '*') {
            a = pop();
            b = pop();
            push(a * b);
        } else {
            push(atoi(s));
        }
    }

    printf("%d\n", pop());

    return 0;
}