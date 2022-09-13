Find intersection of Two Linked Lists
Problem Statement: Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
Examples:
Example 1:
Input:
List 1 = [1,3,1,2,4], List 2 = [3,2,4]
Output:
2


node* intersectionPresent(node* head1,node* head2) {
	node* h1 = head1, *h2 = head2;

	while(h1 != h2){
		if(h1->next == NULL) h1 = head2;
		else h1 = h1->next;
		if(h2->next == NULL) h2 = head1;
		else h2 = h2->next;
	}
	return h1;
}