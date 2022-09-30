Welcome to the course website of OOP 2022 fall. The source code we wrote in the class will be available here. You can check history tab on the top of this page to see the content of each week. Notably, the teaching materials and methods are credited to Prof. Yu Chin Cheng at CSIE, NTUT. For any inquires, please email shchen@ntut.edu.tw with title [物件導向程式設計]_姓名_學號_班級. Formal format is required in the email.

**Link to Homework: http://140.124.183.78/gitlab/109000000/oop2022f_hw**

### Week 3 9/30 - Handling exception

Suggesting reading : CH 7.1 & CH 8.1

**Problem III** Let _v_ be a n-dimensional vector and _a_ be a real number. Write a program to calculate its scalar multiplication _a_ _v_.

**Problem IV** Let _u_, _v_ be n-dimensional vectors. Write a program to calculate add u to v to obtain _u_ + _v_

**Problem V** Let _u_, _v_ be n-dimensional vectors and _a_, _b_ be real numbers. Write a program to calculate _a_ _u_ + _b_ _v_

- Handle exception
- Pointer
  - *a, a[], &a
- runtime model of program
  - data, text, stack, heap
- memory allocation/deallocation from heap
  - new operator: allocating space from heap
  - delete operator: de-allocating space from heap
  - memory leak: allocated space NOT de-allocated when it's done used

Quick notice : Next year, we will have huge reudction (down to 10 peoples) in accepting people on joining this course. Please pass this year!

### Week 3 9/26 - Dedining a member function for class

Suggesting reading : CH 6

**Problem II** Deriving the inner product of two vector.

      [1, 0] · [1, 1] = 1,
      [1, 1, 0] · [0, 1, 1] = 1, and
      [1, 0] · [1, 1, 0] => undefined.

**The plan** [Inner product, round 1](http://htsicpp.blogspot.com/2014/08/inner-product-round-1.html)

### Week 2 9/23 - Knowning class & constructor with the MathVector example

Reference
- Text book
- [cplusplus.com](https://www.cplusplus.com/)
- [googletest](https://github.com/google/googletest/blob/master/docs/primer.md)

We will solve a few problems together through the practices of "How To Solve It". 

**Problem solving**

- understanding the problem
- devising a plan
- carrying out the plan
- looking back

**Problem I** Let v a n-dimensional vector. Write a program to calculate its length | v |.

If you're not familiar with vector, read [here](https://en.wikipedia.org/wiki/Vector_space).

### Week 2 9/19 - Get Started with the HelloWolrd Examples to be Familiar with Unit Test

Suggesting reading : Slieds in MS teams & CH 2

Homework : Follow the slides to setup environment (09/23 24:00) & Sumbit code to gitlab (09/30 24:00)

### Week 1 - Introduction & Environment 

Setup Suggesting reading : following links & CH 1

In this semester, 3 things will be given to assist you in your future career.
- [How To Solve It](http://htsicpp.blogspot.com/2014/08/introducing-how-to-solve-it-cpp.html) (Proposed by George Pólya)
- C++ (version 11)
- Engineering practices (unit testing, version control, make, incremental development, test driven development, pair programming, and mob programming, [using Linux cmds](https://ubuntu.com/tutorials/command-line-for-beginners#1-overview))
