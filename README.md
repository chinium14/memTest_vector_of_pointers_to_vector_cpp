# memTest_vector_of_pointers_to_vector_cpp

A simple c++ testing code for memory check of a vector of pointers to vector using valgrind. It could be used as a template for simple memory check of similar code structures. 

Compile:

g++ -o \<exe\> test_vec_mem.cpp
  
Use:

valgrind --leak-check=yes ./\<exe\>
