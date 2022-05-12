// integer stack
#include<stdio.h>
# define n 5

 int STACK[n];
 int top1=-1;
 int top2=n;
  int isEmpty1()
 {
         if(top1==-1)
            return 1;
        return 0;
 }
 int isEmpty2()
 {
         if(top2==n)
            return 1;
        return 0;
 }

 int isFull()
 {
         if(top1+1==top2  ||  top2-1==top1)
            return 1;
        return 0;
 }

 void push1(int ele)
{
    if(isFull())
    {
        printf("\n Stack is FULL");
        return;
    }
    top1++;//s.top=s.top+1;
    STACK[top1]=ele; // s.a[++(s.top)]=ele;
}

void push2(int ele)
{
    if(isFull())
    {
        printf("\n Stack is FULL");
        return;
    }
    top2--;//s.top=s.top+1;
    STACK[top2]=ele; // s.a[++(s.top)]=ele;
}

void pop1()
{
    if(isEmpty1())
    {
        printf("\n Stack1 is Empty");
        return;
    }
    printf("\nDeleted item from stack1:%d",STACK[top1]);
    top1--;
}

void pop2()
{
    if(isEmpty2())
    {
        printf("\n Stack2 is Empty");
        return;
    }
    printf("\nDeleted item from stack2:%d",STACK[top2]);
    top2++;
}


int main( )
{


    push1(10);
    push1(20);
    push1(30);
    push2(40);
    push2(50);
    push2(60);

    pop1();
    pop2();
    pop1();
    pop2();
    pop1();
    pop2();
    pop1();
    pop2();

}

