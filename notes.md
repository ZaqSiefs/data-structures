# Overview

## What is a Data Structure?
a data structure is a way of organizing data so that it can be used effectively.

## Why Data Structures?

They are essential ingredients in creating fast and powerful algorithms.

They halp to  manage and organize data.

They make code cleaner and easier to understand.

# Classifications

![Data Structure Tree](/img/Data%20Structure%20Tree.jpeg)

## Linear Data Structure

Data structure in which data elements are arranged sequentially or linearly, where each element is attatched to its previous and next adjacent elements.

### Static data structure

Has a fixed memory size. It is easier to access the elements.

**example**: ```array```

### Dynamic data structure

size is not fixed. Can be randomly updated during the runtime which may be considered efficient concerning the memory (space) complexity of the code.

**examples**: ```queue```, ```stack```, ```linked-list```

## Non-linear Data Structure

Data elements are not placed sequentially or linearly. Cannot traverse all the elements in a single run only.

**examples**: ```Tree```, ```Graph```

### Abstract Data Type

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