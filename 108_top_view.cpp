class Solution {
public:
	vector <int> bottomView(Node *root) {
		vector<int>ans;
		if(root == NULL) return ans;
		map<int,int>mpp;
		queue<pair<Node*, int>>q;
		q.push({root, 0});
		while(!q.empty()){
			auto it = q.front();
			q.pop();
			Node* node = it.first;
			int line = it.second;
			if(mpp.find(line) == mpp.end()) mpp[line] = node->data;
			if(root->left) q.push({node->left, line-1});
			if(root->right) q.push({node->right, line+1});
		}

		for(auto x:mpp){
			ans.push_back(x);
		}
		return ans;
	}
};