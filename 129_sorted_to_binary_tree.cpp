vector<int>bst(vector<int>&bst){
	return convert(bst, 0, bst.size()-1);
}

TreeNode* convert(vector<int>&bst, int low, int high){
	if(low <= high){
		int mid = low +(high - low)/2;
		TreeNode* root = new TreeNode(nums[mid]);
		root->left = convert(bst, low, mid-1);
		root->right = convert(bst, mid+1, high);
		return root;
	}
	return NULL:
}