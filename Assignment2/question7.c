// Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main(){
    int x, count=0;
    int result = 0;
    printf("Enter a number:-");
    scanf("%d",&x);
    // int result = 0;
    while(result == 0 && x!=0){
        result=x&1;
        count++;
        x = x>>1;

    }
    printf("%d",count);
    return 0;
}

// ***Another solution by Sir***
// int x, result = 0, count=0;
// printf("Enter a number:-");
// scanf("%d",&x);
// while(x!=0){
//     result = x&1;
//     count++;
//     if(result==1){
//         printf("%d \n",count);
//         break;
//     }
//     else{
//         x = x>>1;
//     }
// }

