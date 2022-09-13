class solution{
public:
	TreeNode* bstfrompreorder(vector<int>& order){
		int i = 0;
		return build(order, i, INT_MAX);
	}

	TreeNode* build(vector<int>& order, int& i, int bound){
		if(i == order.size() || order[i] > bound) return NULL;
		TreeNode* root =  new TreeNode(order[i++]);
		root->left = build(order, i, root->val);
		root->right = build(order, i, bound);
		return root;
	}
}