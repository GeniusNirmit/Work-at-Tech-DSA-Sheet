//Problem Statement/:-https://workat.tech/problem-solving/practice/add-kth-element-linked-list

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

ListNode* addAtkthElement (ListNode* head, int k, ListNode* newElement) {
	ListNode *p=head;
	ListNode *t=newElement;
	if(k==1)
	{
		t->next=p;
		head=t;
	}
	else
	{
		for(int i=0;i<k-2;i++)
			p=p->next;
		t->next=p->next;
		p->next=t;
	}
	return head;
}