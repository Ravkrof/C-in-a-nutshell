#include<stdio.h>

 struct NODE { int data;
               struct NODE *next; };
typedef struct NODE node;
node *front=NULL;
node *rear=NULL;

void insert(int ele)
     {
         node *temp = ( node *) malloc( sizeof(node));
        if(temp==NULL)
            {
                printf("\nMemory allocation fails");
                return;
            }

        temp->data=ele;
        temp->next=NULL;
        if(rear==NULL)
            {
                front=temp;
                rear=temp;
                return;
            }

         rear->next=temp;
         rear=temp;
      }

void delete()
  {   if(front==NULL)
      {
          printf("\nEmpty Queue");
          return;
      }
      if(front==rear)// if only one node
      {   printf("\n Dequeued element:   %d",(front)->data);
          free(front);
          front=NULL;
          rear=NULL;
          return;
      }
      node *temp;
       printf("\n Dequeued element:   %d",(front)->data);
      temp=front;
      front=front->next;
      temp->next=NULL;
      free(temp);
  }

void display()
{
                if(front==NULL)
                {
                    printf("\nEmpty Queue");
                    return;
                }

                node *temp=front;
                while(temp!=rear)
                    {
                        printf("%d\t",temp->data);
                        temp=temp->next;
                    }
                 printf("%d",temp->data);
    }

int main()
{
    int x, selection;
    char ans;
        do
            { printf("\n 1. Enqueue \t 2. Dequeue \t 3. Display");
              printf("\nSelect operation\t");
              scanf("%d",&selection);
              switch(selection)
              {
                case 1:
                   printf("\nEnter the element to be queued  : ");
                   scanf("%d",&x);
                   insert(x);
                   break;
                case 2:
                    delete();
                    break;
                case 3:
                    display();

              }

              printf("\nDo you want to continue? Y/N\t");
              scanf(" %c",&ans);// leave a space between " and %c otherwise it will not work
            } while(ans=='Y' || ans=='y');

}
