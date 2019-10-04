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
void change(int m){
	memset(c, 0, sizeof(c))
	c[0] = 1;
	for(all i in n)	//all coin
		for(all j from price[i] to m)	//all target money
			c[j] += c[j-price[i]]
	print m //target money
	print c[m] //kinds
}
