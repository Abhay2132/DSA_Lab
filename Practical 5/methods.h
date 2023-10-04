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