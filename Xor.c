// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int low,high,first,second;
   scanf("%d %d",&low,&high);
   switch(high%4){
       case 0:first=high;
                break;
      case 1:first=1;
                break;
    case 2:first=high+1;
                break;
    case 3:first=0;
                break;
                
   }
   switch((low-1)%4){
       case 0:second=high;
                break;
      case 1:second=1;
                break;
    case 2:second=high+1;
                break;
    case 3:second=0;
                break;
                
   }
   printf("%d",(first^second));

    return 0;
}