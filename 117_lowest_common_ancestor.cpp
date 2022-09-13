int value(TreeNode* root, TreeNode* left, TreeNode* right){
	if(root == NULL || root == p || root == q) return root;
	TreeNode* leftTree = value(root->left, left, right);
	TreeNode* rightTree = value(root->right, left, right);

	if(leftTree == NULL) return rightTree;
	else if(rightTree == NULL) return leftTree;
	else return root;
}