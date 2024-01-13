# Data Structure

### What is a Data Structure?
a data structure is a way of organizing data so that it can be used effectively.

### Why Data Structures?

They are essential ingredients in creating fast and powerful algorithms.

They halp to  manage and organize data.

They make code cleaner and easier to understand.

## Abstract Data Type

An abstract data type (ADT) is an abstraction of a data structure which provides only the interface to which a data structure must adhere to.

The interface does not give any specific details about how something should be implemented or in what programming language.

### Examples

| **Abstraction** (ADT) | **Implementation** (DS)                                               |
|-------------------|-------------------------------------------------------------------|
| List              | Dynamic Array<br>Linked List                                      |
| Queue             | Linked List Based Queue<br>Array Based Queue<br>Stack Bases Queue |
| Map               | Tree Map<br>Hash Map/Hash Table                                   |
| Vehicle           | Golf Cart<br>Bicycle<br>Smart Car                                 |

# Computational Complexity Analysis

We need a way to measure the amount of relative time and space that algorithms take up.

## Big-O

### Notation

Gives an upper bound of the complexity in the worst case, helping to quantify performance as the input size becomes arbitrarily large.

| **Time**     | **Big-O**     |
|--------------|---------------|
| Constant:    | O(1)          |
| Logarithmic  | O(log(n))     |
| Linear       | O(n)          |
| Linearithmic | O(nlog(n))    |
| Quadric      | O(n^2)        |
| Cubic        | O(n^3)        |
| Quartic:     | O(n^4)        |
| Exponential: | O(b^n), b > 1 |
| Factorial:   | O(n!)         |

### Properties

Big-O only cares about the upper limit.  This means that constants and additional factors dont matter.  Always look for the largest expression in the set, as it will dominate all others as the data infinitely scales.

Let f be a function that describes the running time of a particular algorithm for an input of size n:

```
f(n) = 7log(n)^3 + 15n^2 + 2n^3 + 8

O(f(n)) = O(n^3)
```

### Examples

- Constant Time:

```
a := 1
b := 2
c := a + 5*b
~~~~~~~~~~~~~~

i := 0
While i < 11 Do
i = i + 1
```

- Linear Time:

```java
i := 0
While i < n Do
    i = i + 1

    f(n) = n
  O(f(n)) = O(n)
~~~~~~~~~~~~~~~~~

  i := 0
  While i < n Do
    i = i + 3

    f(n) = n/3
 O(f(n)) = O(n)
```

- Quadratic time

```java
For (i := 0; i < n; i++)
    For (j := 0; j < n; j++)

f(n) = n*n = n^2, O(f(n)) = O(n^2)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

For (i := 0; i <n; i++)
    For (j := i; j < n; j++)

f(n) = n*n = n^2, O(f(n)) = O(n^2)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

i := 0
While i < n Do
    j = 0
    While j < 3*n Do
        j = j + 1
    j = 0
    While j < 2*n Do
        j = j + 1
    i = i + 1
```

- Logrithmic time

```java
low := 0
high := n-1
While low <= high Do
    mid := (low + high) / 2

    If array[mid] == value: return mid
    Else If array[mid] < value: lo = mid +1
    Else If array[mid] > value: hi = mid -1

return -1 // Value not found
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
```

- Quartic Time

```java
i := 0
While i < 3 * n Do
    j := 10
    While j <= 50 Do
        j = j + 1
    j = 0
    While j < n*n*n Do
        j = j + 2
    i = i + 1
```

- More Examples:

| **algorithm**                                           | **Big-O**  |
|---------------------------------------------------------|------------|
| Finding all subsets of a set                            | O(2^n)     |
| Finding all permutations of a string                    | O(n!)      |
| Sorting using mergesort                                 | O(nlog(n)) |
| Iterating over all the cells in a matrix of size n by m | O(nm)      |

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