
**Basic terminologies:**

**Data** are simply values or sets of values. A data item refers to a single unit of values. **Data**, in the context of computing, refers to distinct pieces of digital information. Data is usually formatted in a specific way and can exist in a variety of forms, such as numbers, text, etc. When used in the context of transmission media, data refers to information in binary digital format.

**Group Item**: Data items that are divided into sub items are called Group item. For example employee’s names divided into three sub items- First name, Middle name and Last name.

**Elementary Item:** Data items that are not divided into sub items are called Elementary items. But social security numbers of employee are not divided into sub items.

**Attribute/ Field:** Attribute/ Filed is a single elementary unit of information representing an attribute of an entity. Example: Name, Age, Gender e.t.c.

**Entity/Record:** Entity/Record is something that has certain attributes or properties which may be assigned values. The values themselves may be either numeric or nonnumeric. For example, the following are possible attributes and their corresponding values for an entity, an employee of a given organization.

**Data Structures:**

**Data Structure** is the mathematical or logical model of a particular organization of data is called a data structure. **Data Structure** is a way of collecting and organizing data in such a way that we can perform operations on these data in an effective way. Data Structures is about rendering data elements in terms of some relationship, for better organization and storage. For example, we have some data which has, player's **name** "Abed" and **age** 26. Here "Abed" is of **String** data type and 26 is of **integer** data type.

We can organize this data as a record like **Player** record, which will have both player's name and age in it. Now we can collect and store player's records in a file or database as a data structure. **For example**: "Dinar" 30, "Gazi" 31, "Tamim" 33.

If you are aware of Object Oriented programming concepts, then a class also does the same thing, it collects different type of data under one single entity. The only difference being, data structures provides for techniques to access and manipulate data efficiently.

In simple language, Data Structures are structures programmed to store ordered data, so that various operations can be performed on it easily. It represents the knowledge of data to be organized in memory. It should be designed and implemented in such a way that it reduces the complexity and increases the efficiency.


**Different Types of Data Structures:**

There are different types of Data Structures, like arrays, linked lists, trees etc. This is because some type of data structures are efficient in a particular application than others. Like, say, if we want to store a series of number which are of fixed size, we would use an array. And also, it is important for us to get faster access of data. Hence forth, some data structures have faster access like in case of AVL Trees were we make sure that the tree is balanced so that access time is less. We are more concerned about this 'time complexity' because, in real life situations, accessing big chunks of data would take a long time and hence we need better algorithms (Data Structures) for faster access.

Mainly Data Structures are two types:

1) Primitive Data Structures
1) Non- Primitive Data Structures
***
![](./23_Media/data_types.jpg)
***


**i) Primitive Data Structures:** The term "data type" and "primitive data type" are often used interchangeably. Primitive data types are predefined types of data, which are supported by the programming language. For example, integer, character, and string are all primitive data types. Programmers can use these data types when creating variables in their programs. For example, a programmer may create a variable called "last name" and define it as a string data type. The variable will then store data as a string of characters.

Types of Primitive Data Structure:

**ii) Non- Primitive Data Structures:** Non-primitive data types are not defined by the programming language, but are instead created by the programmer. They are sometimes called "reference variables," or "object references," since they reference a memory location, which stores the data. In the Java programming language, non-primitive data types are simply called "objects" because they are created, rather than predefined. While an object may contain any type of data, the information referenced by the object may still be stored as a primitive data type.

**Array:** an array data structure, or simply an array, is a data structure consisting of a collection of elements (values or variables), each identified by at least one array index or key. An array is stored such that the position of each element can be computed from its index tuple by a mathematical formula. The simplest type of data structure is a linear array, also called one-dimensional array. For example, an array of 10 32-bit integer variables, with indices 0 through 9, may be stored as 10 words at memory addresses 2000, 2004, 2008, ... 2036, so that the element with index i has the address 2000 + 4 × i.

**List:** a list or sequence is an abstract data type that represents a countable number of ordered values, where the same value may occur more than once. An instance of a list is a computer representation of the mathematical concept of a finite sequence; the (potentially) infinite analog of a list is a stream. Lists are a basic example of containers, as they contain other values. If the same value occurs multiple times, each occurrence is considered a distinct item.

**Linear List:** a linear list stores a collection of objects of a certain type, usually denoted as the elements of the list. The elements are ordered within the linear list in a linear sequence. Linear lists are usually simply denoted as lists.

Unlike an array, a list is a data structure allowing insertion and deletion of elements at an arbitrary position of the sequence. If the position in question is given, for example by a reference, such a modification takes only a constant number of operations, that is, no effortful copying of entries is necessary and all insertion and deletion operations take an equally short time. Conversely, however, one cannot access a single element via an (integral) index in constant time, as in the case of an array, without having searched for it before and having received a reference to it. Furthermore, lists are not limited to a certain maximum number of elements from the beginning on (like an array). So they are a dynamic data structure

**Stack:** A stack is a basic data structure that can be logically thought of as a linear structure represented by a real physical stack or pile, a structure where insertion and deletion of items takes place at one end called top of the stack. The basic concept can be illustrated by thinking of your data set as a stack of plates or books where you can only take the top item off the stack in order to remove things from it. This structure is used all throughout programming.

**Queue:** Queue is an abstract data structure, somewhat similar to Stacks. Unlike stacks, a queue is open at both its ends. One end is always used to insert data (enqueue) and the other is used to remove data (dequeue). Queue follows First-In-First-Out methodology, i.e., the data item stored first will be accessed first. A real-world example of queue can be a single-lane one-way road, where the vehicle enters first, exits first. More real-world examples can be seen as queues at the ticket windows and bus-stops.

**Non Linear List:** It arranges the data in a sorted order and there exists a relationship between the data elements. Traversing of data elements in one go is not possible and complex.

**Graph:** Graphs evolved from the field of mathematics. They are primarily used to describe a model that shows the route from one location to another location. A graph consists of a set of nodes and a set of edges. An edge is a pair of nodes that are connected. A path is the term used to describe traveling between nodes that share an edge.

**Tree:** A tree data structure, like a graph, is a collection of nodes. There is a root node. The node can then have children nodes. The children nodes can have their own children nodes called grandchildren nodes. This repeats until all data is represented in the tree data structure. A tree is a graph that has no cycles (a cycle being a path in the graph that starts and ends at the same vertex). A child node can only have one parent. For this reason trees are not a recursive data structure.

**File:** A collection of data or information that has a name, called the filename. Almost all information stored in a computer must be in a file. There are many different types of files: data files, text files , program files, directory files, and so on. Different types of files store different types of information. For example, program files store programs, whereas text files store text.


**Data Structures Operations:** Data are processed by means of certain operations which appearing in the data structure. Data has situation on depends largely on the frequency with which specific operations are performed. This section introduces the reader to some of the most frequently used of these operations.

(1) *Traversing:* Accessing each records exactly once so that certain items in the record may be processed.
(2) *Searching:* Finding the location of a particular record with a given key value, or finding the location of all records which satisfy one or more conditions.
(3) *Inserting:* Adding a new record to the structure.
(4) *Deleting:* Removing the record from the structure.
(5) *Sorting:* Managing the data or record in some logical order(Ascending or descending order).
(6) *Merging:* Combining the record in two different sorted files into a single sorted file.
