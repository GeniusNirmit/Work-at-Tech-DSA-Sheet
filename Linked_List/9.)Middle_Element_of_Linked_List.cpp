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

// Approach 1

int getMiddleElementOfLinkedList (ListNode* list) {
    // add your logic here
	ListNode *p=list;
	ListNode *q=list;
	while(p->next)
	{
		p=p->next;
		if(p->next)
		{
			p=p->next;
			q=q->next;
		}
	}
	return q->data;
}

// Approach 2

int getMiddleElementOfLinkedList (ListNode* list) {
	ListNode *p=list;
	int counter=0;
	while(p->next)
	{
		counter++;
		p=p->next;
	}
	p=list;
	counter/=2;
	while(counter--)
	{
		p=p->next;
	}
	return p->data;
}
