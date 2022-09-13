bool symmetry(TreeNode* root1, TreeNode* root2){
	if(root1->val != root2->val) return false;
	return (root1->val == root2->val) && symmetry(root1->left, root2->right) && symmetry(root1->right,root2->left);
}