// calloc() function is used to dynamically allocate multiple block of memory
// It is different from malloc in two ways
// 1. It requires two arguments instead of just one
//    Syntax: void *calloc(size_t n,size_t size);
//    eg:     int *ptr = (int*)calloc(10,sizeof(int))
// 2. Memory alocated by calloc is initialized to zero

// calloc stands for clear allocation and malloc stands for memory allocation