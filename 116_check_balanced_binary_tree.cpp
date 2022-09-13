bool check(TreeNode* root){
	if(root->null) return 0;

	int lh = check(root->left);
	if(lh == -1) return -1;
	int rh = check(root->right);
	if(rh == -1) return -1;

	if(abs(lh - rh)>1) return -1;

	return max(lh, rh) + 1;
}