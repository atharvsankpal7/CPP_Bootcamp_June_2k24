#include <stdio.h>
int stack[5];
int tos = -1;
void push(int value)
{

    if (tos == 4)
    {
        printf("Stack overflow\n");
    }
    else
    {
        tos++;
        stack[tos] = value;
        printf("%d is pushed\n", value);
    }
    printf("TOS == %d\n", tos);
}
void pop()
{
    if (tos == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("%d is popped\n", stack[tos]);
        tos--;
    }
    printf("TOS == %d\n", tos);
}

int main()
{
    pop();
    push(30);
    push(20);
    push(10);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    push(17);
    pop();
    push(19);
    push(21);
    push(22);
    push(23);
    push(24);
    push(25);
    push(26);


    return 0;
}