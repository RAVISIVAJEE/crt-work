// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    char username[100],password[100];
    int chances=3,login=0;
    while(!login && chances){
    printf("Enter user name:\n");
    scanf("%s",username);
    
    printf("\nEnter password:\n");
    scanf("%s",password);  
    if(strcmp(username,"RAVI_SIVAJEE")==0){
        
        if(strcmp(password,"sivajeee")==0){
        printf("\nLogin is successful");
        login=1;
    

        
    }
    else{
        chances=chances-1;
        if(chances==0){
            printf("Too many wrong passwords.Your account has been blocked");
        }
        else{
          printf("\nIncorrect password You have only %d chances left\n ",chances);  
        }
      
    }
        
    }
    else{
        printf("Username is wrong\n");
    }
    
    }
    

    return 0;
}