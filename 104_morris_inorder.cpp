vector<int> InorderTraversal(node* root){
	node* curr = root;
	vector<int> inorder;
	while(curr){
		if(curr->left == NULL){
			inorder.push(cur->data);
			cur = cur->right;
		}else{
			node* prev = curr->left;
			while(prev->right != NULL && prev->right != curr){
				prev = prev->right;
			}

			if(prev -> right == NULL){
				prev -> right = curr;
				curr = curr -> left;
			}else{
				prev->right = NULL;
				inorder.push_back(curr->data);
				curr = curr -> right;
			}
		}
	}
	return inorder;
}