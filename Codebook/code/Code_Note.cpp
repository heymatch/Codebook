int GCD(int a, int b){
	return b == 0 ? a : GCD(b, a % b);
}

int LCM(int a, int b){
	return a / GCD(b, a % b) * b;
}

// Find shortest path
void BFS(Graph, visited, FirstNode){
	queue Q
	Q.push(FirstNode)
	while(!Q.empty){
		currentNode = Q.pop()
		if(currentNode == targetNode)break //find target
		if(!visited[currentNode]){
			visited[currentNode] = true
			for(all nextNode){
				if(!visited[nextNode])
					Q.push(nextNode)
			}
		}
	}
}

void BellmanFord(){
	e = edge.size();
	fill(best, best+e, NIL);
	best[0] = 0;
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < e; ++j)
			if(best[edge[j].to] > best[edge[j].from] + edge[j].weight)
				best[edge[j].to] = best[edge[j].from] + edge[j].weight;
	for(int j = 0; j < e; ++j)
		if(best[edge[j].to] > best[edge[j].from] + edge[j].weight){
			indefinitely = false;
			break;
		}
}

int CeilIndex(int A[], int tail[], int low, int high, int key){
	while(high-low > 1){
		int mid = (high + low) / 2;
		if(A[tail[mid]] >= key)
			high = mid;
		else 
			low = mid;
	}
	return high;
}

// Dijkstra
struct node{
	int id,len;
	node(int n, int weight) : id(n), len(weight){};
	bool operator<(const node &right) const{return id > right.id;}
};

// Using a priority queue
void Dijkstra(){
	best[E] = 0;
	que.push(node(E, 0));
	while(!que.empty()){
		node cur = que.top();
		que.pop();
		for(int i = 0; i < num[cur.id]; ++i){
			if(best[path[cur.id][i]] > cur.len + w[cur.id][path[cur.id][i]]){
				best[path[cur.id][i]] = cur.len + w[cur.id][path[cur.id][i]];
				que.push(node(path[cur.id][i], best[path[cur.id][i]]));
			}
		}
	}
}

#define INF 0xFFFFFFFF
void FloydWarshall(Graph){
	for i = 0 to size
		for j = 0 to size
			for k = 0 to size
				Graph[i][j] = min(Graph[i][j], Graph[i][k] + Graph[k][j]);
	print Graph[x][y] //get shortest path from x to y
}

bool NeagtiveCycle(){
	for(int i = 0; i < V; ++i){
		if(dist[i][i] < 0)
			return ture;
	}
	return false;
}

/*
	0/1 Knapsack Problem
	recursive function	:	c(n, w) = max(c(n-1, w), c(n-1, w-weight[n] + cost[n]))
	c(n, w)	:	knapsack problem answer
	n	:	from item 0_th to n_th
	w	:	max_weight
	weight[n]	:	weight of item n
	cost[n]	:	cost of item n
*/
//bottom up
void knapsack(int n, int w){
	memset(c, 0, sizeof(c))
	for(all i in n)	//all item
		for(all j in w)	//all weight
			if(j - weight[i] < 0)
				c[i+1][j] = c[i][j]
			else
				c[i+1][j] = max(c[i+1][j], j-weight[i]+cost[i])
	print c[n][w] //the highest value
}

/*
	Coin Change Problem
	recursive function	:	c(n, m) = c(n-1, m) + c(n-1, m-price[n])
	c(n, m)	:	coin change problem answer
	n	:	from coin 0_th to n_th
	m	:	target money
	price[n]	:	coin price
*/
//bottom up
void coinChange(int m){
	memset(c, 0, sizeof(c))
	c[0] = 1;
	for(all i in n)	//all coin
		for(all j from price[i] to m)	//all target money
			c[j] += c[j-price[i]]
	print m //target money
	print c[m] //kinds
}

/*
	Knapsack/Coin Problem - Algorithm
	first loop is item
	Second loop is capacity (weight/value target)
	Third loop(only appear in item limit case) = max(number amount, now value/this value)
	
	backpack structure:
	Struct {weight,cost}
	
	w-weight[n] meaning I push this I item
	n-1 meaning look forward
	
	Code:
	c[i] = max (c[i],c[i - weight[n]] + cost[n]) - consider value
	c[i] = max (c[i],c[i - weight[n]] +1) - consider amount of item
	way[j] += way[j - weight[i]] - consider ways
	
	Coin (like as backpack):
	Code:
	c[j] += c[j-price[i]]; << ways
	c[j] = min(c[j], c[j-price[i]] + 1); - min amount of coin
*/


int LongestIncreasingSubsequence(int A[], int n){
	if(n == 0) return 0;
	int *tail = new int[n+1];
	int *prev = new int[n+1];

	int length = 1;
	tail[1] = 1;
	for(int i = 2; i <= n; ++i){
		if(A[i] < A[tail[1]])
			tail[1] = i;
		else if(A[i] > A[tail[length]]){
			prev[i] = tail[length];
			tail[++length] = i;
		}
		else{
			int position = CeilIndex(A, tail, 1, length, A[i]);
			prev[i] = tail[position-1];
			tail[position] = i;
		}
	}
}

int max1DRangeSum(int column[]{
	int globalMax = column[1];
	int localMax = column[1];
	for(int i = 2; i <= m; i++){
		localMax = max(column[i], localMax + column[i]);
		if(globalMax < localMax)
			globalMax = localMax;
	}
	return globalMax;
}

int max2DRangeSum(int A[][n+1]){
	for(int l = 1; l < n; ++left){
		memset(rowSum, 0, sizeof(rowSum));
		for(int r = left; r <= n; ++right){
			for(int i = 1; i <= m; ++i)
				rowSum[i] += A[i][r];
			localMax = max1DRangeSum(rowSum);
			if(globalMax < localMax)
				globalMax = localMax;
		}
	}
}

int find(int a){
	return a = (p[a] == a) ? a : (p[a] = find(p[a]));
}

void Union(int a, int b){
	p[find(a)] = find(b);
}