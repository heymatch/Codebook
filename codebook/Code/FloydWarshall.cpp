void Floyd_Warshall(){
	INF
	int Graph[][] //edge length
	
	for(all i, j)
		if(i == j)
			Graph[i][j] = 0
		else
			Graph[i][j] = INF
	read Graph
	for(all i, j, k)
		Graph[i][j] = min(Graph[i][j], Graph[i][k] + Graph[k][j])
	
	print Graph[x][y] //get shortest path form x to y
}

