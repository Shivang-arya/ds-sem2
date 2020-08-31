#include <stdio.h>
float average(int num[],int n){
    int i;
    float sum=0;
    for (i=0;i<n;i++){
        sum=sum+num[i];
    }
    return sum/n;
}


int main()
{
    int i,num[10];
    float avg;
    int n;
    printf("Enter the number of array element");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    avg=average(num,n);
    printf("the avg of number is");
    printf("%.2f",avg);

    return 0;
}
