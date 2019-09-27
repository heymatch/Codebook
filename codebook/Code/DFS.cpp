void DFS(){
	Graph[][]
	visited[][] = {}
	FirstNode
	stack S
	S.push(FirstNode)
	while(!S.empty){
		currentNode = S.pop()
		if(currentNode == targetNode)break //find target
		if(!visited[currentNode]){
			visited[currentNode] = true
			for(all nextNode){
				if(nextNode && !visited[nextNode])
					S.push(nextNode)
			}
		}
	}
}