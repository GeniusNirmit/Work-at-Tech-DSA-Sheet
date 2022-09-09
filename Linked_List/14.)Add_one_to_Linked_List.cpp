//Problem Statement/:-https://workat.tech/problem-solving/practice/add-one-linked-list

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

// Approach-1 

ListNode* addOneToList(ListNode* head) {
		ListNode *p=head;
	    ListNode *q=NULL;
	    ListNode *r=NULL;
	    while(p)
	    {
    		r=q;
		    q=p;
		    p=p->next;
		    q->next=r;
	    }
	    head=q;
	    p=head;
        int temp=1;
        while(p)
        {
            p->data+=temp;
			temp=p->data/10;
			p->data%=10;
			q=p;
			p=p->next;
        }
        if(temp)
		{
			ListNode *t=new ListNode(temp);
			q->next=t;
		}
        p=head;
        q=NULL;
        r=NULL;
        while(p)
	    {
    		r=q;
		    q=p;
		    p=p->next;
		    q->next=r;
	    }
	    head=q;
        return head;
}