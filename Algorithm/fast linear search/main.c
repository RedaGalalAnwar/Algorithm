#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[]={1,3,5,7,9};
int n=5, item=5, j=0;
while (j<n)
{
    if(arr[j]==item)
    {
        break;
    }
    j=j+1;
}
printf ("we found element %d at the position %d \n", item,j+1);
}
