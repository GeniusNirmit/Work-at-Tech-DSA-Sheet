//Problem Statement/:-https://workat.tech/problem-solving/practice/delete-xth-node-end-linked-list

/* This is the ListNode class definition

class ListNode {
public:
	int data;
	ListNode* next;

	ListNode(int data) {
		this->data = data;
		this->next = NULL;
	}
};
*/

// Approach-1 

ListNode* removeXthNodeFromEnd(ListNode* head, int x) {
	ListNode *p=head;
	ListNode *q=NULL;
	int counter=0;
	while(p)
	{
		counter++;
		p=p->next;
	}
	counter-=x;
	if(counter)
	{
		counter--;
		p=head;
		for(int i=0;i<counter;i++)
			p=p->next;
		p->next=p->next->next;
	}
	else
		head=head->next;
	return head;
}

// Approach-2

ListNode* removeXthNodeFromEnd(ListNode* head, int x) {
	ListNode *p=head;
	ListNode *q=head;
	for(int i=1;i<x;i++)
		p=p->next;
	if(!p->next)
		return head->next;
	while(p->next && p->next->next)
	{
		p=p->next;
		q=q->next;
	}
	q->next=q->next->next;
	return head;
}