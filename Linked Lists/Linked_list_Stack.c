#include<stdio.h>

 struct NODE { int data;
               struct NODE *next; };
typedef struct NODE node;
node *top=NULL;


void push(int ele)
     {
         node *temp = ( node *) malloc( sizeof(node));
                if(temp==NULL)
                {
                    printf("\nMemory allocation fails");
                    return;
                }

                temp->data=ele;
                temp->next=NULL;
                temp->next=top;
                top=temp;
                temp=NULL;
     }
void pop()
{
    if(top==NULL)
      {
          printf("\nEmpty Stack");
          return;
      }
      node *temp=top;
      if(temp->next==NULL)
      {
        printf("\nPopped elemnt :  %d",temp->data);
        top=NULL;
        free(temp);
      }
      else
      {
          printf("\nPopped elemnt :  %d",temp->data);
          top=temp->next;
          temp->next=NULL;
          free(temp);
      }
}

int main()
{
    int x, selection;
    char ans;
        do
            { printf("\n 1. PUSH \t 2. POP");
              printf("\nSelect operation\t");
              scanf("%d",&selection);
              switch(selection)
              {
                case 1:
                   printf("\nEnter the element to be pushed  : ");
                   scanf("%d",&x);
                   push(x);
                   break;
                case 2:

                    pop();


              }

              printf("\nDo you want to continue? Y/N\t");
              scanf(" %c",&ans);// leave a space between " and %c otherwise it will not work
            } while(ans=='Y' || ans=='y');

}
