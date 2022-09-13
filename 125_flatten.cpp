node*prev = NULL;

void flatten(node* root){
	if(root ==  NULL) return;

	flatten(root->right);
	flatten(root->left);

	root->right = prev;
	root->left = null;
	prev = root;
}

class solution{
	node* prev = null
	void flatten(node* root){
		stack<node*> s;
		s.push(root);
		while(!s.empty()){
			node* curr = s.top();
			s.pop();
			if(curr->right)s.push(curr->right);
			if(curr->left) s.push(curr->left);

			if(!st.empty()){
				curr->right = s.top();
			}
			cur->left = NULL;
		}
	}
}