Rotate a Linked List
In this article we will solve the problem: “Rotate a Linked List”
Problem Statement: Given the head of a linked list, rotate the list to the right by k places.
Examples:
Example 1:
Input:
head = [1,2,3,4,5]
k = 2
Output:
head = [4,5,1,2,3]


node* rotateRight(node* head,int k) {
	node* dummy = head;
	int len = 0;
	while(dummy){
		dummy = dummy -> next;
		len++;
	}
	len = k%len;
	len = len - k;
	dummy = head;

	while(dummy -> next != null){
		dummy = dummy -> next;
	}
	dummy->next = head;
	// dummy = dummy ->next;

	while(len--){
		dummy = dummy -> next;
	}
	head = dummy ->next;
	dummy->next = NULL;
	return head;
}