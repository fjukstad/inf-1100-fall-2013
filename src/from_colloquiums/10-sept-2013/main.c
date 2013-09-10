#include <stdio.h>

// Will test if an integer is even or odd. 
// Returns 1 if odd and 0 if even. Will also print result to screen. 
int is_odd(int num){

    // Odd, not divisible by two
    if(num % 2) {
        printf("%d is odd\n", num); 
        return 1; 
    }
    // Even, divisible by two
    else {
        printf("%d is even\n", num);
        return 0; 
    }
}


// Will print which day the integer day corresponds to.  
void print_day(int day){
    
    switch(day){
        case 1:
            printf("Day = %d ==> It's Monday! \n", day);
            break; 
        case 2: 
            printf("Day = %d ==> It's Tuesday! \n", day);
           
            break; 
        
        default:
            printf("Day = %d ==> Don't know which day it is... \n", day); 
    }
}


int main(void) {

    int age = 23; 
    
    printf("Bjørn Fjukstad is %d years old \n", age);
    
    int day;
    int days_in_a_week = 7;
    
    // Fjern /* og */ for å teste ut koden
    // gjennom bruk av en for-løkke. 

    /*
    for(day = 1; day <= days_in_a_week; day++){
        print_day(day); 
    }    
    */

    day = 1; 
    while(day <= days_in_a_week){
        print_day(day); 
        day++;     // day = day + 1 , day += 1 is equivalent
    }
    
    int number; 
    int max_number = 50; 
    for(number = 1; number <= max_number; number++){
        is_odd(number);
    }
    

    return 0;
}
