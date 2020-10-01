#include<stdio.h>
int main()
{
    int a,b,sum=0,copyNum,i,j;
    printf("Please enter 2 integer :");
    scanf("%d %d",&a,&b);
    for(i = a ; i <= b ; i++){
        copyNum = i;
        while(i != 0){
            j = i % 10;
            sum = sum + (j*j*j);
            i = i / 10;
        }
        if(copyNum == sum){
            printf("%d is an Armstrong number\n",copyNum);
        }
        sum = 0;
        i = copyNum;
    }
   return 0;
}