#include <stdio.h>

void main() {
    char name[50]; 
    int age;
    float salary;
    
    printf("Enter your NAME: ");
    scanf("%s", name); 
    printf("Enter your AGE: ");
    scanf("%d", &age); 

    printf("Enter your SALARY: ");
    scanf("%f", &salary);  
    
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
}

    
