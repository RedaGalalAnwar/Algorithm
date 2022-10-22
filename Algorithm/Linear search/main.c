#include <stdio.h>
#include <stdlib.h>
#define max 10
int main()
{
int arr[max]={2,5,9,15,20,30,1,27,13,75};
int item =1;
for(int i=0;i<max;i++)
{
    if(arr[i]==item)
    {
        printf("found the element %d at the index %d \n",item , i);
    }

}
}
