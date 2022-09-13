vector<int> path(node* root, int value){
	if(root == NULL) return false;
	pathtaken.push_back(root->val);

	if(root->val == value) return true;
	if(path(root->left, pathtaken, x) || path(root->right, pathtaken, x)){
		return true;
	}
	pathtaken.pop_back();
	return false;
}