#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int val;
    struct Btnode* left;
    struct Btnode* right;
}Btnode;
int COUNT = 10;

Btnode* newnode(int n){
    Btnode* temp = (Btnode*)malloc(sizeof(Btnode));
    temp->val = n;  
    temp->left = temp->right = NULL;
    return temp;
}
Btnode* insert(int n, Btnode* root){
    if(root == NULL){
        root = newnode(n);
        return root;
    }
    else if(n <= root->val){
        root->left =  insert(n, root->left);
        return root;
    }
    root->right = insert(n, root->right);
    return root;
}


Btnode* FindMin(Btnode* root){
    while(root->left != NULL) root = root->left;
    return root;
}
Btnode* del(Btnode *root, int data) {
    if(root == NULL) return root; 
    else if(data < root->val) root->left = del(root->left,data);
    else if (data > root->val) root->right = del(root->right,data);
    else {
        if(root->left == NULL && root->right == NULL) { 
            free(root);
            root = NULL;
        }
        else if(root->left == NULL) {
            Btnode *temp = root;
            root = root->right;
            free(temp);
        }
        else if(root->right == NULL) {
            Btnode *temp = root;
            root = root->left;
            free(temp);
        }
        else { 
            Btnode *temp = FindMin(root->right);
            root->val = temp->val;
            root->right = del(root->right,temp->val);
        }
    }
    return root;
}
Btnode* merge(Btnode *root, Btnode *root2){
    if(root2 == NULL){
        return root;
    }
    if(root == NULL){
        root = root2;
        return root;
    }
    else if(root2->val <= root->val){
        root->left =  merge(root->left, root2);
        return root;
    }
    root->right = merge(root->right, root2);
    return root;
}

void preorder(Btnode* root){
    if(root == NULL){
        printf("\n");
        return;
    }
    printf("%d ", root->val);
    if(root->left != NULL)
        preorder(root->left);
    if(root->right != NULL)
        preorder(root->right);
}

void postorder(Btnode* root){
    if(root == NULL){
        printf("\n");
        return;
    }
    
    if(root->left != NULL)
        postorder(root->left);
    printf("%d ", root->val);
    if(root->right != NULL)
        postorder(root->right);
}

void inorder(Btnode* root){
    if(root == NULL){
        printf("\n");
        return;
    }
    
    if(root->left != NULL)
        inorder(root->left);
    
    if(root->right != NULL)
        inorder(root->right);
    printf("%d ", root->val);
}

int lfs(Btnode* root, int n){
    if(root == NULL){
        return 0;
    }
    Btnode* temp = root->left;
    if(temp != NULL && temp->val == n){
        return 1;
    }
    temp = root->right;
    if(temp != NULL && temp->val == n){
        return 1;
    }
    return lfs(root->left, n) || lfs(root->right, n);
}

//printing is not in syllabus, this prints the binary tree in horizontal fashion
void print2DUtil(Btnode *root, int space){
    if (root==NULL) return;
    space += COUNT;
    print2DUtil(root->right, space);
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d", root->val);
    print2DUtil(root->left, space);
}
void print2D(Btnode *root){
    print2DUtil(root, 0);
}

int dfs(Btnode* root, int n){
    if(root == NULL){
        return 0;
    }
    if(root->val == n){
        return 1;
    }
    if(n>root->val){
        return dfs(root->right,n);
    }
    return dfs(root->left, n);
}

int main(){
    Btnode* root = NULL;
    Btnode* root2 = NULL;
    root = insert(10, root);
    root = insert(8, root);
    root = insert(9, root);
    root = insert(7, root);
    root = insert(6, root);
    root2 = insert(15, root2);
    root2 = insert(11, root2);
    root2 = insert(16, root2);
    root2 = insert(14, root2);
    root2 = insert(17, root2);
    printf("Tree 1:\n");
    print2D(root);
    printf("\n -------------------------- \n");
    printf("Tree 2:\n");
    print2D(root2);
    printf("\n -------------------------- \n");
    printf("Merged:\n");
    root = merge(root, root2);
    print2D(root);
    printf("\n -------------------------- \n");
    printf("Deleted (15):\n");
    root = del(root, 15);
    print2D(root);
    printf("\n -------------------------- \n");
    printf("Printing in preorder: \n");
    preorder(root);
    printf("\n -------------------------- \n");
    printf("Printing in postorder: \n");
    postorder(root);
    printf("\n*Notice that the values are sorted here*");
    printf("\n -------------------------- \n");
    printf("Printing in inorder: \n");
    inorder(root);
    printf("\n -------------------------- \n");
    printf("Depth first search on tree: \n\n");
    if(dfs(root, 15)){
        printf("Yes 15 exists\n");
    }
    else{
        printf("No 15 does not exists\n");
    }
    if(dfs(root, 11)){
        printf("Yes 11 exists\n");
    }
    else{
        printf("No 11 does not exists\n");
    }
    printf("\n -------------------------- \n");
    printf("level (breath) first search on tree: \n\n");
    if(lfs(root, 15)){
        printf("Yes 15 exists\n");
    }
    else{
        printf("No 15 does not exists\n");
    }
    if(lfs(root, 11)){
        printf("Yes 11 exists\n");
    }
    else{
        printf("No 11 does not exists\n");
    }
    printf("\n -------------------------- \n");
}
