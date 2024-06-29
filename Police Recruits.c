#include<stdio.h>
#include<stdlib.h>
int main(){
    
    int number,*values,i,positive,negative=0;
    scanf("%d",&number);
    values = (int *)malloc(number * sizeof(int));
    
    for(i=0;i<number;i++){
        scanf("%d",&values[i]);
    }
    positive=0;
    for(i=0;i<number;i++){
        if(values[i]==-1){
            if(positive){
                positive=positive-1;
            }
            else{
                negative=negative+1;
            }
        }
        else{
            positive=positive+values[i];
        }
    }
    
printf("%d",negative);
 
    return 0;
}
