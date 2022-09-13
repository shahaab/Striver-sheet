vector<int>traversal(TreeNode* root){
	vector<int>zigzag;
	bool flag = 0;
	queue<TreeNode*> q;
	q.push(root);
	while(!q.empty()){
		int size = q.size();
		vector<int>row(size);
		for(int i = 0; i < size; i++){
			TreeNode* curr = q.front();
			q.pop();
			int index = flag ? i : (size - 1 - i);
			row[index] = node -> val;
			if(curr->left) q.push(curr->left);
			if(curr->right) q.push(curr->right);
		}
		flag = !flag;
		result.push_back(row);
	}
	return result;
}