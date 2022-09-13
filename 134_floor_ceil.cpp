int ciel(node* root, int input){
	if(root == nullptr) return -1;
	if(root->key == input) return root->key;
	if(root->key < input) return ceil(root->right, input);

	int ciel = ceil(root->left, input);
	return (ceil >= input) ? ceil : root->key;
}

int floor(node* root, int input){
	if(root == nullptr) return -1;
	if(root->key == input) return root->key;
	if(root->key > input) return floor(root->left, input);
	else{
		int floor = floor(root->right, input);
		return (floor <= input && floor != -1) ? floor : root->key;
	}
}


while(root){
	if(root->data == key){
		ceil = root->data;
		floor = root->data;
		return;
	}

	if(key > root->data){
		floor = root->data;
		root = root->right;
	}else{
		ceil = root->data;
		root = root->left;
	}
}
return;