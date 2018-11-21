#include <bits/stdc++.h>

using namespace std;

/*Queue structure for making stack and implementing queue*/
struct Queue {
	stack<int> stk; //Initializing stack stk

	//addToQueue function is used to push elements to the stack
	void addToQueue(int i) {
		stk.push(i);
	}

	//deleteFromQueue is used to pop elements from stack
	int deleteFromQueue() {

		//If there is no element in the stack
		if (stk.empty()) {
			cout << "Queue is empty";
			exit(0);
		}

		int i = stk.top(); //Intitialize i with topmost element of stack
		stk.pop(); //Pop the element from the stack

		//If it was first element of stack, return it
		if (stk.empty())
			return i;

		int item = deleteFromQueue(); //Call deleteFromQueue recursively until first element is recieved


		stk.push(i); //Push the popped element back into stack

		return item; //Return the item
	}
};

int main() {
	Queue q;
	q.addToQueue(2); q.addToQueue(4); q.addToQueue(7);

	cout << q.deleteFromQueue();

	return 0;
}