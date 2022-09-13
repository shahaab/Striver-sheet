TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
	map<int,int> inMap;
	for(int i = 0; i < preorder.size(); i++){
		inMap[preorder[i]] = i;
	}

	TreeNode* root = buildTree(preorder, 0, preorder.size()-1, 
								inorder, 0, inorder.size()-1, inMap);
	return root;
}


TreeNode* buildTree(vector<int>& preorder, int prestart, int preend,
			vector<int>&inorder, int instart, int inend, map<int, int>inMap){
	if(prestart > preend || instart > inend) return NULL;

	TreeNode* root = new TreeNode(preorder[prestart]);

	int inroot = inMap[root->val];
	int numsleft = inroot - instart;

	root->left = buildTree(preorder,prestart+1, prestart+numsleft,
								inorder, instart, inroot-1,inMap);
	root->right = buildTree(preorder, prestart+numsleft+1, preend,
								inorder, inroot+1, inend, inMap);
	return root;
}