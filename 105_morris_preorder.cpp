vector<int> InorderTraversal(node* root){
	node* curr = root;
	vector<int> preOrder;

	while(curr){
		if(curr->left == NULL){
			preOrder.push_back(curr);
			curr = curr->right;
		}else{
			node* temp = curr->left;
			while(temp->right != NULL && temp->right != curr){
				temp = temp->right;
			}

			if(temp->right == NULL){
				temp->right = curr;
				preOrder.push_back(curr->data);
				curr= curr->left;
			}else{
				temp->right = NULL;
				curr=curr->right;
			}
		}
	}
	return preOrder;
}