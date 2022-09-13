class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* start = new ListNode();
		start->next = head;
		ListNode* fast = start, *slow = start;
		while(n--){
			fast = fast->next;
		}

		while(fast->next){
			slow = slow->next;
			fast = fast->next;
		}
		slow->next = slow->next->next;

		return start->next;
	}
};