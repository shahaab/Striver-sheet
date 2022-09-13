int length(node* head){
	int len = 0;
	while(head){
		head=head->next;
		len++;
	} 
	return len;
}


node* reverseKNodes(node* head,int k){
	int len = length(head);
	node* dummy = new node(0);
	dummy->next = head;

	node* prev = dummy;
	node* curr;
	node* next;

	while(len >= k){
		curr = prev->next;
		next = curr->next;

		for(int i = 1; i < k; i++){
			curr->next = next->next;
			next->next = prev->next;
			prev->next = next;
			next = cur->next;
		}
		prev = curr;
		length -= k;
	}
	return dummy->next;
}