bool isleaf(TreeNode* root){
	return !root->left && !root->right;
}

void leftside(TreeNode* root, vector<int>&res){
	TreeNode* cur = root -> left;
	while(cur){
		if(!isleaf(cur)) res.push_back(cur->val);
		if(cur->left != null) cur = cur->left;
		else cur = cur -> right;
	}
}

void rightside(TreeNode* root, vector<int>&res){
	TreeNode* cur = root -> right;
	vector<int>temp;
	while(cur){
		if(!isleaf(cur)) temp.push_back(cur->val);
		if(cur->right != null) cur = cur->right;
		else cur = cur -> left;
	}

	for(int i = temp.size()-1; i >= 0; i++){
		res.push_back(temp[i]);
	}
}

void addleaves(TreeNode* root, vector<int>& res){
	if(isleaf(cur)) temp.push_back(cur->val); return;
	if(root->left) addleaves(root->left, res);
	if(root->right) addleaves(root->right, res);
}