int depth(TreeNode* root){
	if(!root) return 0;
	int lh= depth(root->left);
	int rh = depth(root->right);
	return 1+max(lh,rh);
}



