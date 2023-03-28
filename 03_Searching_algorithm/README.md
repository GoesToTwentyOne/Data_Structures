## What is Linear Search?

Linear search is a search algorithm that goes through each element in the list one by one, until it finds the desired element or reaches the end of the list. It is also known as a sequential search. Linear search is an easy and simple search algorithm, but it is not the most efficient way to search a list.

## How Does Linear Search Work?

Linear search works by starting from the beginning of the list and comparing each element in the list to the element being searched for. If the element is found, the search is complete. If the element is not found, the search continues until the end of the list.

## Advantages and Disadvantages of Linear Search

The biggest advantage of linear search is its simplicity. It is also relatively fast if the list is short. However, it is not the most efficient way to search a list, and it becomes increasingly slower as the list grows.

## Visual Representation

The following graph shows a linear search algorithm in action. The red line is the element being searched for and the blue lines indicate the elements in the list.

![Linear Search Example]([https://upload.wikimedia.org/wikipedia/commons/5/5a/Linear_search.png](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Linear-Search.png))

##  Linear Search algorithm
Linear Search ( Array A, Value x)
Step 1: Set i to 1
Step 2: if i > n then go to step 7
Step 3: if A[i] = x then go to step 6
Step 4: Set i to i + 1
Step 5: Go to Step 2
Step 6: Print Element x Found at index i and go to step 8
Step 7: Print element not found
Step 8: Exit

## Conclusion

Linear search is a simple and easy to understand search algorithm, but it is not the most efficient way to search a list. It should be used only when the list is short and the element being searched for is likely to be near the beginning of the list.


## What is Binary Search?

Binary search is a search algorithm that uses a divide-and-conquer strategy to find an element in a given list. It starts by comparing the element to the middle element in the list. If the element is not found, the search will either move up or down the list depending on whether the element is greater or less than the middle element. This process is repeated until the element is found or the list is exhausted.

## How Does Binary Search Work?

Binary search works by selecting the middle element of the list and comparing it to the element being searched for. If the element is found, the search is complete. If the element is not found, the search will move up or down the list depending on whether the element is greater or less than the middle element. This process is repeated until the element is found or the list is exhausted.

## Advantages and Disadvantages of Binary Search

The biggest advantage of binary search is its efficiency. Binary search is much faster than linear search, especially when the list is long. However, binary search requires that the list is sorted before searching, which can be time consuming.

## Visual Representation

The following graph shows a binary search algorithm in action. The red line is the element being searched for and the blue lines indicate the elements in the list.

![Binary Search Example](https://upload.wikimedia.org/wikipedia/commons/8/83/Binary_Search_Depiction.svg)

## Binary search algorithm
Step 1 − Start searching data from middle of the list.
Step 2 − If it is a match, return the index of the item, and exit.
Step 3 − If it is not a match, probe position.
Step 4 − Divide the list using probing formula and find the new midle.
Step 5 − If data is greater than middle, search in higher sub-list.
Step 6 − If data is smaller than middle, search in lower sub-list.
Step 7 − Repeat until match.

## Conclusion

Binary search is a fast and efficient search algorithm, but it requires that the list is sorted before searching. It should be used when the list is long and the element being searched for is likely to be near the middle of the list.