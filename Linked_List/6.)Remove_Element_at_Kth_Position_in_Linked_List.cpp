//Problem Statement/:-https://workat.tech/problem-solving/practice/delete-kth-element-linked-list

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

ListNode* removekthElement (ListNode* head, int k) {
	ListNode *p=NULL;
	ListNode *q=head;
	if(k==1)
		head=q->next;
	else{
		for(int i=0;i<k-2;i++)
			q=q->next;
		p=q;
		q=q->next;
		p->next=q->next;
		q=NULL;
	}
	return head;
}