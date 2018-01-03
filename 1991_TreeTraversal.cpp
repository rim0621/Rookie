#include<bits/stdc++.h>
using namespace std;

struct Node{
	char data;
	struct Node* left;
	struct Node* right;
};

Node *makeNode(char data)
{
	Node *node=(Node *)malloc(sizeof(Node));
	node->left='.';
	node->right='.';

	node->data=data;

	return node;
}
void inOrder(node *root)
{
	if(root=='.')
		return ;
	else{
		inOrder(root->left);
		printf("%c ",root->data);
		inOrder(root->right);
	}
}
void preOrder(node *root)
{
	if(root='.')
		return ;
	else{
		printf("%c ",root->data);
		preOrder(root->left);
		preOdrer(root->right);
	}
}
void postOrder(node *root)
{
	if(root='.')
		return ;
	else{
		preOrder(root->left);
		preOrder(root->right);
		printf("%c ",root->data);
	}
}
void insert(Node **root,char data)
{
	if(*root!='.')
		
	if(*root=='.')
		*root=makeNode(data);
	else if((*root)->data
}

int main()
{
	int n;
	Node *root;
	scanf("%d",&n);
	char rootData,leftData,rightData;
	for(int i=0;i<n;i++)
	{
		scanf("%c %c %c",&rootData,&leftData,&rightData);
		root=makeNode(rootData);
		root->left=makeNode(leftData);
		root->right=makeNode(rightData);
	}
}
