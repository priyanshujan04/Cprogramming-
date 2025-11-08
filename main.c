//program to print the fabonacci series.

/*
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;  // First two terms are 0 and 1
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}*/


// program to check whether the enter number is prine or not.
/*
#include<stdio.h>

int isPrime(int n){

    for(int i = 2;i<=n/2;i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    if(isPrime(num)){
        printf("%d it is a prime number",num);
    }else{
        printf("%d Not a prime number",num);
    }

    
    printf("\n");

    return 0;
}*/


// program to find the reverse of a number using a function.
/*
#include<stdio.h>

int reverseNumber(int n){

    int result = 0;

    while(n){
        int digit = n % 10;
        result = result * 10 + digit;
        // n = n / 10
        n /= 10;
    }

    return result;

}

int main(){

    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Reversed Number: %d",reverseNumber(num));

    printf("\n");

    return 0;
}*/