#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void print_data(struct node *head)
{
    struct node *ptr = head;
    int i = 1;

    if (ptr == NULL)
        printf("Linked List is empty.");

    while (ptr != NULL)
    {
        printf("Node %d : %d \n", i, ptr->data);
        ptr = ptr->link;
        i++;
    }
}

int main(void)
{
    struct node *head;
    struct node *ptr;

    head = (struct node *) malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    ptr = (struct node *) malloc(sizeof(struct node));
    head->link = ptr;
    ptr->data = 78;
    ptr->link = NULL;

    ptr = (struct node *) malloc(sizeof(struct node));
    head->link->link = ptr;
    ptr->data = 60;
    ptr->link = NULL;

    print_data(head);
}

// -----------------------------------------------------------

// int count_nodes(struct node *head)
// {
//     int count = 0;
//     struct node *ptr = head;

//     while(ptr != NULL)
//     {
//         count++;
//         ptr = ptr->link;
//     }
//     return (count);
// }

// int main(void)
// {
//     struct node *head;
//     struct node *ptr;

//     head = (struct node *) malloc(sizeof(struct node));
//     head->data = 45;
//     head->link = NULL;

//     ptr = (struct node *) malloc(sizeof(struct node));
//     head->link = ptr;
//     ptr->data = 78;
//     ptr->link = NULL;

//     ptr = (struct node *) malloc(sizeof(struct node));
//     head->link->link = ptr;
//     ptr->data = 60;
//     ptr->link = NULL;

//     int nodes = count_nodes(head);

//     printf("Number of nodes = %d \n", nodes);
// }

// -----------------------------------------------------------

// int main(void)
// {
//     struct node *head;
//     struct node *ptr;
//     head = (struct node *) malloc(sizeof(struct node));

//     head->data = 45;
//     head->link = NULL;

//     ptr = (struct node *) malloc(sizeof(struct node));
//     head->link = ptr;
//     ptr->data = 60;
//     ptr->link = NULL;

//     ptr = (struct node *) malloc(sizeof(struct node));
//     head->link->link = ptr;
//     ptr->data = 20;
//     ptr->link = NULL;

//     printf("Node 1 : %d \n", head->data);
//     printf("Node 2 : %d \n", head->link->data);
//     printf("NOde 3 : %d \n", head->link->link->data);
// }


// ------------------------------------------------------------


// int main(void)
// {
//     struct node *head;
//     head = (struct node *) malloc(sizeof(struct node));

//     head->data = 45;
//     head->link = NULL;

//     struct node *ptr;
//     ptr = (struct node *) malloc(sizeof(struct node));
//     ptr->data = 60;
//     ptr->link = NULL;
//     head->link = ptr; // linking second node with first one.

//     printf("Node 1 : Data = %d \n", head->data);
//     printf("Node 2 : Data = %d \n", ptr->data);
// }


// -------------------------------------------------------------------


// user define datatypes
// struct student 
// {
//     char *name;
//     int roll_no;
//     float cgpa;
// };

// typedef struct data
// {
//     char *name;
//     int roll_no;
//     float cgpa;
// } student;

// int main(void)
// {
//     // struct student s1;
//     student s1;

//     s1.name = "Maaz";
//     s1.roll_no = 34;
//     s1.cgpa = 9.4;

// 	// struct student s2 = {"Zorz", 45, 7.8};
//     student s2 = {"Zorz", 45, 7.8};

// 	printf("Student 1 \n");
//     printf("Name        : %s \n", s1.name);
//     printf("Roll No.	: %d \n", s1.roll_no);
//     printf("CGPA        : %f \n", s1.cgpa);

// 	// student 2
// 	printf("Student 2 \n");
// 	printf("Name        : %s \n", s2.name);
//     printf("Roll No.	: %d \n", s2.roll_no);
//     printf("CGPA        : %f \n", s2.cgpa);

// 	// pointer
// 	printf("Pointers \n");
// 	student *ptr1 = &s1;
// 	student *ptr2 = &s2;

// 	printf("Name of Student 1 = %s \n", (*ptr1).name);
// 	printf("Name of Student 2 = %s \n", ptr2->name);
// }