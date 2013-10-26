#include <stdio.h>
#include <math.h>
#include <string.h>

int task_6(int a); 

void task_7(int from, int to); 
int is_prime(int a); 
int square_root(int a); 

void task_8(int num_lines); 

void task_9(int from, int to); 

int factor_of(int a, int b); 

void task_10(void); 

void task_11(int num); 

int main(void); 


// Task 6
int task_6(int a) {
    return a * 5; 
}


// Task 7
void task_7(int from, int to){
    int i;
    printf("Evaluating numbers from %d to %d\n", from,to); 
    for(i=from; i <= to; i++){
        
        if(i%2) {
            printf("%d is odd ",i); 
        }
        else{
            printf("%d is even",i); 
        }
        int num = 5; 

        if(factor_of(i, num)) {
            printf("and %d is a prime factor\n", num); 
        }
        else{
            printf(" and %d is not a prime factor\n", num); 
        }
    }
}
// Returns 1 if a is a factor of b
//
int factor_of(int a, int b) {
    if(a % b){
        return 0;
    }
    else{
        return 1;
    }
}

int is_prime(int a) {
    
    int i;
    int square_root_of_a = square_root(a);  
    
    for(i = 2; i <= square_root_of_a;  i++){
        if(a % i == 0) {
            return 0; 
        }
    }

    return 1; 

}

int square_root(int a) {
    return (int) lround(sqrt(a)); 
}

// 



// Task 8
void task_8(int num_lines){
    int i; 

    for(i = 1; i <= num_lines; i++){
        
        int j; 
        for(j = 1; j <= i; j++){
            printf("*");
        }

        printf("\n"); 
    }
}

void task_9(int from, int to) {

    int c; 
    float constant = 1.8; 

    for(c = 0; c < to; c++){
        float f = (c * constant) + 32; 
        printf("%d celcius is %f\n", c,f);
    }
}

void task_10(void) {
    
    int buflen = 20; 

    char str[buflen];

    printf("Enter a number to print backwards: "); 
    scanf("%s", str); 

    int characters_read = (int) strlen(str); 
    int i; 

    printf("Backwards: "); 
    
    for(i = characters_read; i >= 0 ; i--){
        printf("%c", str[i]); 
    }
    
    printf("\n");

}

void task_11(int num) {
    printf("The binary logarithm of %d is ", num);
    
    int i = 0; 
    while(num > 1) {
        i++; 
        num = num >> 1;
    }

    printf("%d\n",i); 
}


int main(void) {
    printf("Mandatory Assignment 2, INF-1100 Fall 2013\n"); 

    printf("\nTask 6) \t 5 = %d\n", task_6(5)); 
    
    printf("\nTask 7) \t"); 

    int from = 1;
    int to = 10; 
    task_7(from, to); 

    int num_lines = 5; 
    printf("\nTask 8) \t Printing a triangle with %d lines \n", num_lines);     
    task_8(num_lines); 

    
    from = 0; 
    to = 10;
    
    printf("\nTask 9) \n"); 
    task_9(from, to); 

    printf("\nTask 10) \n"); 
    task_10(); 

    int num = 39;
    printf("\nTask 11) \n"); 
    task_11(num); 


    return 0; 
}

