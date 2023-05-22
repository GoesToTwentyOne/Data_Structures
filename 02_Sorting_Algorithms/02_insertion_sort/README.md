Sure! Here's the information on Insertion Sort again:

# Insertion Sort

Insertion sort is a simple comparison-based sorting algorithm. It builds the final sorted array one item at a time, by iteratively inserting each unsorted element into its correct position within the sorted portion of the array.

## Example

Let's consider an example to understand how insertion sort works. Suppose we have an array of numbers: [5, 2, 4, 6, 1, 3]. Here are the steps taken by insertion sort to sort this array:

1. Start with the second element (2) and compare it with the first element (5). Since 2 is smaller, swap their positions. The array becomes [2, 5, 4, 6, 1, 3].
2. Move to the third element (4) and compare it with the second element (5). Since 4 is smaller, swap their positions. The array becomes [2, 4, 5, 6, 1, 3].
3. Move to the fourth element (6) and compare it with the third element (5). Since 6 is greater, no swap is needed. The array remains [2, 4, 5, 6, 1, 3].
4. Move to the fifth element (1) and compare it with the fourth element (6). Since 1 is smaller, swap their positions. The array becomes [2, 4, 5, 1, 6, 3].
5. Move to the sixth element (3) and compare it with the fifth element (6). Since 3 is smaller, swap their positions. The array becomes [2, 4, 5, 1, 3, 6].
6. Repeat the above steps until all elements are in their correct positions. The sorted array is [1, 2, 3, 4, 5, 6].

## How It Works

Insertion sort works by dividing the input array into two parts: a sorted portion and an unsorted portion. Initially, the sorted portion consists of only the first element, and the unsorted portion contains the remaining elements.

The algorithm iterates over the unsorted portion, taking one element at a time and inserting it into its correct position within the sorted portion. To insert an element, it compares it with each element in the sorted portion, shifting the larger elements one position to the right until it finds the correct position to insert the element.

This process continues until the entire array is sorted.

## Complexity Analysis

The time complexity of the insertion sort algorithm is O(n^2) in the worst case and average case, where n is the number of elements in the array. This is because for each element, it may need to compare and shift all previous elements in the worst case.

The best case time complexity is O(n) when the input array is already sorted. In this case, the algorithm only needs to make n-1 comparisons and no element shifts.

The space complexity is O(1) since insertion sort performs sorting in-place, requiring only a constant amount of additional space.

## Advantages

- Simple implementation and easy to understand.
- Efficient for small input sizes or partially sorted arrays.
- Performs well for nearly sorted or almost sorted data.

## Disadvantages

- Inefficient for large input sizes or highly unsorted arrays.
- Comparatively slower than more advanced sorting algorithms like merge sort or quicksort.
- The time complexity is quadratic, making it less suitable for large-scale sorting tasks.

## Algorithm

The algorithm for insertion sort can be described as follows:

1. Iterate from the second element to the last element of the array.
2. For

 each element, compare it with each element in the sorted portion of the array, moving larger elements one position to the right until the correct position is found.
3. Insert the element into its correct position within the sorted portion.
4. Repeat steps 2-3 until all elements are in their correct positions.

## Pseudocode

Here's a pseudocode representation of the insertion sort algorithm:

```
function insertionSort(array):
    for i = 1 to length(array) - 1 do
        currentElement = array[i]
        j = i - 1
        while j >= 0 and array[j] > currentElement do
            array[j + 1] = array[j]
            j = j - 1
        end while
        array[j + 1] = currentElement
    end for
end function
```

## Limitation of Insertion Sort

While insertion sort has its advantages, it also has certain limitations:

- Inefficient for large data sets: The quadratic time complexity of insertion sort makes it inefficient for sorting large arrays compared to more advanced algorithms such as merge sort or quicksort.
- Lack of adaptability: Insertion sort's performance does not improve significantly when given a partially sorted array, unlike algorithms like merge sort or insertion sort, which have adaptability to handle such scenarios more efficiently.
- Not suitable for parallel processing: Insertion sort's sequential nature does not lend itself well to parallelization, limiting its scalability on parallel computing architectures.

It is essential to consider the characteristics of the input data and the specific requirements of a problem before choosing insertion sort as the sorting algorithm.
