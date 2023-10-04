#include "models.h"

void printHeader();
void printRow(struct data *);
void printRecords(struct node *, int limit);

struct node *insert_end(struct node *);
struct node *insert_start(struct node *);
struct node *insert_at(struct node *);

struct node *delete_start(struct node *);
struct node *delete_end(struct node *);
struct node *delete_at(struct node *);

struct node *udpate_at(struct node *);
struct node *node_at(struct node *);
struct node *data_at(struct node *);

struct node *append(struct node *);

void printRecord(int n);


void printHeader()
{
    printf(" USN\t\tname\t\tbranch\t\tsem\t\tPhone");
}

void printRow(struct data *)
{

    printf(" %d", data->usn);
    s(8 - numLen(data->usn));
    printf("%s", data->name);
    s(8 - strLen(data->name));
    printf("%s", data->branch);
    s(8 - strLen(data->branch));
    printf("%d", sem);
    s(8 - strLen(data->sem));
    printf("%d", data->phNo);

    printf("")
}

void printRecords(struct node *start, int limit)
{
    int count = 0;
    struct node *tmp = start;

    while (tmp->link != NULL)
    {
        if (count++ >= limit)
        {
            printf("\n . . .");
            break;
        }
        printRow(tmp->data);
        printf("\n");
        tmp = tmp->link;

        count++;
    }
}

struct node *insert_end(struct node * start){
    struct data * newData;
    struct node * tmp = start;

    printf("\n\t\t Insert at End\n");
    printf("\n ")

    if(start == NULL)
    while()
}


// Do not type after this line
