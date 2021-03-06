#Meeting Notes

### (03/25/2021)
 - How to create Submodules in Git?
 - Understand Mathematical Calculation of Fourier signal and solve a question
 - Reuse implementation and test from CPP to Java and python 
 - Understand and be ready to teach the following topics: 
1. Smart C++ pointers and Raw C pointers, What are the pros/cons for each? What are use cases for each?
2. Sorting, 4 different methods, what's the time complexity and space complexity for each of them
3. Implement a LinkedList, along with basic functions, also implement a basic sorting algorithm (maybe bubble sort, easy) for it. 
4. Searching, 4 different methods, what's the time complexity and space complexity for each of them
5. Implement a Tree, along with basic functions, also implement a basic searching algorithm (maybe DFS/BFS) for it.


### (04/08/2021)
1. create PowerPoint presentations for two projects:
   - project statement
   - flow chart
   - input data  what it is and where it came from 
   - output data
2. Fix the four documents 


### What am I trying to do in the two projects assigned?

I am trying to accomplish two tasks in the next two weeks:
  **First task:** use alglib API to compute FFT of a time-domain vector
  - Looking at alglib API I have found the FFT function whose signature is void fftc1d(complex_1d_array &a)
  - fftc1d takes a char array of time-domain data and computes FFT in place of the input time-domain vector
  - For the input of the fftc1d function, read a text file (*CSV) containing time-domain data and input it in the fftc1d function
   - There are two ways to generate data: 
	1. Manual entry of data
	2. Testable data such as a sine wave at a specific frequency  
      - From the internet get a sine sample data
      - Find a function that generates a sine wave data
  - Write the output of the fftc1d function (frequency domain data) in a text file (*CSV)

 **Second Task:** Create a CPP .dll and expose its API to Java
 Approach 1: 
  - I begin by creating a DLL file and then implement my program code in the .cpp file which has to be exposed to Java
  - Then I create a header file that holds the JNI implementation which I manually enter
  - Through .dll properties from VC++ Directories I added Java directories by giving the path in include directories
  - I created a java project file and added my JNI code.
  - In the last step I include the path of the native library (which is the DLL file) location through the Java build path
 Approach 2:
  - I begin by creating a DLL file and then make a .cpp file that has the code to be exposed to Java
  - Then I create a Swig wrapper file using CMD which is added to the project files
  - Once I run the program the Java code is automatically generated by Java

### 04/09/2020 - 10:00 am
- Rename files with _ instead of spaces in the name  
- Redo meeting file text for project 2
- Identify what you know and what you don't know (using understand and don't understand)
- Save images with naming such as kalb_cppcon_inheritance
- Ensure everything is aligned and proofread
- Put all the notes together under one file notes.txt, 
- ensure the notes are all organized
- Remove three files: Object orientated programming, functional templates, and exceptions
- Proofread the journal and if needed organize it better
- Install TortoiseGit 
- Find out how to retrieve the previous to-do list from git, copy the content into meeting notes and then delete the to-do list.
- Redo presentation with different approaches

4/11/2021 - 8:30 am
- Read these four links in the given order:
   1. https://nachtimwald.com/2017/06/06/wrapping-a-c-library-in-java/
   2. https://github.com/mapbox/jni.hpp
   3. https://github.com/bytedeco/javacpp/wiki/Mapping-Recipes
   4. https://github.com/swig/swig/tree/master/Examples/java
   5. https://www.scapix.com/introduction/
   6. http://engineering.socialpoint.es/cpp-wrapper-for-jni.html
-  Once you read the link do the tasks:
   1. Make a presentation one by one on each approach.
   2. Write the pros and cons of each approach.
   3. Answer the following questions for each approach:
      - Is the approach easy or hard or depends? If depends, easy for what use cases and hard for what use cases?
      - Does the approach support c++17 data types like std::any and std::optional etc.?
      - What do you like about the approach?
      - What do you not like about the approach?
      - Any pitfalls or non-supported c++ features?
      - Is there good documentation with examples?