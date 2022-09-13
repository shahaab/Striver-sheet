bool identical(TreeNode* root1, TreeNode* root2){
	if(root1 == NULL && root2 == NULL) return true;
	else if(root2 == NULL || root1 == NULL) return false;
	return (root1->val == root2->val) && identical(root1->left, root2->left) && identical(root1->right, root2->right);
}