## Dynamic Array Operations
A dynamic array is a resizable array data structure that allocates memory at runtime. Unlike a static array, the size of a dynamic array can be changed during the execution of a program.

Here are the common operations that can be performed on a dynamic array:

## Create a Dynamic Array
To create a dynamic array, you need to allocate memory using the new operator in C++ or the malloc() function in C. The size of the array can be specified as an argument to the new operator or malloc() function.

Here's an example of creating a dynamic array of integers in C++:
``` c++
int* arr = new int[10]; // create a dynamic array of 10 integers
```
Here's an example of creating a dynamic array of integers in C:
``` c
int* arr = (int*) malloc(10 * sizeof(int)); // create a dynamic array of 10 integers
```
## Access Elements of a Dynamic Array
You can access elements of a dynamic array using the indexing operator [] in the same way as a static array.
Here's an example of accessing an element of a dynamic array in C++:
``` c++
int* arr = new int[10];
arr[0] = 1; // assign 1 to the first element of the array
int x = arr[0]; // access the first element of the array
```
## Resize a Dynamic Array
To resize a dynamic array, you need to allocate a new block of memory with the new size and copy the elements of the old array to the new array. Then, you can deallocate the old memory and use the new memory as the new array.
Here's an example of resizing a dynamic array of integers in C++:
``` c++
int* arr = new int[10]; // create a dynamic array of 10 integers
// resize the array to 20 integers
int* new_arr = new int[20];
for (int i = 0; i < 10; i++) {
    new_arr[i] = arr[i]; // copy elements of the old array to the new array
}
delete[] arr; // deallocate the old memory
arr = new_arr; // use the new memory as the new array
```
## Insert an Element in a Dynamic Array
To insert an element in a dynamic array, you need to resize the array to make room for the new element, shift the elements after the insertion point to the right, and then insert the new element at the insertion point.
Here's an example of inserting an element in a dynamic array of integers in C++:
``` c++
// insert 5 at index 2
int size = 10;
int index = 2;
int value = 5;
int* new_arr = new int[size + 1]; // resize the array
for (int i = 0; i < index; i++) {
new_arr[i] = arr[i]; // copy elements before the insertion point
}
new_arr[index] = value; // insert the new element
for (int i = index + 1; i < size + 1; i++) {
new_arr[i] = arr[i - 1]; // copy elements after the insertion point
}
delete[] arr; // deallocate the old memory
arr = new_arr; // use the new memory as the new array

```

## Delete an Element from a Dynamic Array
To delete an element from a dynamic array, you need to shift the elements after the deletion point to the left and then resize the array to remove the last element.
Here's an example of deleting an element from a dynamic array of integers in C++:
``` c++
int* arr = new int[10]; // create a dynamic array of 10 integers
// delete the element at index 2
int size = 10;
int index = 2;
for (int i = index + 1; i < size; i++) {
    arr[i - 1] = arr[i]; // shift elements after the deletion point to the left
}
int* new_arr = new int[size - 1]; // resize the array
for (int i = 0; i < size - 1; i++) {
    new_arr[i] = arr[i]; // copy elements to the new array
}
delete[] arr; // deallocate the old memory
arr = new_arr; // use the new memory as the new array
```
