#include <stdio.h>
int main(){
    int i,x;
    printf("enter x: ");
    scanf("%d",&x);
    for(i=2;i<x;i++){
        if((x%i)==0){
            printf("not a prime number");
            break;}
        }
    if(x==i){
            printf("prime number");
        }
    
    return 0;
}
