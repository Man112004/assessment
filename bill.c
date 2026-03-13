#include <stdio.h>

int menu(int n){
    switch(n){  
        case 1 : 
        printf("You have selected Pizza\n");
        break;

        case 2 : 
        printf("You have selected Burger\n");
        break;

        case 3 : 
        printf("You have selected Dosa\n");
        break;

        case 4 : 
        printf("You have selected Idli\n");
        break; 

        default:
        printf("This item is not available\n");
    }
    return 0;
}

int payment(int q, int n){
    int price = 0;
    int total;

    if(n==1) price = 180;
    else if(n==2) price = 100;
    else if(n==3) price = 130;
    else if(n==4) price = 50;

    total = price * q;

    printf("Amount = %d rs\n", total);
    printf("Total amount is = %d rs\n", total);

    return total;
}

int main(){

    int n,q;
    char more;

    do{

    printf("\n----------Menu----------\n");
    printf("1.Pizza   Price = 180rs/pcs\n");
    printf("2.Burger  Price = 100rs/pcs\n");
    printf("3.Dosa    Price = 130rs/pcs\n");
    printf("4.Idli    Price = 50rs/pcs\n");

    printf("Enter the item number : ");
    scanf("%d",&n);

    menu(n);

    printf("Enter the quantity : ");
    scanf("%d",&q);

    payment(q,n);

    printf("Do you want to place more order? (y/n): ");
    scanf(" %c",&more);

    }while(more=='y' || more=='Y');

    printf("\nThank you for your order!\n");

    return 0;
}