//Problem Statement/:-https://workat.tech/problem-solving/practice/print-reversed-linked-list

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

void printLinkedListReverse (ListNode* head) {
    // add your logic here
	ListNode *p=head;
	if(p)
	{
		printLinkedListReverse(p->next);
		cout<<p->data<<" ";
	}
}