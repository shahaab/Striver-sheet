vector<int>level(root* node){
	vector<int>order;
	queue<node*>q;
	q.push(node);
	while(!q.empty){
		auto it = q.front();
		q.pop();
		order.push_back(it);
		if(it->left) q.push(it->left);
		if(it->right) q.push(it->right);
	}
	return order;
}