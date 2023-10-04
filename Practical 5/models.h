struct data
{
    char name[20];
    int usn;
    char branch[10];
    int sem;
    long int phNo;
};

struct node
{
    struct data *data;
    struct node *link;
};