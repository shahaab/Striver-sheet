Problem Statement: Given the head of a singly linked list, write a program to reverse the linked list, and return the head pointer to the reversed list.

class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode* prev = nullptr;
		ListNode* curr = head;
		Listnode* next;
		while(curr){
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		head = prev;
		return head;
	}
};




class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode* prev = nullptr;
		while(head){
			Listnode* next = head->next;
			head->next = prev;
			prev = head;
			head = next;
		}
		head = prev;
		return head;
	}
};