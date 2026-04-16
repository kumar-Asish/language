// #include <stdio.h>
// #include <stdlib.h>
// struct stack
// {
//     int data;
//     struct stack *next;
// };
// struct stack *top = NULL;

// void push(int x)
// {
//     struct stack *temp = (struct stack *)malloc(sizeof(struct stack));
//     if (temp == NULL)
//     {
//         printf("overflow\n");
//         return;
//     }
//     temp->data = x;
//     temp->next = NULL;

//     if (top == NULL)
//     {
//         top = temp;
//     }
//     else
//     {
//         temp->next = top;
//         top = temp;
//     }
// }

// void fist_element()
// {
//     struct stack *d = top;
//     if (d == NULL)
//     {
//         printf("there is no element\n");
//         return;
//     }
//     printf("the top element in the stack is:%d\n", d->data);
// }
// int pop()
// {
//     struct stack *temp = NULL;
//     if (top == NULL)
//     {
//         printf("underflow\n");
//         return 999;
//     }
//     int n = top->data;
//     temp = top;
//     top = temp->next;
//     free(temp);
//     return n;
// }

// void display()
// {
//     struct stack *tem = top;
//     if (tem == NULL)
//     {
//         printf("Stack is empty\n");
//         return;
//     }
//     while (tem != NULL)
//     {
//         printf("%d ", tem->data);
//         tem = tem->next;
//     }
//     printf("\n");
// }
// int main()
// {
//     int ch, element;
//     while (1)
//     {
//         printf("Enter 1 to push element in stack\n");
//         printf("Enter 2 to pop element from the stack\n");
//         printf("Enter 3 to display the top element\n");
//         printf("Enter 4 to display elements\n");
//         printf("Enter 5 to exit\n");
//         printf("enter ur choice\t");
//         scanf("%d", &ch);

//         switch (ch)
//         {
//         case 1:
//             printf("enter the element:\n");
//             scanf("%d", &element);
//             push(element);
//             break;

//         case 2:
//             element = pop();
//             if (element != 999)
//             {
//                 printf("Popped element: %d\n", element);
//             }
//             break;

//         case 3:
//             fist_element();
//             break;

//         case 4:
//             display();
//             break;

//         case 5:
//             exit(0);

//         default:
//             printf("Invalid choice\n");
//         }
//     }
// }
#include <stdio.h>

#include <stdlib.h>

#define SIZE 4

int top = -1, inp_array[SIZE];
void push();
void pop();
void show();

int main()
{
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push()
{
    int x;

    if (top == SIZE - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        inp_array[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", inp_array[top]);
        top = top - 1;
    }
}

void show()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", inp_array[i]);
    }
}