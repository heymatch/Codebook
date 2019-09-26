//template
template <class size_t>
//init
bitset <size_t>(unsigned long long)
bitset <size_t>(string)
bitset <size_t>(char *)
//access
bool operator[](size_t) const
reference operator[](size_t)
size_t count() // return the number of 1
size_t size() // size()-count() = return the number of 0
bool any()
bool none()
//operations
reference set() //all
reference set(size_t, bool) //single
reference reset() //all
reference reset(size_t) //single
string to_string()
unsigned long to_ulong()
unsigned long long to_ullong()
