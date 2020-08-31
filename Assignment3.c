#include <stdio.h>  

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubblesort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

int main()
{
    int n,i;
    printf("Enter the no. of array element");
    scanf("%d",&n);
    int num[n];
    for (i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    bubblesort(num, n);
    for (i=0;i<n;i++){
        printf("%d",num[i]);
        printf(" ");
    }
    return 0;
}
