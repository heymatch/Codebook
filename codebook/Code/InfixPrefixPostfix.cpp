//equation from infix to postfix
void convertInfixToPostfix(){
	setOperatorPriority() //0 is the largest
	stack op
	char input[]
	char output[]
	int index
	for(all i in input){
		if(input[i] == NUMBER){
			output[index++] = input[i]
		}
		else if(input[i] == '(')
			op.push(input[i])
		else if(input[i] == ')'){
			while(op.top() != '('){
				output[index++] = op.pop()
			}
			op.pop();
		}
		else if(input[i] == OPERATOR){
			if(op.empty()){
				op.push(input[i])
			}
			else{
				while(Priority[op.top()] < Priority[input[i]])	//op.top >= input[i]
				{
					output[index++] = op.pop()
				}
				op.push(input[i])
			}
		}
	}
	while(!op.empty())
		output[index++] = op,pop()
}