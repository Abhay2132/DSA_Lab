#include<stdio.h>
#include "helper.h"

struct data {
    char name[20];
    int usn;
    char branch[10];
    int sem;
    long int phNo;
};

struct node {
    struct data * data;
    struct node * link;
};

void printHeader();
void printRow(struct data *);
void printRecords(struct node *, int limit);

struct node * insert_end(struct data *);
struct node * insert_start(struct data *);
struct node * insert_at(struct data *);

struct node * delete_start();
struct node * delete_end();
struct node * delete_at(int pos);

struct node * udpate_at(int pos, struct data *);
struct node * node_at(int pos);
struct node * data_at(int pos);

struct node * append(struct node *, struct node *);

void printRecord(int n);

int main(){

    struct node * start;
    int ch=1;
    while(ch){
        clrscr();
        printf("========= Linked List ==========\n\n");

        printHeader(); printf("\n");
        printRecords(start, 10);
        printf("Choose an option :- \n");
        printf(" 1.) Create Records at end\n");
        printf(" 2.) Create Records at start \n");
        printf(" 3.) Create Records at N(th) pos \n");
        printf(" 4.) Delete First Record\n");
        printf(" 5.) Delete Last Record\n");
        printf(" 6.) Delete N(th) Record\n");
        printf(" 7.) Update N(th) Record\n");
        printf(" 8.) Print Records");

        printf(" 9.) Exit\n");
        printf(" >> ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1 : start = insert_end(); break;
        case 2 : start = insert_start(); break;
        case 3 : start = insert_at(); break;
        case 4 : start = delete_start(); break;
        case 5 : start = delete_end(); break;
        case 6 : start = delete_at(); break;
        case 7 : start = udpate_at(); break;
        case 8 : start = udpate_at(); break;
    }

    return 0;
}

void printHeader (){
    printf(" USN\t\tname\t\tbranch\t\tsem\t\tPhone");
}

void printRow(struct data *){

    printf(" %d", data->usn);
    s(8-numLen(data->usn));
    printf("%s", data->name);
    s(8-strLen(data->name));
    printf("%s", data->branch);
    s(8-strLen(data->branch));
    printf("%d", sem);
    s(8-strLen(data->sem));
    printf("%d", data->phNo);

    printf("")
}

void printRecords(struct node * start, int limit){
    int count =0;
    struct node * tmp = start;

    while(tmp->link != NULL){
        if(count ++ >= limit){ 
            printf("\n . . .");
            break;
        }
        printRow(tmp->data);
        printf("\n");
        tmp = tmp->link;

        count ++;
    }
}