int ans;

int kthsmallest(TreeNode* root, int k){
	inorder(root, k);
	return ans;
}

void inorder(TreeNode* root, int& k){
	if(!root) return;
	inorder(root->left, k);
	if(--k == 0){
		ans = root->val;
		return;
	}
	inorder(root->right, k);
}