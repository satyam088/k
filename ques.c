#include <stdio.h>
#include <stdlib.h>
//1
// given an array of integers find the min destance btw two numbers;
// example -> {3,5,4,2,6,5,6,8,3,2}
// find  min distance 6 and 3;
//2 
//  wave array i/p -> {3,6,5,10,,7,30}
//  o/p -> 1st high 2nd low , 3rd high , 4th low and so on.
int main()
{
    int x1,x2,y1,y2,x,y;
    int flag1 =0,flag2 =0,flag3 =0,flag4 =0;
    int ar[]={3,5,4,2,6,5,6,8,3,2};
    printf("input the two numbers \n");
    scanf("%i%i",&x,&y);
    for(int i =0 ;i<10;i++){
        if(flag1 ==0){
            if((ar[i]==x)){
                x1 =i;
                flag1 = 1;
            }
        }
        if(flag2 ==0){
            if((ar[i]==x)){
                x2 =i;
                flag2 = 1;
            }
        }
        if(flag3 ==0){
            if((ar[i]==y)){
                y1 =i;
                flag3 = 1;
            }
        }
        if(flag4 ==0){
            if((ar[i]==y)){
                y2 =i;
                flag4 = 1;
            }
        }
        
    }
    int min =  abs(x1-y1) ;
    if(min > abs(x1-y2)){
        min = abs(x1-y2);
    }else  if(min > abs(x2-y1)){
        min = abs(x2-y1);
    }else  if(min > abs(x2-y2)){
        min = abs(x2-y2);
    }
    
    printf( "%i",min);
    
    return 0;
}
