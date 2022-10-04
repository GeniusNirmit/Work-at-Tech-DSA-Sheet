//Problem Statement/:-https://workat.tech/problem-solving/practice/implement-stack-array

class Stack {
public:
	vector<int> v;
	int top_pointer, capacity, v_size;
	Stack (int capacity) {
		this->capacity = capacity;
		top_pointer = -1;
		v_size = 0;
		v.resize(this->capacity);
	}

	bool isEmpty() {
		if(v_size == 0)
			return true;
		return false;
	}
	
	int size() {
		return v_size;
	}
	
	int top() {
		if(v_size < 0)
			return -1;
		return v[top_pointer];
	}
	
	void push(int element) {
		if(top_pointer >= capacity-1)
			return ;
		v[++top_pointer] = element;
		v_size++;
	}
	
	void pop() {
		if(top_pointer < 0)
			return ;
		top_pointer--;
		v_size--;
	}
};