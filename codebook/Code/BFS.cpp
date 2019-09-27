void BFS(){
	Graph[][]
	visited[][] = {}
	FirstNode
	queue Q
	Q.push(FirstNode)
	while(!Q.empty){
		currentNode = Q.pop()
		if(currentNode == targetNode)break //find target
		if(!visited[currentNode]){
			visited[currentNode] = true
			for(all nextNode){
				if(nextNode && !visited[nextNode])
					Q.push(nextNode)
			}
		}
	}
}