#include<stdio.h>
#include<stdlib.h>

#include "../lib/util.h"
#include "../lib/array.h"
#define capacity 10

int rear=-1, front=-1;
int queue[capacity];


void enqueue();
void dequeue();
void traverse();

int main(){
    
    while(1){
        _clr();
        int choice;
        char _choice[10];
        
        printf("Linear Queue\n");
        traverse();
        printf("\n1.) INSERT an Element\n");
        printf("2.) DELETE an First Element\n");
        printf("3.) EXIT\n");
        printf(">> ");

        scanf("%s", _choice);
        choice = atoi(_choice);
        if(choice == 3) break;
        switch (choice)
        {
            case 1 : enqueue() ; break;
            case 2 : dequeue() ; break;
        }

    }


    return 0;
}

void enqueue(){

    printf("\nEnter new Element : ");
    int element = readInt();

    if(rear == capacity-1) {
        printf("\nERROR : QUEUE OVERFLOW !");
        return ;
    }
    if(front == -1) front = 0;
    rear += 1;
    queue[rear] = element;

    printf("NEW ELEMENT ADDED\n");
    _wait();
}

void dequeue(){
    if(front == capacity -1 || front == -1) {
        printf("\nError : Queue UnderFlow !\n");
        _wait();
        return ;
    }

    front += 1;
}

void traverse(){
    if(front == -1) {

        return ;
    }
    printf("\n QUEUE : [");
    for(int i=front; i<= rear ; i++){
        printf("%d", queue[i]);
        if(i<rear-1) printf(",");
    }
    printf("]\n");
}