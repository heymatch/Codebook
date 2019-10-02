int LCM(int a, int b){
	return a / GCD(b, a%b) * b;
}