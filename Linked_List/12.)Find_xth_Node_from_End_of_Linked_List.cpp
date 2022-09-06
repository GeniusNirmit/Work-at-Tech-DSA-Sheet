//Problem Statement/:-https://workat.tech/problem-solving/practice/find-xth-node-end-linked-list

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

ListNode* xthNodeFromEnd(ListNode* head, int x) {
	ListNode *p=head;
	int counter=0;
	while(p)
	{
		counter++;
		p=p->next;
	}
	p=head;
	counter-=x;
	while(counter--)
		p=p->next;
	return p;
}

// Approach-2

ListNode* xthNodeFromEnd(ListNode* head, int x) {
	ListNode *p=head;
	for(int i=1;i<x;i++)
		p=p->next;
	if(!p->next)
		return head;
	while(p->next)
	{
		p=p->next;
		head=head->next;
	}
	return head;
}