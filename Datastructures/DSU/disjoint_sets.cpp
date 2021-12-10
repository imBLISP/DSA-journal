int par[1000]; // heights stored in negative
int find(int v){return par[v] < 0 ? v : (par[v] = find(par[v]));}
void merge(int x,int y){	//	x and y are some tools (vertices)
        if((x = find(x)) == (y = find(y))     return ;
	if(par[y] < par[x])	// balancing the height of the tree, if height of y is greater than x
		swap(x, y);
	par[x] += par[y];
	par[y] = x;    
}