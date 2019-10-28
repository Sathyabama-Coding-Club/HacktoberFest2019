#include <stdio.h>
#include <stdlib.h>
#define size 5

void push();
int pop();
void display();

struct stack {
    int a[size];
    int top;
}st;

int main() {
   st.top = -1;
   int choice;

    while(1) {
      printf("1.push \n 2.pop \n 3.display \n");
      printf("enter the choice\n");
      scanf("%d",&choice);
      switch(choice) {
         case 1: push();
                 break;
         case 2: printf("element to be deleted is %d",pop());
                 break;
         case 3: display();
                 break;
         case 4: exit(0);
      }
   }
}


void push() {
     int x;
     printf("enter the element to be deleted");
     scanf("%d",&x);
     if (st.top < (size-1)) {
        st.top++;
        st.a[st.top] = x;
       }
     else {
          printf("stack is overflowed\n");
     }
}

int pop() {
      int t;
      if (st.top == -1) {
          printf("stack is underflowed\n");
      }
     else {
        t = st.a[st.top];
        st.top--;
        return(t);
     }
 }

void display() {
   int i;
   if (st.top == -1) {
      printf("stack is empty\n");
    }
    else {
       for(i = st.top;i >= 0 ; i--) {
            printf("%d\n",st.a[i]);
        }
     }
}










 


       
