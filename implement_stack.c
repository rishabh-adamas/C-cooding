#include <stdio.h>
int a[10] = {};
int top = -1;
void push(int val) {
    if (top < 10) {
        top++;
        a[top] = val;
    }
}

void pop() {
    if(top >= 0) {
        printf("%d\n", a[top]);
        top--;
    } else {
        printf("stack is empty");
    }
}

void main(){
    push(10);
    push(2);
    pop();
    pop();
    pop();
}
