#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void enqueue();
void dequeue();
void display();

int Front = -1,Rear = -1;
int queue[MAX];
int main() {
    int choice;
    while(1) {
        printf("Enter choice\n 1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
        scanf("%d",&choice);
        switch(choice) {
            case 1 : enqueue();
                     break;
            case 2 : dequeue();
                     break;
            case 3 : display();
                     break;
            case 4 : exit(0);
        }
    }
    return 0;
}

void enqueue() {
    if(Rear == MAX - 1) {
        printf("cannot insert\n");
    } else {
        if(Front == -1) {
            Front = Front + 1;
        } else {
            Rear = Rear + 1;
            int element;
            printf("Enter element\n");
            scanf("%d",&element);
            queue[Rear] = element;
        }
    }
}

void dequeue() {
    if(Front == -1) {
        printf("queue is empty\n");
    } else {
        printf("Delete element %d\n",queue[Front]);
        Front = Front + 1;
    }
}

void display() {
    if (Front == -1) {
        printf("queue is empty\n");
    } else {
        for(int i = Front;i <= Rear;i++) {
            printf("%d\n",queue[i]);
        }
    }
}


