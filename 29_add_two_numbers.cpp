Add two numbers represented as Linked Lists
Problem Statement: Given the heads of two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
Examples:
Input Format:
(Pointer/Access to the head of the two linked lists)
num1 = 342, num2 = 564
l1 = [2,4,3]
l2 = [5,6,4]
Result: sum = 807; L = [7,0,8]


class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* res = new ListNode();
		ListNode* val = res;

		int carry(0);

		while(l1 || l2 || carry){
			int sum = 0;
			if(l1) sum += l1 -> next; l1 = l1 -> next;
			if(l2) sum += l2 -> next; l2 = l2 -> next;
			sum += carry;
			carry = sum / 10;

			ListNode* temp = new ListNode(sum%10);
			val->next = temp;
			val = val->next;
		}
		return res->next;
	}
};