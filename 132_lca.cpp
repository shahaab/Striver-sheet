class solution{
public: 
	TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q){
		if(root->val > p->val) && (root->val > q->val)
			return lca(root->left, p, q);
		if(root->val < q->val) && (root->val < p->val)
			return lca(root->right, p, q);
		return root;
	}
}