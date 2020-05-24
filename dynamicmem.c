#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int main()
{
    int i;
//    int *arr = (int *) calloc (SIZE*sizeof(int));
    // For calloc
    int *arr = (int *) calloc (SIZE,sizeof(int));

    for (i=0;i<5;i++)
    scanf ("%d",&arr[i]);

    for (i=0;i<5;i++)
    printf ("%d\n",*(arr+i));

    //free(arr);

    for (i=0;i<5;i++)
    printf ("\n%d",arr[i]);


    return 0;
}
