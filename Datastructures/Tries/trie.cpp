class trienode{
public:
	bool isword;
	trienode * children[26];

	trienode(){
		isword = false;
		for(int i = 0; i < 26; i++) children[i] = NULL;
	}
};

void insert(trienode * root, string s){
	for(int i = 0; i < s.length();i++){
		if(root->children[s[i] - 'a'] == NULL){
			root->children[s[i] - 'a'] = new trienode();
		}
		root = root->children[s[i] - 'a'];
	}
	root->isword = true;
}