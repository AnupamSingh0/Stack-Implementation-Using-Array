#include <stdio.h>

int stack[10];
int top=-1;
int size=5;

void push(int element)
{
    if(top==size-1)
    {
        printf("Over-Flow\n");
        return;
    }
    else{
    top++;
    stack[top]=element;
    }
};
void pop()
{
    if(top==-1)
    {
        printf("Under-Flow\n");
        return;
    }
    else
    {
         printf("Element %d is Deleted Successfully\n", stack[top]);
        top=top-1;
    }
};
void display()
{
    for(int i=0; i<=top;i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
};

int main()
{
    pop();
    push(1);
    push(2);
    push(3);
    display();
    pop();
    display();
    push(4);
    display();
    push(8);
    display();
    push(9);
    display();
    push(12);
    return 0;
}