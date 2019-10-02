void Floyd_Warshall(){
	INF
	int Graph[][] //edge length
	int distance[]
	bool visit[]
	
	for(all i, j)
		if(i == j)
			Graph[i][j] = 0
		else
			Graph[i][j] = INF
	read Graph
	read keypoint
	for(all i)
		distance[i] = e[keypoint][i];
	
	visit[keypoint] = true
	for(all i){
		minimum = INF
		int u
		for(all j){
			if(!visit[j] && distance[j] < min){
				min = distance[j];
				u = j
			}
		}
		visit[u] = true;
		for(all v){
			if(Graph[u][v] < INF && distance[v] > distance[u] + Graph[u][v])
				distance[v] = distance[u] + Graph[u][v]
		}
	}
	
	print distance[x] //get shortest path from keypoint to x
}

