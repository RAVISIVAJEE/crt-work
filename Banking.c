// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

int main() {
    int option,money=1000,deposit;
     while(1){
    printf("\nSelect The following Options:");
    printf("\n1.Check Balance\n2.Deposit Money \n3.Withdraw Money\n4.Exit\n");
    printf("Select the option:");
    scanf("%d",&option);
    switch(option){
        
        case 1:printf("\nAvailble balance is %d",money);
                break;
        case 2:printf("\nEnter money to deposit");
                scanf("%d",&deposit);
                money=money+deposit;
                break;
        case 3: printf("\nEnter money to withdraw");
                scanf("%d",&deposit);
                
                money=money-deposit;
                if(money<0){
                    printf("Sorry InSufficient Balance");
                    money=money+deposit;
                    
                }
                break;
        case 4:exit(0);
        default:printf("\nselect any from the availble options");
    }
    system("cls");
    
    
}

    return 0;
}