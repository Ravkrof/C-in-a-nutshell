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
        else{
            Rear++;
            arr[Rear]=item;
        }
    }
    int Delete(){ int x;
        if (IsEmpty()){printf("Queue Underflow"); return NULL;}
        if(Front==Rear){x=arr[Front]; Front=Rear=-1; return x;}  //only one item was there

         x=arr[Front];
         Front++;
                return x;
    }



int main()
{


   Insert(10);
   Insert(20);
    Insert(30);
    Insert(40);
    Insert(50);
    Insert(60);
    printf("\n%d",Delete());
    printf("\n%d",Delete());
    printf("\n%d",Delete());
}

