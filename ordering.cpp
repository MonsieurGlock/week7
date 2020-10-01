#include <stdio.h>
#include <math.h>
float *enterNumber(int n,float *num);
void findMedian(void);
void findMean(void);
int main(){
    int op;
    printf("** Welcome to Mean , Median and Mode calculator **\nFor Mean please enter 1 / For Median please enter 2 : ");
    scanf("%d",&op);
    if(op == 1){
        findMean();
    }
    if(op == 2){
        findMedian();
    }
    return 0;
}

void findMean(){
    printf("How many numbers you are gonna enter : ");
    int n,i;
    scanf("%d",&n);
    float num[n],*a,sum=0;
    a = enterNumber(n,num);
    for(i=0 ; i < n ; i++){
        sum = sum + a[i];
    }
    sum = sum/2;
    printf("%.2f",sum);
    
}
float *enterNumber(int n,float *num){
    printf("Enter the numbers one by one : ");
    int i;
    for(i=0 ; i <n ; i++){
        scanf("%f",&num[i]);
    }
    return num;
}
void findMedian(void){
    printf("How many numbers you are gonna enter : ");
    int n,i,j;
    scanf("%d",&n);
    float num[n],*l,sum=0,a;
    l = enterNumber(n,num);
    for(i=0 ; i < n ; i++){
        for(j = 0  ; j < n-i-1 ; j++ ){
            if(l[j] > l[j+1]){
                a = l[j];
                l[j] = l[j+1];
                l[j+1] = a;
            }
        }
    }
    for(i=0 ; i < n ; i++){
        printf("%.2f ",l[i]);
    }
    printf("\n");
    if(n%2 == 0){
        a = l[n/2] + l[(n/2)-1];
        a = a/2;
        printf("Median is : %.2f",a);
    }
    if(n%2 != 0){
        a = l[(n/2)];
        printf("Median is : %.2f",a);
    }

}



