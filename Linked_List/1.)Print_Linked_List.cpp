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

void printLinkedList (ListNode* head) {
	ListNode *p=head;
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}