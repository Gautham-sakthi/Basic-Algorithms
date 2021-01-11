/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//doubly linked list problems.

#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}node;

node* createNode(int data){
    node* newnode = new Node();
    if(!newnode){
        printf("Memory allocation failed");
        exit(0);
    }
    newnode->data =data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
//traverseing throught list from left -> right 
node* traverse(node * head){
    while(head->right!= NULL){
        head = head->right;
    }
    return head;
}

//funtion to insertnode data
node* insertData(node* head,int data){
    node* newnode = createNode(data);
    if(head == NULL){
        head = newnode;
        return head;
    }
    node* temp = head;
    temp = traverse(temp);
    temp->right = newnode;
    newnode->left = temp;
    return head;
}

//printing all the nodes in linked list.

void printlist(node* head){
    node* ptr = head;
    while(ptr->right!= NULL){
        printf("%d,",ptr->data);
        ptr = ptr->right;
    }
    printf("%d.",ptr->data);
}

int main()
{
    node* head = 0;
    head = insertData(head,1);
    head = insertData(head,2);
    head = insertData(head,3);
    head = insertData(head,4);
    printlist(head);
    printf("\nCode Compiled");

    return 0;
}


