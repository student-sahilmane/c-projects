#include<stdio.h>
#include<math.h>

double division(double, double);
double modulus(int, int);
void print_menu();

int main() {
    int choice;
    double first, second, result;
    while(1){
    print_menu();
    scanf("%d", &choice);
    if (choice == 7){
        break;
    }

    if(choice < 1 || choice > 7){
        fprintf(stderr,"invalid menu choice.");
        continue;
    }


    printf("\nplease enter the first number: ");
    scanf("%lf", &first);
    printf("\nlease enter the second number: ");
    scanf("%lf", &second);

    switch(choice)
    {
        
        case 1: // addition
        result = first + second;
        break;
        case 2: // subtraction
        result = first - second;
        break;
        case 3:// multiplication
        result = first * second;
        break;
        case 4:// divide
        result = division(first, second);
        break;
        case 5://modulas
        result = modulus(first, second);
        break;
        case 6: // power
        result = pow(first, second);
        break;

    }
    if(!isnan(result)){
     printf("\nresult of operation is: %.2f", result);
    }
    
    };
}

double division(double a, double b){
if(b == 0) {
    fprintf(stderr, "invalid argument for Division");
    return NAN;
}else{
    return a / b;
}
}


double modulus (int a, int b){
if(b == 0) {
    fprintf(stderr, "invalid argument for modulus");
    return NAN;
}else{
    return a % b;
}
}


void print_menu () {
    printf("\n--------------------------------------------");
    printf("\nWelcome to simple calculator\n");
    printf("\nChoose one of the following options \n");
    printf("1. Addition \n");
    printf("2. Subtract \n");
    printf("3. Multiply\n");
    printf("4. divide \n");
    printf("5. modulus \n");
    printf("6. Power \n");
    printf("7. Exit \n");
    printf("Now enter your choice \n ");
}