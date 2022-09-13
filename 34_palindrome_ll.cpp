int length(node* head){
	int len = 0;
	while(head){
		head=head->next;
		len++;
	}
	return len;
}
node* reverse(node* ptr) {
	node* prev = nullptr;
	node* curr = ptr;
	node* nex;
	while(curr){
		nex = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nex;
	}
	return prev;
}
bool isPalindrome(node* head) {
	int len = length(head), i = 0;
	node* head2 = new node(head);


	while(i < len/2){
		head2 = head2 ->next;
		i++;
	}

	head2 ->next = reverse(head2->next);
	i=0;
	while(i < len/2){
		if(head->val != head2->val){
			return false;
		}
		i++;
		head = head->next;
		head2 = head2->next;
	}
	return true;

}