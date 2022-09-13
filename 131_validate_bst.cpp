class solution {
	public:
		boolean isvalidBST(TreeNode* root){
			return isvalidBST(root, LONG_MIN, LONG_MAX);
		}

		boolean isvalidBST(TreeNode* root, long minval, long maxxval){
			if(root == null) return true;
			if(root->val >= maxxval || root->val <= minval) return false;
			return isvalidBST(root->left, minval, root->val) && isvalidBST(root->right, root->val, maxval);
		}
}