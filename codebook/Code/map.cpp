//template
template <class key_type, class mapped_type>
typedef pair<key_type, mapped_type> value_type
//init
map <key_type, mapped_type>
//iterator
iterator begin()
iterator end()
//capacity
size_type size()
bool empty()
//access
mapped_type& operator[](key_type)
map<key_type, mapped_type>::iterator->first //key value
map<key_type, mapped_type>::iterator->second // mapped value
//oprations
iterator find(key_type)
size_type count(key_type)
//modifiers
pair<iterator, bool> insert(pair<key_type, mapped_type>(key_type, mapped_type))
size_type erase(key_type)
