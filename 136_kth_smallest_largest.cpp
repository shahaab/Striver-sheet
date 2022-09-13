int largesum, smallsum;

TreeNode* kthlargest(TreeNode* root, int& k){
	if(!root) return nullptr;
	kthlargest(root->right, k);
	if(--k == 0){
		largesum = root->val;
		return;
	}
	kthlargest(root->left, k);
}

TreeNode* kthsmallest(TreeNode* root, int& k){
	if(!root) return nullptr;
	kthsmallest(root->left, k);
	if(--k == 0){
		smallsum = root->val;
		return;
	}
	kthsmallest(root->right, k);
}