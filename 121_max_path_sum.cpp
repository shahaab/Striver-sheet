int sum(TreeNode* root, int& result){
	if(root == null) return 0;

	int ls = max(0, sum(root->left, result));
	int rs = max(0,sum(root->right, result));
	int val = root -> data;
	result = max(result, (ls+rs) + val)
	return max(ls,rs)+val;
}
