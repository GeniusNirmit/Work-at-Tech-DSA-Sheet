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

vector<int> linkedListToArray (ListNode* head) {
    // add your logic here
	vector<int> v;
	ListNode *p=head;
	while(p){
		v.push_back(p->data);
		p=p->next;
	}
	return v;
}