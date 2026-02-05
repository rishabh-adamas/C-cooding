#include <stdio.h>
#include<stdbool.h>
int main() {
    int x;
    bool flag = true;
    printf("enter any number: ");
    scanf("%d",&x);
    for(int i=2;i<x;i++){
        if ((x%i) ==0){
            flag = false;
            printf("%d is not a prime number",x);
            break;
        }
    }
    if(flag){
        printf("%d is a prime number",x);
    }
    return 0;
}
