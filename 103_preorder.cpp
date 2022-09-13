vector<int>pre(node* root){
	vector<int>preOrder;
	stack<node*> s;
	s.push(root);
	while(!s.empty()){
		auto it = s.top();
		s.pop();
		preOrder.push_back(it);
		if(it->right != NULL){
			s.push(it->right);
		}else{
			s.push(it->left);
		}
	}
	return preOrder;
}