#include<stdio.h>
int main()
{
    int a[50],n,x,m;
    int *firstPtr, *lastPtr, *midPtr;
    printf("\n Enter size of the Array:");
    scanf("%d",&n);
    printf("\n Enter Array Elements in sorted order:\n");
    for( int i=0;i<n;i++)
     {scanf("%d",&a[i]);}

    printf("\n Enter Array Element to find:");
    scanf("%d",&x);

     firstPtr=a;
     lastPtr=a+n-1; // another way &a[n-1];

     while(firstPtr<=lastPtr)
     {
         m=lastPtr-firstPtr;

         midPtr=firstPtr+(m/2);

         if(*midPtr==x)
         {
           printf("\n Element Found");
           return 0;
         }

        else if(*midPtr<x)
         firstPtr=midPtr+1;
        else
         lastPtr=midPtr-1;
     }
     printf("Element Not Found");
}
