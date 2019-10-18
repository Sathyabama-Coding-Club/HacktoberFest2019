#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    int data;
    struct list *link;
}NODE;

NODE *head = NULL;
void create();
void insert();
void delete();
void display();
void delete_begin();
//void delete_anywhere();
void delete_end();
void insert_begin();
//void insert_anywhere();
void insert_end();

int main(){
    int choice;
    printf("Enter your choice\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    scanf("%d", &choice);
    while(1){
        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}
void create(){
    int element;
    printf("Enter the element: ");
    scanf("%d", &element);
    NODE *p = malloc(sizeof(NODE));
    p -> data = element;
    p -> link = NULL;
    head = p;
}
void insert(){
    int option;
    if(head == NULL)
        create();
    else
        while(1){
            printf("Enter option:\n1.At Beginning\n2.At End\n3.Anywhere\n4.Exit\n");
            scanf("%d", &option);
            switch(option){
                case 1:
                    insert_begin();
                    break;
                case 2:
                    insert_end();
                    break;
                /*case 3:
                    insert_anywhere();
                    break;*/
                case 4:
                    exit(0);
        }
    }
}
void insert_begin(){
    NODE *p = malloc(sizeof(NODE));
    int element;
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    p -> data = element;
    p -> link = head -> link;
    head = p;
}
void insert_end(){
    NODE *p = malloc(sizeof(NODE));
    int element;
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    p -> data = element;
    p -> link = NULL;
    NODE *temp;
    temp = head;
    while(temp -> link != NULL)
        temp = temp -> link;
    temp -> link = p;
}
void delete(){
    int option;
    while(1){
        printf("Enter option:\n1.At Beginning\n2.At End\n3.Anywhere\n4.Exit\n");
        scanf("%d", &option);
        switch(option){
            case 1:
                delete_begin();
                break;
            case 2:
                delete_end();
                break;
            /*case 3:
                delete_anywhere();
                break;*/
            case 4:
                exit(0);
        }
    }
}
void delete_begin(){
    NODE *temp;
    temp = head -> link;
    printf("Element deleted is %d", temp -> data);
    head = temp -> link;
    free(temp);
}
void delete_end(){
    NODE *temp;
    NODE *secondlastnode;
    printf("Element deleted is %d", temp -> data);
    while(temp -> link != NULL){
        secondlastnode = temp;
        temp = temp -> link;
    }
    if(temp == head)
        head = NULL;
    else
        secondlastnode -> link = NULL;
    free(temp);
}
void display(){
    NODE *temp;
    temp = head;
    if(head == NULL)
        printf("List is empty\n");
    else
        for(int i = 1; temp != NULL; i++){
            printf("Data of node %d is %d", i, temp -> data);
            temp = temp -> link;
        }
}
