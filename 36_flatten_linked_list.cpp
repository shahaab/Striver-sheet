Node* mergeTwoLists(Node* a, Node* b) {
	Node* dummy = new Node(0);
	Node* res = dummy;

	while(a && b){
		if(a->val > b->val){
			res->bottom = a;
			res = res->bottom;
			a = a->bottom;
		}else{
			res->bottom = b;
			res = res->bottom;
			b = b->bottom;
		}
	}
	if(a) res->bottom = a;
	else res->bottom = b;

	return res->bottom;

}
Node *flatten(Node *root){
	root->next = flattern(root->next);

	root = merge(root, root->next);

	return root;
}