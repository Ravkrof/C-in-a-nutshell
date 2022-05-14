//addition of polynomials LL
#include<stdio.h>

 struct NODE { int coeff;
               int exp;
               struct NODE *next;};
typedef struct NODE node;



node* insertLast(node *head,int c, int e)
     {
         node *temp = ( node *) malloc( sizeof(node));
        if(temp==NULL)
            {
                printf("\nMemory allocation fails");
                return;
            }

        temp->coeff=c;
        temp->exp=e;
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
         temp=NULL;
         return head;
      }


   node* create(node *head)
       { int c,e;
         char ans;
           do
            { printf("\nEnter the NODE data [Coefficient & Exponenet]:");
              scanf("%d%d",&c,&e);
              head=insertLast(head,c,e);
              printf("\nDo you want to continue? Y/N\t");
              scanf(" %c",&ans);// leave a space between " and %c otherwise it will not work
            } while(ans=='Y' || ans=='y');
         return head;
        }




void display(node *head){
                if(head==NULL)
                {
                    printf("\nEmpty List");
                    return;
                }

                node *temp=head;
                while(temp!=NULL)
                    {
                        printf("%d  %d\t",temp->coeff,temp->exp);
                        temp=temp->next;
                    }

                }




node* merge(node *h1, node *h2)
{

 node *r;
 if(h1==NULL) { r=h2; return r;}
 if(h2==NULL) { r=h1; return r;}

while(h1!=NULL && h2!=NULL){

        if(h1->exp < h2->exp)
        {
                  r=insertLast(r,h1->coeff,h1->exp);
                    h1=h1->next;
        }
        else if(h1->exp > h2->exp)
        {
                r=insertLast(r,h2->coeff,h2->exp);
                    h2=h2->next;

        }
        else
        {
           r=insertLast(r,h1->coeff+h2->coeff,h1->exp);
                    h1=h1->next;
                    h2=h2->next;

        }
    }
    while(h1!=NULL){
        r=insertLast(r,h1->coeff,h1->exp);
        h1=h1->next;
    }
    while(h2!=NULL){
              r=insertLast(r,h2->coeff,h2->exp);
              h2=h2->next;
    }

    return r;
}

int main()
{
    node *head1=NULL;
    node *head2=NULL;
    node *r;
    printf("\nCreating the first LinkedList: \n");
    head1=create(head1);
    printf("\nCreating the second LinkedList: \n");
    head2=create(head2);

   printf("\nFirstPolynomial::\n ");
    display(head1);
    printf("\nSercondPolynomial::\n ");
    display(head2);
    r=merge(head1,head2);
    printf("\nThe result of polynomial addition: ");
    display(r);


}
