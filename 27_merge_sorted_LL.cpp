// Merge two sorted Linked Lists
// In this article we will solve the most asked coding interview question: ” Merge two sorted Linked Lists “
// Problem Statement: Given two singly linked lists that are sorted in increasing order of node values, merge two sorted linked lists and return them as a sorted list. The list should be made by splicing together the nodes of the first two lists.
// Example 1:
// Input Format :
// l1 = {3,7,10}, l2 = {1,2,5,8,10}
// Output :
// {1,2,3,5,7,8,10,10}


class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if(!l1) return l2;
		if(!l2) return l1;
		if(l1->val > l2->val) return swap(l2, l1);

		ListNode* res = l1;

		while(l1 && l2){
			ListNode* temp = NULL;

			while(l1  && (l1->val < l2->val)){
				temp=l1;
				l1 = l1->next;
			}
			temp->next = l2;
			swap(l1, l2);
		}
		return res;
	}
};