# Algorithm

An algorithm is a set of instructions used to solve a problem. Algorithms are used in a wide variety of applications, from programming languages to search engines, and they can range from simple to complex.

## Algorithm Judging Factors

When judging an algorithm, there are two main factors to consider: time and memory/space.

### Time

The time complexity of an algorithm is how long it takes for the algorithm to complete, which is usually measured in terms of the input size. For example, an algorithm with a time complexity of O(n) will take longer to complete with a larger input size, while an algorithm with a time complexity of O(1) will take the same amount of time regardless of the input size.

### Memory/Space

The memory/space complexity of an algorithm is how much memory/space is needed to complete the algorithm. This is usually measured in terms of the input size as well. The amount of memory/space needed to complete an algorithm will depend on the type of algorithm and the data structures used.

## Algorithm Time Complexity Notation

There are several notations used to measure the time complexity of an algorithm, including Big O notation, Omega notation, and Theta notation.

* **Big O notation** (O(complexity)) is used to denote the upper bound of an algorithm's time complexity.
* **Omega notation** (OMEGA(complexity)) is used to denote the lower bound of an algorithm's time complexity.
* **Theta notation** (Theta(complexity)) is used to denote both the upper and lower bounds of an algorithm's time complexity.

## Big O-notation Symbols

* O(1): Constant number of operations
* O(n): Order n operations
* O(n2): Order of n2
* O(n3): Order of n3
* O(nk): Order of nk (k=1,2,3,4, etc.)
* O(log n): Order of log n
* O(n log n): Order of n log n
* O(n root n): Order of n root n
* O(2n): Order of 2n
* O(cn): Order of cn (c+1,2,3,4, etc.)

## Rules of Thumb

It is estimated that 1 second can process approximately 109 simple operations. This can be used as an approximate estimate for the time complexity of an algorithm.

***
***
## For Theory
**Complexity Theory and Algorithmic Notation**

**Outlines:**

- [**Asymptotic Analysis**](http://www.cs.cornell.edu/courses/cs312/2004fa/lectures/lecture16.htm#Asymptotic Analysis)
- [**Worst-Case and Average-Case Analysis**](http://www.cs.cornell.edu/courses/cs312/2004fa/lectures/lecture16.htm#Worst-Case and Average-Case Analysis)
- [**Order of Growth and Big-O Notation**](http://www.cs.cornell.edu/courses/cs312/2004fa/lectures/lecture16.htm#Order of Growth and Big-O Notation)
- [**Comparing Orders of Growth**](http://www.cs.cornell.edu/courses/cs312/2004fa/lectures/lecture16.htm#Comparing Orders of Growth)
- [**Shortcomings of asymptotic analysis**](http://www.cs.cornell.edu/courses/cs312/2004fa/lectures/lecture16.htm#Shortcomings of asymptotic analysis)
- [**Complexity of algorithms from class**](http://www.cs.cornell.edu/courses/cs312/2004fa/lectures/lecture16.htm#Complexity of algorithms from class)

Algorithmic complexity is a very important topic in computer science. Knowing the complexity of algorithms allows you to answer questions such as

- How long will a program run on an input?
- How much space will it take?
- Is the problem solvable?

These are important bases of comparison between different algorithms. An understanding of algorithmic complexity provides programmers with insight into the efficiency of their code. Complexity is also important to several theoretical areas in computer science, including algorithms, data structures, and complexity theory.

[**Asymptotic Analysis](http://www.cs.cornell.edu/courses/cs312/2004fa/lectures/lecture16.htm#Asymptotic Analysis)**:** When analyzing the running time or space usage of programs, we usually try to estimate the time or space as function of the input size. For example, when analyzing the worst case running time of a function that sorts a list of numbers, we will be concerned with how long it takes as a function of the length of the input list.  For example, we say the standard insertion sort takes time *T*(*n*) where *T*(*n*)*= c\*n*2*+k* for some constants *c and k*.  In contrast, merge sort takes time *T* '(*n*) *= c*'*\*n\*log*2(*n*) + *k*'*.*

The **asymptotic** behavior of a function *f(n)* (such as *f(n)=c\*n* or *f(n)=c\*n2*, etc.)* refers to the growth of *f(n)* as *n* gets large. We typically ignore small values of *n*, since we are usually interested in estimating how slow the program will be on large inputs. A good rule of thumb is: the slower the asymptotic growth rate, the better the algorithm (although this is often not the whole story).

By this measure, a linear algorithm (*i.e., f(n)=d\*n+k*) is always asymptotically better than a quadratic one (*e.g., f(n)=c\*n2+q*). That is because for any given (positive) *c, k, d*, and *q* there is always some *n* at which the magnitude of *c\*n2+q* overtakes *d\*n+k*. For moderate values of *n*, the quadratic algorithm could very well take less time than the linear one, for example if *c* is significantly smaller than *d* and/or *k* is significantly smaller than *q*. However, the linear algorithm will always be better for sufficiently large inputs. Remember to **THINK BIG** when working with asymptotic rates of growth.

[**Worst-Case and Average-Case Analysis](http://www.cs.cornell.edu/courses/cs312/2004fa/lectures/lecture16.htm#Worst-Case and Average-Case Analysis)**:** When we say that an algorithm runs in time *T(n)*, we mean that *T(n)* is an upper bound on the running time that holds for all inputs of size *n*. This is called *worst-case analysis*. The algorithm may very well take less time on some inputs of size *n*, but it doesn't matter. If an algorithm takes *T(n)=c\*n2+k* steps on only a single input of each size *n* and only *n* steps on the rest, we still say that it is a quadratic algorithm.

A popular alternative to worst-case analysis is *average-case analysis*. Here we do not bound the worst case running time, but try to calculate the expected time spent on a randomly chosen input. This kind of analysis is generally harder, since it involves probabilistic arguments and often requires assumptions about the distribution of inputs that may be difficult to justify. On the other hand, it can be more useful because sometimes the worst-case behavior of an algorithm is misleadingly bad. A good example of this is the popular quicksort algorithm, whose worst-case running time on an input sequence of length *n* is proportional to *n*2 but whose expected running time is proportional to *n* log *n.*

[**Order of Growth and Big-O Notation](http://www.cs.cornell.edu/courses/cs312/2004fa/lectures/lecture16.htm#Order of Growth and Big-O Notation)**:** In estimating the running time of insert\_sort (or any other program) we don't know what the constants *c* or *k* are. We know that it is a constant of moderate size, but other than that it is not important; we have enough evidence from the asymptotic analysis to know that a merge\_sort (see below) is faster than the quadratic insert\_sort, even though the constants may differ somewhat. (This does not always hold; the constants can sometimes make a difference, but in general it is a very good rule of thumb.)

We may not even be able to measure the constant *c* directly. For example, we may know that a given expression of the language, such as if, takes a constant number of machine instructions, but we may not know exactly how many. Moreover, the same sequence of instructions executed on a Pentium IV will take less time than on a Pentium II (although the difference will be roughly a constant factor). So these estimates are usually only accurate up to a constant factor anyway. For these reasons, we usually ignore constant factors in comparing asymptotic running times.

Computer scientists have developed a convenient notation for hiding the constant factor. We write *O(n)* (read: ''order *n*'') instead of ''*cn* for some constant *c*.'' Thus an algorithm is said to be *O(n)* or *linear time* if there is a fixed constant *c* such that for all sufficiently large *n*, the algorithm takes time at most *cn* on inputs of size *n*. An algorithm is said to be *O(n2)* or *quadratic time* if there is a fixed constant *c* such that for all sufficiently large *n*, the algorithm takes time at most *cn2* on inputs of size *n*. *O(1)* means *constant time*.

*Polynomial time* means *nO(1)*, or *nc* for some constant *c*. Thus any constant, linear, quadratic, or cubic (*O(n3)*) time algorithm is a polynomial-time algorithm.

This is called *big-O notation*. It concisely captures the important differences in the asymptotic growth rates of functions.

One important advantage of big-O notation is that it makes algorithms much easier to analyze, since we can conveniently ignore low-order terms. For example, an algorithm that runs in time

*10n3 + 24n2 + 3n log n + 144*

is still a cubic algorithm, since

*10n3 + 24n2 + 3n log n + 144
<= 10n3 + 24n3 + 3n3 + 144n3
<= (10 + 24 + 3 + 144)n3
= O(n3)*.

Of course, since we are ignoring constant factors, any two linear algorithms will be considered equally good by this measure. There may even be some situations in which the constant is so huge in a linear algorithm that even an exponential algorithm with a small constant may be preferable in practice. This is a valid criticism of asymptotic analysis and big-O notation. However, as a rule of thumb it has served us well. Just be aware that it is *only* a rule of thumb--the asymptotically optimal algorithm is not necessarily the best one.

Some common orders of growth seen often in complexity analysis are

|*O(1)*|constant|
| :- | :- |
|*O(log n)*|logarithmic|
|*O(n)*|linear|
|*O(n log n)*|"n log n"|
|*O(n2)*|quadratic|
|*O(n3)*|cubic|
|*nO(1)*|polynomial|
|*2O(n)*|exponential|
Here *log* means *log2* or the logarithm base 2, although the logarithm base doesn't really matter since logarithms with different bases differ by a constant factor. Note also that *2O(n)* and *O(2n)* are not the same!

[**Comparing Orders of Growth](http://www.cs.cornell.edu/courses/cs312/2004fa/lectures/lecture16.htm#Comparing Orders of Growth)**:**

O  Let f and g be functions from positive integers to positive integers. We say f is O(g(n)) (read: ''f is order g'') if g is an upper bound on f:  there exists a fixed constant c and a fixed n0 such that for all n≥n0,

` `f(n) ≤ cg(n). Equivalently, f is O(g(n)) if the function f(n)/g(n) is bounded above by some constant.

o

We say f is o(g(n)) (read: "f is little-o of g'') if for all arbitrarily small real c > 0, for all but perhaps finitely many n,

f(n) ≤ cg(n).Equivalently, f is o(g) if the function f(n)/g(n) tends to 0 as n tends to infinity. That is, f is small compared to g. If f is o(g) then f is also o(g)

Ω

`    `We say that f is Ω(g(n)) (read: "f is omega of g") if g is a lower bound on f for large n. Formally, f is Ω(g) if there is a fixed constant c and a fixed n0 such that for all n>n0, cg(n) ≤ f(n). For example, any polynomial whose highest exponent is nk is Ω(nk). If f(n) is Ω(g(n)) then g(n) is O(f(n)). If f(n) is o(g(n)) then f(n) is not Ω(g(n)).

Θ

`    `We say that f is Θ(g(n)) (read: "f is theta of g") if g is an accurate characterization of f for large n: it can be scaled so it is both an upper and a lower bound of f. That is, f is both O(g(n)) and Ω(g(n)). Expanding out the definitions of  Ω and O, f is Θ(g(n)) if there are fixed constants c1 and c2 and a fixed n0 such that for all n>n0, c1g(n) ≤ f(n) ≤ c2 g(n)

For example, any polynomial whose highest exponent is nk is  Θ(nk). If f is Θ(g), then it is O(g) but not o(g). Sometimes people use O(g(n)) a bit informally to mean the stronger property Θ(g(n)); however, the two are different.

Here are some examples:

` `n + log n is O(n) and Q(n), because for all n > 1, n < n + log n < 2n.

` `n1000 is o(2n), because n1000/2n tends to 0 as n tends to infinity.

`    `For any fixed but arbitrarily small real number c, n log n is o(n1+c), since n log n / n1+c tends to 0. To see this, take the logarithm

log(n log n / n1+c)

= log(n log n) - log(n1+c)

= log n + log log n - (1+c)log n

= log log n - c log n

and observe that it tends to negative infinity. The meaning of an expression like O(n2) is really a set of functions: all the functions that are O(n2). When we say that f(n) is O(n2), we mean that f(n) is a member of this set. It is also common to write this as f(n) = O(g(n)) although it is not really an equality.

We now introduce some convenient rules for manipulating expressions involving order notation. These rules, which we state without proof, are useful for working with orders of growth. They are really statements about sets of functions. For example, we can read #2 as saying that the product of any two functions in O(f(n)) and O(g(n)) is in O(f(n)g(n)). cnm = O(nk) for any constant c and any m ≤ k.

`    `O(f(n)) + O(g(n)) = O(f(n) + g(n)).

`    `O(f(n))O(g(n)) = O(f(n)g(n)).

`    `O(cf(n)) = O(f(n)) for any constant c.

`    `c is O(1) for any constant c.

`    `logbn = O(log n) for any base b.All of these rules (except #1) also hold for Q as well.

[**Shortcomings of asymptotic analysis](http://www.cs.cornell.edu/courses/cs312/2004fa/lectures/lecture16.htm#Shortcomings of asymptotic analysis)**:**

In practice, other considerations beside asymptotic analysis are important when choosing between algorithms. Sometimes, an algorithm with worse asymptotic behavior is preferable. For the sake of this discussion, let algorithm *A* be asymptotically better than algorithm *B*. Here are some common issues with algorithms that have better asymptotic behavior:

- Implementation complexity: Algorithms with better complexity are often (much) more complicated. This can increase coding time and the constants.
- Small input sizes: Asymptotic analysis ignores small input sizes. At small input sizes, constant factors or low order terms could dominate running time, causing *B* to outperform *A*.
- Worst case versus average performance: If *A* has better worst case performance than *B*, but the average performance of *B* given the expected input is better, then *B* could be a better choice than *A*. Conversely, if the worst case performance of *B* is unacceptable (say for life-threatening or mission-critical reasons), *A* must still be used.

[**Complexity of algorithms from class](http://www.cs.cornell.edu/courses/cs312/2004fa/lectures/lecture16.htm#Complexity of algorithms from class)**:**



In designing of Algorithm, complexity analysis of an algorithm is an essential aspect. Mainly, algorithmic complexity is concerned about its performance, how fast or slow it works.

The complexity of an algorithm describes the efficiency of the algorithm in terms of the amount of the memory required to process the data and the processing time.

Complexity of an algorithm is analyzed in two perspectives: **Time** and **Space**.

**Time Complexity**

It’s a function describing the amount of time required to run an algorithm in terms of the size of the input. "Time" can mean the number of memory accesses performed, the number of comparisons between integers, the number of times some inner loop is executed, or some other natural unit related to the amount of real time the algorithm will take.

**Space Complexity**

It’s a function describing the amount of memory an algorithm takes in terms of the size of input to the algorithm. We often speak of "extra" memory needed, not counting the memory needed to store the input itself. Again, we use natural *butfixed*−*length* units to measure this.

Space complexity is sometimes ignored because the space used is minimal and/or obvious, however sometimes it becomes as important an issue as time.

**Lecture 3**

**Asymptotic Notations**

Execution time of an algorithm depends on the instruction set, processor speed, disk I/O speed, etc. Hence, we estimate the efficiency of an algorithm asymptotically.

Time function of an algorithm is represented by **T*n***, where **n** is the input size.

Different types of asymptotic notations are used to represent the complexity of an algorithm. Following asymptotic notations are used to calculate the running time complexity of an algorithm.

- **O** − Big Oh
- **Ω** − Big omega
- **θ** − Big theta
- **o** − Little Oh
- **ω** − Little omega

**O: Asymptotic Upper Bound**

‘O’ *BigOh*

is the most commonly used notation. A function ***fn*** can be represented is the order of ***gn*** that is ***Og(n)***, if there exists a value of positive integer **n** as **n0** and a positive constant **c** such that −*f*(*n*)⩽*c*.*g*(*n*) for *n*>*n*0 in all case

Hence, function ***gn*** is an upper bound for function ***fn***, as ***gn*** grows faster than ***fn***.

**Example**

Let us consider a given function, *f*(*n*)=4.*n*3+10.*n*2+5.*n*+1

Considering *g*(*n*)=*n*3 ,*f*(*n*)⩽5.*g*(*n*) for all the values of *n*>2

Hence, the complexity of ***fn*** can be represented as *O*(*g*(*n*)), i.e. *O*(*n*3)


**Ω: Asymptotic Lower Bound**

We say that *f*(*n*)=Ω(*g*(*n*)) when there exists constant **c** that *f*(*n*)⩾*c*.*g*(*n*) for all sufficiently large value of **n**. Here **n** is a positive integer. It means function ***g*** is a lower bound for function ***f***; after a certain value of ***n, f*** will never go below ***g***.

**Example**

Let us consider a given function, *f*(*n*)=4.*n*3+10.*n*2+5.*n*+1.

Considering *g*(*n*)=*n*3, *f*(*n*)⩾4.*g*(*n*) for all the values of *n*>0.

Hence, the complexity of ***fn*** can be represented as Ω(*g*(*n*)), i.e. Ω(*n*3)

**θ: Asymptotic Tight Bound**

We say that *f*(*n*)=*θ*(*g*(*n*))

when there exist constants **c1** and **c2** that *c*1.*g*(*n*)⩽*f*(*n*)⩽*c*2.*g*(*n*) for all sufficiently large value of **n**. Here **n** is a positive integer. This means function **g** is a tight bound for function **f**.

**Example**

Let us consider a given function, *f*(*n*)=4.*n*3+10.*n*2+5.*n*+1

Considering *g*(*n*)=*n*3 , 4.*g*(*n*)⩽*f*(*n*)⩽5.*g*(*n*) for all the large values of **n**.

Hence, the complexity of ***fn*** can be represented as *θ*(*g*(*n*)), i.e. *θ*(*n*3).

**O - Notation**

The asymptotic upper bound provided by **O-notation** may or may not be asymptotically tight. The bound 2.*n*2=*O*(*n*2) is asymptotically tight, but the bound 2.*n*=*O*(*n*2) is not.We use **o-notation** to denote an upper bound that is not asymptotically tight.

We formally define ***og(n)*** *little*−*ohofgofn* as the set ***fn = og(n)*** for any positive constant *c*>0 and there exists a value *n*0>0, such that 0⩽*f*(*n*)⩽*c*.*g*(*n*).

Intuitively, in the **o-notation**, the function ***fn*** becomes insignificant relative to ***gn*** as **n** approaches infinity; that is,

lim*n*→∞(*f*(*n*)*g*(*n*))=0

**Example**

Let us consider the same function, *f*(*n*)=4.*n*3+10.*n*2+5.*n*+1

Considering *g*(*n*)=*n*4,

lim*n*→∞(4.*n*3+10.*n*2+5.*n*+1*n*4)=0

Hence, the complexity of ***fn*** can be represented as *o*(*g*(*n*)), i.e. *o*(*n*4).

**ω – Notation**

We use **ω-notation** to denote a lower bound that is not asymptotically tight. Formally, however, we define ***ωg(n)*** *little*−*omegaofgofn* as the set ***fn = ωg(n)*** for any positive constant ***C > 0*** and there exists a value *n*0>0, such that 0⩽*c*.*g*(*n*)<*f*(*n*).

For example, *n*22=*ω*(*n*), but *n*22≠*ω*(*n*2). The relation *f*(*n*)=*ω*(*g*(*n*)) implies that the following limit exists

lim*n*→∞(*f*(*n*)*g*(*n*))=∞

That is, ***fn*** becomes arbitrarily large relative to ***gn*** as **n** approaches infinity.

**Example**

Let us consider same function, *f*(*n*)=4.*n*3+10.*n*2+5.*n*+1

Considering *g*(*n*)=*n*2,

lim*n*→∞(4.*n*3+10.*n*2+5.*n*+1*n*2)=∞

Hence, the complexity of ***fn*** can be represented as *o*(*g*(*n*)), i.e. *ω*(*n*2)

.

**Apriori and Apostiari Analysis**

Apriori analysis means, analysis is performed prior to running it on a specific system. This analysis is a stage where a function is defined using some theoretical model. Hence, we determine the time and space complexity of an algorithm by just looking at the algorithm rather than running it on a particular system with a different memory, processor, and compiler.

Apostiari analysis of an algorithm means we perform analysis of an algorithm only after running it on a system. It directly depends on the system and changes from system to system.

In an industry, we cannot perform Apostiari analysis as the software is generally made for an anonymous user, which runs it on a system different from those present in the industry.

In Apriori, it is the reason that we use asymptotic notations to determine time and space complexity as they change from computer to computer; however, asymptotically they are the same.

***
***
