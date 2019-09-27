//template
template <class value_type>
//init
priority_queue <value_type> //priority larger
priority_queue <value_type, vector<value_type>, greater<value_type> > // priority smaller
//capacity
size_type size()
bool empty()
//access
reference top()
//modifiers
void push(value_type)
void pop()
