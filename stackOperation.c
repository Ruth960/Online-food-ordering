#include <stdio.h>

#define size 100 // Maximum data that can be pushed to the stack

typedef struct 
{
    /* data */
    int data[size];
    int top;
}Stack;

//Initializing the stack
void init(Stack*stack)
{
    stack->top == -1; // the stack is empty at start

}

// check is stack is empty
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

//check if stack is full
int isFull( Stack *stack) {
    return stack->top == size-1;
}

//adding elements to the stack
void push(Stack *stack, int element) {
    if(isFull(stack)) {     // Checks if the stack is full
        printf("Stack overflow");
        return;
    }
    else {
        stack->top++;   // Increment the top of the stack
        stack->data[stack->top]  = element;     // push the new element
        printf("Push element %d\n ", element );
        
    }
}

// popping element from the stack
int pop(Stack *stack) {
    if(isEmpty(stack)) {        // check whether the stack is empty
        printf("stack underflow");
        return -1;  // returns 1 to indicate stack is emptys

    }
     return stack->data[stack->top];
    /*else {
        int element = stack->data[stack->top];  // remove the top element 
        stack->top--;       // decrement the top

    }*/
}

// to check whether the stack is empty or not
// print the elements of the stack
int peek(Stack *stack) {
    if(isEmpty(stack)) {
        printf("Stack underflow");
    }
    else {
        return stack->data[stack->top];
    }
}
// display elements of the stack
int display (Stack *stack) {
    if(isEmpty(stack))
    {
        printf("Stack is empty");
    }
    else {
        printf("The element in the stack are: ");
        for(int i = 0; i<= stack->top; i++) {
            
            printf("%d, ", stack->data[i]);
            
        }
        
    }
}

int main(){
    Stack stack;
    init(&stack);       // call initialization function

    //call the push function and push the data
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);
    printf("\n");

     int Top = peek(&stack);    
     printf("Top element of the stack: %d\n", Top);

    //call the pop function and pop some element
    int popped = pop(&stack);  // Popping an element from the stack
    printf("Popped element: %d\n", popped);
    
    display(&stack);

    return 0;

}

