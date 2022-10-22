#include <stdio.h>
#include <stdlib.h>

int main()
{

 int first , last , middle , n , search ;
int arr[100];


printf("enter the number of elements : ");
scanf("%d", &n);

printf("\n enter the %d elements \n", n);
for(int i=0;i<n;i++)
{
    scanf("%d", &arr[i]);
}


printf("\n enter the value you want to find \n ");
scanf("%d",&search );


first=0;
last=n-1;
middle=(first+last)/2;


while(first <= last )
{
    if(arr[middle]<search)
        first=middle+1;

    else if(arr[middle]==search )
    {
        printf("\n we found the element %d at the location %d \n", search , middle+1);
        break;
    }

    else
        last = middle -1;
        middle =(first + last )/2;

}
 if(first >last )
 {
     printf("\n not found \n");
 }

return 0;
}
