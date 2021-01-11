/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//singly linked list problems.
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct node{
    int data;
    struct node* link;
}node;



node* createNode(int data){
    node* newnode = new node();
    if(!newnode){
        printf("Memory Allocation Failed\n");
        exit(0);
    }
    newnode->data = data;
    newnode->link = NULL;
    return newnode;
}



void printdata(node* head){
    node* ptr = head;
    while(ptr->link != NULL){
        printf("%d,",ptr->data);
        ptr = ptr->link;
    }
    printf("%d.",ptr->data);
}



node* traverse(node* head){
    while(head->link != NULL){
        head = head->link;
    }
    return head;
}


node* insertnode(node* head,int data){
    node* newnode = createNode(data);
    
    if(head == NULL){
        head = newnode;
        return head;
    }
        node * temp = head;
        temp = traverse(temp);
        temp->link = newnode;
        return head;
    
}


void middleelemt1(node* head){
    node* ptr1; node* ptr2;
    ptr1 = head;
    ptr2 = head->link->link;
    while(ptr2->link!=NULL){
        ptr1= ptr1->link;
        ptr2 = ptr2->link;
    }
    printf("The middle element is %d\n",ptr1->data);
}


int main()
{
    node * head = 0;
    head = insertnode(head,1);
    if(head->data == 1){
        printf("compiled success\n");
    }
    head = insertnode(head,2);
    head = insertnode(head,3);
    head = insertnode(head,4);
    head = insertnode(head,5);
    printdata(head);
    printf("\n---------------\n");
    middleelemt1(head);
    printf("\n");
    printf("Hello World");
    return 0;
}


