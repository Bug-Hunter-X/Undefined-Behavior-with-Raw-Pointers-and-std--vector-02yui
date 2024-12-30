std::vector<int> vec = {1, 2, 3};
int *ptr = &vec[0];
vec.push_back(4); // This may invalidate the pointer ptr
int val = *ptr; // Undefined behavior if vec reallocated