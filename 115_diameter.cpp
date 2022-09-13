int diameter(TreeNode* root, int &diameter){
	if(!root) return;

	int lh = (root->left) diameter(root->left);
	int rh = (root->right) diamter(root->right);
	diameter = max(diameter, lh+rh);

	return 1+max(lh,rh);
}