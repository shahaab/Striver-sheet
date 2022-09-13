Detect a Cycle in a Linked List
In this article we will solve the most asked interview question: Detect a Cycle in a Linked List
Problem Statement: Given head, the head of a linked list, determine if the linked list has a cycle in it. There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer.
Return true if there is a cycle in the linked list. Otherwise, return false.
Examples:
Example 1:
Input:
Head = [1,2,3,4]
Output:
true


bool cycleDetect(node* head) {
	node* fast = head, *slow = head;

	while(fast && fast->next){
		fast = head->next->next;
		slow = slow->next;
		if(fast == slow){
			return true;
		}
		return false;
	}
}