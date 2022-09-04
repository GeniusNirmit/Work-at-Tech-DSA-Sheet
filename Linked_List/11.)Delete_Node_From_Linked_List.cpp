//Problem Statement/:-https://workat.tech/problem-solving/practice/delete-node-linked-list

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

void deleteNode(ListNode* node) {
	ListNode *p=node->next;
	ListNode *q=node;
	node->data=p->data;
	q->next=p->next;
	delete p;
}