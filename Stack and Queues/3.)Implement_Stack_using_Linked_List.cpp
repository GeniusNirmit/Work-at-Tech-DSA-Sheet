//Problem Statement/:-https://workat.tech/problem-solving/practice/implement-stack-linked-list

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

class Stack {
public:
	ListNode *head;
	int head_size, head_top;
	Stack (int capacity) {
		head = NULL;
		head_top = 0;
		head_size = capacity;
	}

	bool isEmpty() {
		if(!head)
			return true;
		return false;
	}
	
	int size() {
		return head_top;
	}
	
	int top() {
		if(!head)
			return -1;
		return head->data;
	}
	
	void push(int element) {
		ListNode *p = new ListNode(element);
		p->data = element;
		p->next = head;
		head = p;
		head_top++;
	}
	
	void pop() {
		if(!head)
			return ;
		head = head->next;
		head_top--;
	}
};