TreeNode* search(TreeNode* root, int val){
	if(!root) return NULL;
	if(root->val == val) return root;
	else if(root->val > val) return search(root->left, val);
	else return search(root->right, val);
}