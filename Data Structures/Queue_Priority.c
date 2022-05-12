#include<stdio.h>

#define Maxsize 5
   int arr[Maxsize];
   int Front=-1;
   int Rear=-1;
    int IsEmpty(){ if(Front==-1 && Rear==-1) return 1;
                   return 0;}
    int IsFull(){if( Rear==Maxsize-1)return 1;
                return 0;}
    void Insert(int item){
        if (IsFull()) {printf("Queue Overflow");}
        else if( IsEmpty()) { Front=0;Rear=0; arr[Rear]=item;}
        else{ //find the appropriate position
                int i,j;
                for(i=Front;i<=Rear;i++)
                {
                    if(arr[i]>item)
                        break; // found the location
                }
            //shifting the elements
            for(j=Rear; j>=i; j--)
                arr[j+1]=arr[j];

            arr[i]=item;
             Rear++;
        }
    }
    int Delete(){ int x;
        if (IsEmpty()){printf("Queue Underflow"); return NULL;}
        if(Front==Rear){x=arr[Front]; Front=Rear=-1; return x;}  //only one item was there

         x=arr[Front];
         Front++;
                return x;
    }

void display()
{
    if(IsEmpty()){printf("Queue Underflow"); return NULL;}
    int i;
    for (i=Front; i<=Rear; i++)
        printf("\t%d",arr[i]);
}

int main()
{

// though we are adding 10 after 20 & 30 but due to priority Q it will add elements in the sorted order

    Insert(20);
    Insert(30);
    Insert(10);
    Insert(40);
    Insert(50);
    Insert(60);
    printf("\n The QUEUE is : ");
    display();
   printf("\nDeleted element= %d",Delete());
    printf("\nDeleted element= %d",Delete());
    printf("\nDeleted element= %d",Delete());
     printf("\n The QUEUE after three deletion : ");
    display();
}

