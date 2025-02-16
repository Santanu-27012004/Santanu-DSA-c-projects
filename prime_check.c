#include <stdio.h>

int main() {
    
    int num;
    int prime = 1;

    printf("Enter a number : ");
    scanf("%d", &num);
    for (int i = 2; i < num-1; i++)
    {
        if(num % i == 0){
            prime = 0;
        }
    }
    if(prime == 1){
        printf("%d is a prime number",num);
    }
    else{
        printf("%d isn't a prime number",num);

    }
    
    
    
    return 0;
}