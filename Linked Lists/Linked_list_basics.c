#include<stdio.h>

 struct NODE { int data;
               struct NODE *next; };
typedef struct NODE node;
node *head=NULL;

void insertFirst(int ele)
     {
         node *temp = ( node *) malloc( sizeof(node));
                if(temp==NULL)
                {
                    printf("\nMemory allocation fails");
                    return;
                }

                temp->data=ele;
                temp->next=head;
                head=temp;
               /* if (head==NULL)
                    head=temp;
                else
                    {
                        temp->next=head;
                        head=temp;
                    }*/

      }

void insertLast(int ele)
     {
         node *temp = ( node *) malloc( sizeof(node));
        if(temp==NULL)
            {
                printf("\nMemory allocation fails");
                return;
            }

        temp->data=ele;
        temp->next=NULL;
        if(head==NULL)
            {
                head=temp;
                return;
            }
        node *cur=head;
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
         cur->next=temp;
      }


   void create()
       { int x;
         char ans;
           do
            { printf("\nEnter the NODE data:");
              scanf("%d",&x);
              insertFirst(x);
              printf("\nDo you want to continue? Y/N\t");
              scanf(" %c",&ans);// leave a space between " and %c otherwise it will not work
            } while(ans=='Y' || ans=='y');

        }




void display(){
                if(head==NULL)
                {
                    printf("\nEmpty List");
                    return;
                }

                node *temp=head;
                while(temp->next!=NULL)
                    {
                        printf("%d\t",temp->data);
                        temp=temp->next;
                    }
                  printf("%d",temp->data);// last element to be printed
                }

  void delete( int ele)
  {   if(head==NULL)
      {
          printf("\nEmpty List");
          return;
      }
      node *cur,*pre;
      cur=head;
      pre=NULL;
      while(cur->data!=ele)
      {
          pre=cur;
          cur=cur->next;
      }
      if(cur==NULL)
           printf("\nElement Not Found");
      else
          {
            if(pre==NULL)// if the data is at first node
               {
                 head=cur->next;
                 cur->next  =NULL;
                 free(cur);
               }
            else
                {
                  pre->next=cur->next;
                  cur->next=NULL;
                  free(cur);
                }
          }

  }




int main()
{
    create();
    printf("\nCreated List: \n");
    display();
    insertLast(100);
    printf("\nList after insertLast:\n ");
    display();
    int ele;
    printf("\nEnter element to be deleted  : ");
    scanf("%d",&ele);
    delete(ele);
    printf("\nList after deletion: \n");
    display();


}

