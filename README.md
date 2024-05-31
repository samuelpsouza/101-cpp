# Learning C/C++

In this repo, all the code that I have written when I was studying and perfecting my knowledge in C/C++. I used several books and lectures which I listed below.

- [Introdução a Estruturas de Dados com técnicas de programação em C](https://www.amazon.com.br/Introdu%C3%A7%C3%A3o-Estrutura-Dados-Waldemar-Celes/dp/8535212280)
- [Data Structures And Algorithm Analysis](https://people.cs.vt.edu/shaffer/Book/JAVA3elatest.pdf)
- Based on https://github.com/jwasham/coding-interview-university.


- ### Arrays

- [ ] Implement a vector (mutable array with automatic resizing):

    - [x] Practice coding using arrays and pointers, and pointer math to jump to an index instead of using indexing.
    - [x] New raw data array with allocated memory
         - can allocate int array under the hood, just not use its features
         - start with 16, or if the starting number is greater, use power of 2 - 16, 32, 64, 128
    - [x] size() - number of items
    - [x] capacity() - number of items it can hold
    - [x] is_empty()
    - [x] at(index) - returns the item at a given index, blows up if index out of bounds
    - [x] push(item)
    - [x] insert(index, item) - inserts item at index, shifts that index's value and trailing elements to the right
    - [x] prepend(item) - can use insert above at index 0
    - [x] pop() - remove from end, return value
    - [x] delete(index) - delete item at index, shifting all trailing elements left
    - [ ] remove(item) - looks for value and removes index holding it (even if in multiple places)
    - [x] find(item) - looks for value and returns first index with that value, -1 if not found
    - [x] resize(new_capacity) // private function
         - when you reach capacity, resize to double the size
         - when popping an item, if the size is 1/4 of capacity, resize to half
    - [ ] Time
        - O(1) to add/remove at end (amortized for allocations for more space), index, or update
        - O(n) to insert/remove elsewhere
    - [ ] Space
        - contiguous in memory, so proximity helps performance
        - space needed = (array capacity, which is >= n) * size of item, but even if 2n, still O(n)

- ### Linked Lists

    - [ ] Implement (I did with tail pointer & without):
        - [x] size() - returns the number of data elements in the list
        - [x] empty() - bool returns true if empty
        - [ ] value_at(index) - returns the value of the nth item (starting at 0 for first)
        - [ ] push_front(value) - adds an item to the front of the list
        - [ ] pop_front() - remove the front item and return its value
        - [ ] push_back(value) - adds an item at the end
        - [ ] pop_back() - removes end item and returns its value
        - [ ] front() - get the value of the front item
        - [ ] back() - get the value of the end item
        - [ ] insert(index, value) - insert value at index, so the current item at that index is pointed to by the new item at the index
        - [ ] erase(index) - removes node at given index
        - [ ] value_n_from_end(n) - returns the value of the node at the nth position from the end of the list
        - [ ] reverse() - reverses the list
        - [ ] remove_value(value) - removes the first item in the list with this value

- ### Stacks

- ### Trees
