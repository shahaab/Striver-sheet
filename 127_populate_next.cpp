node* connect(node* root){
	queue<node*>q;
	q.push(root);
	while(!q.empty()){
		int size = q.size();
		for(int i = 0; i<n;i++){
			node* curr = q.front();
			q.pop();
			if(i != n-1) curr -> left = q.front();
			if(curr->left) q.push(curr->left);
			if(curr->right) q.push(curr->right);
		}
	}
	return root;
}

Node* connect(node* root){
	if(!root){
		return NULL;
	}

	if(root->left){
		root->left->next = root->right;
		if(root->next){
			root->right->next = root->next->left;
		}
		connect(root->left);
		connect(root->right);
	}
	return root;
}