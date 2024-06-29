#include<stdio.h>
 
int main(){
    
    int w, values[5] = {1, 2, 3, 4, 5}, count = 0, temp, i;
    
    
    scanf("%d", &w);
    temp = w;
    
   
    for (i = 4; i >= 0; i--) {
        count += temp / values[i];  
        temp = temp % values[i];    
    }
 
    printf("%d\n", count);  
 
    return 0;
}