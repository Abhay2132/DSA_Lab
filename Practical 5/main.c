#include <stdio.h>
#include "helper.h"
#include "models.h"
#include "methods.h"

int main()
{

    struct node *start;
    int ch = 1;
    while (ch)
    {
        clrscr();
        printf("========= Linked List ==========\n\n");

        printHeader();
        printf("\n");
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
        case 1:
            start = insert_end(start);
            break;
        case 2:
            start = insert_start(start);
            break;
        case 3:
            start = insert_at(start);
            break;
        case 4:
            start = delete_start(start);
            break;
        case 5:
            start = delete_end(start);
            break;
        case 6:
            start = delete_at(start);
            break;
        case 7:
            start = udpate_at(start);
            break;
        case 8:
            start = udpate_at(start);
            break;
        }

        return 0;
    }
}

// Do not type after this line