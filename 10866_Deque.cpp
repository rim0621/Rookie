//size구현하기

#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *pre;
	Node *next;
};
struct Deque
{
	Node *head;
	Node *tail;
};
void init_Deque(Deque *dq)
{
	dq->head = NULL;
	dq->tail = NULL;
}
void Push_front(Deque *dq, int data)
{
	Node *node = (Node *)malloc(sizeof(Node));
	if(dq->head == NULL)	// 덱의 앞이  비어 있으면(처음넣을때)		
	{
		dq->head=node;
		dq->tail=node;
		node->data = data;
		node->next = NULL;
		node->pre = NULL;
//		cout<<"first p_f"<<endl;
		return ;	
	}
	dq->head->pre=node;
	node->next = dq->head;
	dq->head=node;
	node->data=data;
	node->pre=NULL;
}
void Push_back(Deque *dq, int data)
{
	Node *node = (Node *)malloc(sizeof(Node));
	if(dq->tail == NULL)
	{
		dq->head = node;
		dq->tail = node;
		node->data=data;
		node->next=NULL;
		node->pre=NULL;
//		cout<<"first p_b"<<endl;
		return ;
	}
	dq->tail->next = node;
	node->pre = dq->tail;
	dq->tail=node;
	node->data=data;
	node->next=NULL;
}

int Pop_front(Deque *dq)
{
	if(dq->head == NULL)
	{
//		cout<<"no element"<<endl;
		return -1;
	}
	int ans;
	Node *cur = NULL;
	ans = dq->head->data;
	cur = dq->head;
	dq->head->next=NULL; 	// 다음 노드 연결 끊기
	dq->head = dq->head->next;		
	free(cur);
	return ans;
}
int Pop_back(Deque *dq)
{
	if(dq->tail == NULL)
	{
//		cout<<"no element"<<endl;
		return -1;
	}
	int ans;
	Node *cur = NULL;
	ans = dq->tail->data;
	dq->tail->pre = NULL;	
	cur = dq->tail;
	dq->tail = dq->tail->pre;
	free(cur);
	return ans;	
}
int front(Deque *dq)
{
	if(dq->head==NULL)
	{
//		cout<<"no elemnet"<<endl;
		return -1;
	}
	int ans = dq->head->data;
	return ans;
}
int back(Deque *dq)
{
	if(dq->tail == NULL)
	{
//		cout<<"no element"<<endl;
		return -1;
	}
	int ans=dq->tail->data;
	return ans;
}

int empty(Deque *dq)
{
	if(dq->head == NULL && dq->tail == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n;
	cin>>n;

	int x;
	Deque dq;
	init_Deque(&dq);
	int s=0;

	for(int i=0;i<n;i++)
	{
		string input;
		cin>>input;
		if(input =="push_front")
		{
			cin>>x;
			Push_front(&dq,x);
			s++;
		}
		else if(input=="push_back")
		{
			cin>>x;
			Push_back(&dq,x);
			s++;
		}
                else if(input=="pop_front")
		{
			cout<<Pop_front(&dq)<<endl;
			if(s>0)
				s--;
		}
                else if(input=="pop_back")
		{
			cout<<Pop_back(&dq)<<endl;
			if(s>0)
				s--;
		}	
                else if(input=="size")
		{
			cout<<s<<endl;
		}
                else if(input=="empty")
		{
			cout<<empty(&dq)<<endl;
		}
                else if(input=="front")
		{
			cout<<front(&dq)<<endl;
		}
                else if(input=="back")
		{
			cout<<back(&dq)<<endl;
		}

		

	}
	return 0;
}












