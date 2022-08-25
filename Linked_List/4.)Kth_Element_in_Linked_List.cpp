//Problem Statement/:-https://workat.tech/problem-solving/practice/kth-element-linked-list

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

ListNode* kthElement (ListNode* head, int k) {
	ListNode *p=head;
	k-=1;
	while(k--)
	{
		p=p->next;
	}
	return p;
}