//Problem Statement/:-https://workat.tech/problem-solving/practice/reverse-linked-list

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

ListNode* reverseLinkedList (ListNode* head) {
	ListNode *p=head;
	ListNode *q=NULL;
	ListNode *r=NULL;
	while(p)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	head=q;
	return head;
}