/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//
//  main.cpp
//  treeplusplus
//
//  Created by Goutham Sakthi on 15/11/20.
//

#include <iostream>
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}node;

node* createnode(int x){
    node* newnode = new node();
    if(!newnode){
        printf("memory allocation failure");
        return NULL;
    }
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->data = x;
    return newnode;
}

node* insertnode(node* root,int data){
    if(root == NULL){
        root = createnode(data);
        return root;
    }
    else if(data <= root->data){
        root->left = insertnode(root->left, data);
    }
    else{
       root->right = insertnode(root->right, data);
    }
    return root;
}

bool searchbst(node* root,int x){
    if(root == NULL){
        return 0;
    }
    if(root->data == x){
        return root->data;
    }
    else if(root->data >= x){
        return searchbst(root->left, x);
    }
    else {
        return searchbst(root->right, x);
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    node* root = NULL;
    root= insertnode(root,1);
    root = insertnode(root, 2);
    root = insertnode(root, 3);
    root = insertnode(root, 4);
    root = insertnode(root, 0);
    std::cout <<"the number is " <<(searchbst(root, 0)?"found \n":"not found \n");
    return 0;
}
