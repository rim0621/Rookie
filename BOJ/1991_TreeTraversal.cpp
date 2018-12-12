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
	node->left= NULL;
	node->right=NULL;

	node->data=data;

	return node;
}
void inOrder(Node *root)
{
	if(root->data=='.')
		return ;
	else{
		inOrder(root->left);
		printf("%c ",root->data);
		inOrder(root->right);
	}
}
void preOrder(Node *root)
{
	if(root->data=='.')
		return ;
	else{
		printf("%c ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}
void postOrder(Node *root)
{
	if(root->data=='.')
		return ;
	else{
		postOrder(root->left);
		postOrder(root->right);
		printf("%c ",root->data);
	}
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
	preOrder(root);
	inOrder(root);
	postOrder(root);
	return 0;
}
