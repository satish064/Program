#include<stdio.h>
#define SIZE 10
int stack[SIZE];
int top = -1;
void pop();
void push();
int isFull();
int isEmpty();
void traversal();
int main()
{
    int ch;
    while(1)
    {
        printf("Press 1 for Push data : \n");
        printf("Press 2 for pop data : \n");
        printf("press 3 for traversal data : \n");
        printf("Press 4 for exit\n");
        printf("Enter a choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1 :
         push();
        break;
        case 2 :
        pop();
        break;
        case 3 :
        traversal();
        break;
        case 4 :
        printf("Thank You");
        break;
        default:
        printf("Invalid input");
            break;
        }
    }return 0;
}
int isFull()
{
    if(top == SIZE - 1)
    return 1;
    else return 0;
}
int isEmpty()
{
    if(top == -1)
    return 1;
    else
    return 0;
}
void pop()
{
    if(isEmpty())
    printf("Stack is Empty\n");
    else{
    printf("Pop data is=%d\n",stack[top]);
    top--;
    } 
}
void push()
{
    if(isFull())
    {
        printf("Stack is full\n");
    }
    else 
    {
        top++;
        printf("Enter a data:\n");
        scanf("%d",&stack[top]);
        printf("Data is entered\n");
    }
}
void traversal()
{
    if(isEmpty())
    printf("stack is empty\n");
    else
    {
        for(int i=top;i>=0;i--)
        printf("%d\t\n",stack[i]);
    }
}