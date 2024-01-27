# Properties
- aka list
- linear
- collection of homogeneous data types where the elements are allocated contiguous memory
- any element of an array can be accessed in constant time
- 

# Static and Dynamic Arrays

## Complexity

|           | **Static Array** | **Dynamic Array** |
|-----------|------------------|-------------------|
| Access    | O(1)             | O(1)              |
| Search    | O(n)             | O(n)              |
| Insertion | N/A              | O(n)              |
| Appending | N/A              | O(1)              |
| Deletion  | N/A              | O(n)              |

## Static Array

A static array is a fixed length container containing n elements indexable(can be referenced with a number) from the range [0, n-1].

Contiguous chunks of memory, with all memory addresses being adjacent to eachother

### When are they used?

1. Storing and accessing sequential data
2. Temporarily storing objects
3. used by IO routines as buffers
4. Lookup tables and inverse lookup tables
5. Can be used to return multiple values from a function
6. Used in dynamic programming to cache answers to subproblems

### Structure

| A =       | 44 | 12 | -5 | 17 | 6 | 0 | 3 | 9 | 100 |
|-----------|----|----|----|----|---|---|---|---|-----|
| (index) = | 0  | 1  | 2  | 3  | 4 | 5 | 6 | 7 | 8   |

Elements in *A* are referenced by their index. There is no other way to access elements in an array.  Array indexing is zero-based, meaning the first element is found in position zero.

## Dynamic Arrays

They can grow and shrink in size.

|   Methods   | Array | [0] | [1] | [2] | [3] |
|:-----------:|:-----:|:---:|:---:|:---:|:---:|
|             |  A =  |  34 |  4  |     |     |
|  A.add(-7)  |  A =  |  34 |  4  |  -7 |     |
|  A.add(34)  |  A =  |  34 |  4  |  -7 |  34 |
| A.remove(4) |  A =  |  34 |  -7 |  34 |     |

### How to implement

Could use a static array

1. Create a static array with an initial capacity.
2. Add elements to the underlying static array, keeping track of the number of elements.
3. If adding another element will exceed the capacity, then create a new static array with twice the capacity and copy the original elements into it.