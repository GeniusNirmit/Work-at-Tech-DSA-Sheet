//Problem Statement/:-https://workat.tech/problem-solving/practice/merge-sorted-linked-list

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

ListNode* mergeTwoSortedList (ListNode* firstList, ListNode* secondList) {
	ListNode *p=firstList;
	ListNode *q=secondList;
	ListNode *x=NULL;
	if(p->data>q->data)
	{
		firstList=q;
		q=q->next;
	}
	else
		p=p->next;
	x=firstList;
	while(p && q)
	{
		if(p->data<q->data)
		{
			x->next=p;
			p=p->next;
		}
		else
		{
			x->next=q;
			q=q->next;
		}
		x=x->next;
	}
	while(p)
	{
		x->next=p;
		x=x->next;
		p=p->next;
	}
	while(q)
	{
		x->next=q;
		x=x->next;
		q=q->next;
	}
	return firstList;
}