						Classes And Inheritence (Lynda)
Class: 
 - A data block that can store different types of data as well as function members (actions available for the data). 
 - It is defined using the keyword, “class”. the class can further be used to create an object also known as the instance of a class.
 
Object members: contents of an object. There are two types of object members 
  1. Data members: represents encapsulated data, also known as properties.
  2. Function members: functions associated with the class, also known as methods. 

Special member functions:
 - Getters - member function that gets value 
 - Setter - member function that sets values

Constructors/ destructors:
 - They are special function members that are called when an object is created or destroyed.
 - These member functions served a special purpose, they are used for allocation and deallocation of memory.
 - They do not have a name of their own but instead use the class name. 
 - Constructors can be privatized, which ensure no objects of the class are created

Constructors:
 - A constructor only gets called when one creates an object
 - There may be several constructors defined but only one is called for each instance of an object
 - They are named with the name of the class

Different types of constructors: 
 1. Default constructor: no parameter/ arguments list required.
 2. Parameterized Constructors: this constructor takes parameters or arguments. They use a special class initializer. 
    Syntax example:
	Animal::Animal (const string &type, const string &name, const string &sound):_type (type), _name (name), _sound (sound){}
	: introduces the initialization
 3. Special class initializer: Name_of_data_memeber (value)
 4. Copy constructor: another of the same type to copy data from it to another constructor. 
 5. Implicit constructor: When a class does not have a constructor and an object is created in the main. The constructor used to create the object is called
    the implicit default constructor.

Types of implicit constructors:
 1. Implicit default constructor
 2. Implicit copy constructor: c1 o2 = o3;
 3. Implicit copy operator: o1.setvalue(72);
 4. Explicit constructor:
Syntax: 
	explicit c1 (const in &value): _value(value);
 - The use of the word “Explicit” ensures no implicit conversions take place throughout the program. Parameterized constructors can be defined explicitly. 
 5. Copy operator

Destructor:
 - Destructor is called when the object is destroyed. Once the program ends a destructor for each constructor is being called automatically. 
 - One destructor maybe be defined in a class
	~class_name();

Implementing function members outside the class:
	Void class_name::function_name (parameter) {
	   //code;
	}

Object initalization:
 - class_name object_name;
 -  Initializing data members through initializer list:
	Class A{
	  Public:
	  Int x;
 	  Int y;
	  Int z;
	};
	Int main (){
	  A a={1,2,3}; // initializer list for data memebers
	}

Difference between classes and structure: Everything in structure is by default public whereas in class everything is private. 

Array Objects:
 - Class objects can be stored in an array.
Syntax:
	Class_name * object_name = new class_name [number_of_elements];
	Delete [ ] object_name;

Class inheritance:
 - Reusing code by basing one class over another.
 - It represents the ability to reuse code by deriving a class from a base class
 - There derived class typically inherits and builds upon some or all of the data and function members of the base class

Multi inheritance: 
	Class derived_class : public base_class1, public base_Class2 {
	  //syntax of multiple inheritence
	}

Base class:
 - Members of a base class are used in one or more derived classes. This class is also known as the parent, super, or non-leaf class.

Derived class:
 - A class that is being created and is based upon the base class is sometimes called the subclass, child class, or leaf class.
Syntax:
	Class Derived_class:Public Base_Class {
	  //code;
	}

Access specifiers: 
 - Protected: are only available to base and derived class
 - Public: are available to all objects that are base class, deviled class, and unrelated objects
 - Private: only available by the base class

Different types of member functions:
 - Friend function: 
    i. access to a class’s private variables, to another object, or even a few select is granted by the friend declaration. 
   ii. This exposes all of the private members of the base class to the derived class 
  iii. Friend classes do not have to be a derived class, they can be any classes that have access to all the private data of a class.
Syntax:
	Class abc {
	  String _name;
	  Animal();
	  Friend class xyz;
	};

Virtual function: 
 - This type of member function declared within a class and redefined (overridden) by a derived class
 - Functions are declared with a virtual keyword in the base class and resolving of a function call is done at run time 
 - When you refer to a derived class object using a pointer or reference to the base class, you call a virtual function, for that object and execute the 
   derived class’s version of the function
 - The virtual function ensures that the correct function is called for an object
 - They are mainly used to achieve runtime polymorphism
 - Adding virtual tells the compiler to look for the same function in the derived class, it might be overridden there.
 - It is defined in the base and contains no abstract class.
 - For virtual member functions we need a virtual destructor 
	Virtual ~class_name(); 

Pure virtual function:
 - These type of functions are not defined in the base class, and the class contain a pure virtual function is called an abstract class
	Virtual function_name () = 0;
 - Pure virtual functions do not give you the option of inheriting from the base class.
 - They do not have a body at all (no implementation.
 - Any derived class that inherits from a base class that a PVF in it must override the function in the derived class. 
 - An abstract class is a class with a pure virtual function in it.

Polymorphism: 
 - The same function is defined in the base class as well as the derived class. Hence when called from the derived class it calls the derived class one but 
   you can use both the function as well. 
Syntax:
	Void function_name () const {base_class::function_name; cout<<”This function combines base and derived function;} 
	//this statement creates a derived class memeber function which is overlaoded in the derived class and has a defination in base class

Overloaded members:
 - They are used for changing or customizing certain behaviors of the member function of the base class
 - Derived class overload members of the base class

Note: When a member function is overloaded while calling the member function you need to ensure which one are you calling by using scope resolution 
operation and class name before using the function name. Class_name:: function_name()


                                                        CppCon - Object Oriented Programing by  Jon Kalb

Object-Oriented Programming: a programming paradigm in C++ using polymorphism based on runtime function dispatch using virtual functions. (understand)

Derived object/ classes: (understand)
 - They are objects that are independent libraries that all happen to have the same API, and they do different things depending on the behaviour\state of 
   the individual object. 
 - It is tied with all these different implementations to the application but this commonality (API) is defined by the base class.
 - Their behavior can be changed at runtime 

Base class: (understand)
 - API is defined by the base class, whereas the derived class gives different implementations of these libraries. 

Libraries and objects can implement and extend API:
 - Compile-time: type of the derived object (understand)
 - Runtime: state of a derived class (do not understand)

Separation of concerns: (understand)
 - The idea is that each class is assigned one task that they deal with.
 - Example: The logger class does not know anything about logging or how logging is done. Its only concern is when an event occurs it just logs it. It is the 
   user/client or application code. 
 - The derived class now takes care of how logging is done and knows how it is done. 

Liskov Substitution Principle:(understand)
 - Ability to replace any instance of a parent class with an instance of one of its child classes without negative side effects
 - If D is a subtype of B then provable properties of B are also provable properties of type D. Hence, code written to work against the API defined by B 
   will also work correctly for objects of type D, if D is a proper subtype. 

Note: Not all derived types are subtypes.(do not understand)

Rule #38 - Safe overriding:
 - After the base class guarantees the preconditions and postconditions of an operation, any derived class must respect these guarantees (understand)
 - An override can ask for less and provide more but it must never require more and promise less because that would break the contract that was promised to 
   calling code. (do not understand)

Inheritance:(understand)
 - Inheritance is a technique for enabling code reuse should be for two code paths being similar but not the same.
 - Public inheritance model, “is-a”: Base class defines an interface for an object that might provide a type of functionality. Derived classes provide 
   implementations of different expressions of that object type. 

Has-a model vs is-a model:(understand)
 - Composition and aggregation use as a model, for example: if a vehicle and engine are two different classes then the data members of an engine class are 
   a part of the vehicle class. This model is a "has-a" model that states a vehicle has an engine. One class is composed inside another one.
Syntax:
	Class vehicle{
	  Engine e;
	};
 - Inheritance uses is a model that states that function members of a base class will be used by the derived class such that if the vehicle is the base 
   class and car a derived class. A car is a vehicle. 
Syntax:
	Class car: public vehicle {
	};

Note: Powerful hierarchy is built on well-defined abstraction. (do not understand)

Best Practices: (understand)
 - Make sure the public inheritance model "is-a". It is substitutability, inherit not to reuse, but to be reused. 
 - Do not reuse your base class code, but instead write a derived class code that can be reused. 
 - Make non-leaf class abstract (has at least one pure virtual function).

Scenario: (Further explained in Kalb_CppCon_InheritanceProblem.jpeg)
 - D3 is exactly like D2 with one little difference. So hence D3 and D2 are quite similar.
 - This is not a good practice for the following reasons:
 - By deriving D3 from D2 now D2 will have new requirements on itself. Hence resulting in the implementation of divergence. 
 - This is a violation of rules number 5 of Herb and Andrei that states: give one entity, one cohesive responsibility.
 - In this case, D2 is not given one cohesive responsibility as it is a base class for D3 it has implementation diverges.
 - In this case, D2 does what has to do as well as it is the base class for D3.

Solution: (Further explained in Kalb_CppCon_InheritanceProblem.jpeg)
 - Leads to better hierarchy and more maintainability code.
 - We take what is common between D2 and D3 and create a new base class B1 with this new commonality. The above solution follows Scott's guidelines. 

Scott’s Solution:
By implementing this solution you get better hierarchies.
 - Step one: Make every class in your hierarchy either a base only or a leaf only. 
 - Step two: 
     Make bases:
     i. Abstract (add one or more pure virtual functions) (understand)
    ii. Protected assignment operators (do not understand)
 - Step 3: 
     i. Make leaf classes
    ii. Concrete (override all pure virtual functions) (understand)
   iii. Public assignment operator (do not understand)
    iv. Final (not added by Scott. To declare leaf classes came in C++11) (understand)
Note: you either instantiate it or you derive from it, you never do both from the same class. (understand)

Use the non-virtual interface (NVI) idiom:(do not understand)
 - Consider making virtual functions nonpublic, and public functions nonvirtual.
	Virtual function ------------------> Non public (private)
	Non Virtual functions -------------> Public 

Base Class in control:(do not understand)
 - Enforce pre and post conditions 
 - Instrumentation
 - Robust in the face of change: add/remove pre/post-processing without breaking caller or drivers.
 - Each interface can take its natural shape

Best Practice Build:
 - Overridden functions must be declared virtual (understand)
 - Always make the base class destructor virtual (do not understand: why not just a destructor why virtual)
 - Use “override” for overridden function (understand)
 - Do not mix overloading and overriding (understand)
 - Do not specify default values on function overrides (do not understand)
 - Don’t call virtual functions in constructor\ destructor (do not understand)
 - Use dynamic rather than static casts for downcasting but avoid casting refactoring where possible. (do not understand why avoid if possible) 

Virtual destructors:(donot understand ~virtual abc () = default ; )
 - State of data members of the derived class will not gonna get cleaned up 
 - Undefined behavior to delete a derived class object with a base class pointer if the destructor is not virtual. Always make base class destructors 
   virtual

Overriding keyword:(understand)
 - If you declare a function to be an override and it is not for any reason example if the signature does not match, you can use the keyword, “Override”. 
   This communicates your intent and verifies with the compiler. 
 - It is an override, it is a good practice to write it as an override. 

Scoping: (understand)
 - Function overloading rules:
 - Look for a called name in scope, collect all candidates in the scope and once you find it in the scope you stop looking for it. Overloading does not 
   happen across the scope
 - If not found in the first scope it starts looking at the next scope and keeps on looking till all scopes end. 
Note: If the function is found in one scope it does not go to other scopes and avoid hiding inherited names.

Default parameter values: (do not understand)
 - Default parameter values are determined by the compile by examining the declaration of the called function. 
 - They are inserted into the parameter list at the call site at the compile-time. 
 - Because the actual function invoked is determined at runtime by address lookup and not by the compiler, the passed default value will also be statically 
   determined as the default parameter in the base class’s function declaration 

Upcasting:(understand)
 - Casting a derived type pointer or reference to a pointer or reference to a type further up the hierarchy (to a base type) 
 - Always safe, can be implicit, done all the time 
 - It works because of the Liskov substitution principle

Downcasting: (understand)
 - Casting a base type pointer or reference to a pointer or reference to a type further down the hierarchy
 - Problematic because the compiler cannot know at compile time that the object is what we are casting to and a base type object cannot, in general, 
   be substituted for a derived type object.

Types of downcasting:
 1. Unconditional Static Casting: (do not understand)
    - You have to be certain that the object in question is of  a required type
    - Effective and efficient
    - The compiler cannot verify, undefined behavior if you are incorrect
    - Uncertain in the face of code maintenance

 2. Condition Dynamic Casting: (do not understand)
  - A better option is a condition dynamic cast as it does not need to check
  - The compiler generates code to determine at runtime the object type, hence it is safe and no runtime overhead. 
  - When dynamic cast fails it returns a null pointer rather than pointing to a function.
Note Both the casting need error code. 

 - Questions:
    1. Timer 4:43 - runtime: State of the derived object
    2. Why would one make constructors private?
    3. Time 7:13 why is the virtual destructor initialized by default
	virtual  ~Logger ( ) = default; why not ~Logger ( );
    4. Slides on timer 8:28 and 8:33 - unable to understand what the code is doing 
    5. Timer 10:00 - “not all derived types are subtype” did not understand that
    6. Timer 12:00 - what does requiring more and promising less mean?
    7. Timer 16:21 - I did not understand the concept of object slicing that has been explained in the video. From what I have learned object slicing is 
       when you initialize an object of the base class with a derived class object. Now when you call this base class object it preserves the base class and 
       gives the base class value rather than being over-written by the derived class during the copy.
    8. Timer 17:30 - he calls size of as illogical as its gonna to tell us how is the animal not that how big is the lizard but..the animal is pointing to the 
       lizard so logical it should give the size of lizard.
    9. Timer 22:23 - assignment operators protected, I thought it was so that no one can directly access the data member but instead he says, “to prevent 
       assignment from pointer to object.” Unable to understand.
   10. Timer 23:57 - they say make virtual function nonpublic but how would the compile override it if they are not public?
   11. Timer 30:17 - why is the asset not forcing the value of 1?
   12. Timer 36:53 - The innermost scope has already define foo(int) so why did it give false? Why is the int foo hidden? 
   13. Slide at timer 40:52 Cannot understand the code written
   14. What does “a dereferenced null pointer value of a polymorphic type” mean
   15. https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/
   16. Operator overload questions

							Function and Class Template
								By Dan Saks
Function Template:
 - It is not a function, it is a tool for generating out functions
 - A single declaration that can generate declarations for similar but distinct functions when you know what type of data is passed.
 - Each generated function implements the algorithm for operands of different types. 

Function Template Declaration:
	Template <type T> 
	Void Swap (t &a, T &b) //Enough info for the compiler to generate calls to swap function
 - This is a template that holds a swap function with a to-be-determined type T.

Function Template Definition: 
 - For the compiler to manufacture the function called by the template. 
	Template<typename T>
	Void swap (T &a, t &b){
	  T temp {a};
	  a=b;
	  B=temp; 
	}

Template Vs Function Parameter:
 - In the case of a function template there are two parameters lists:
    A. Template parameter list
    B. Function parameter list
	Template <type T> //Template parameter
	Void Swap (t &a, T &b){ //Function parameter
	  //code..
	}

Template Parameter: Typename T 
 - where T is the placeholder for a type to be determined
 - Argument substitution of the type takes place at compile time 
 - The scope of T begins with type name T and ends with }

Function Parameter (Void swap (T &a, t &b)): Function parameters are the same as arguments passed in a normal function 

What changes compile-time computation to run-time computation? We can no longer pass arguments at run time because of constexpr and const, the pass of 
arguments have turned at compile time 

Template Instantiation (part of translation process):
 - When c++ compilers automatically generate function definitions from templates as needed is called template instantiation
 - You use the template and the compiler automatically figures out what code has to be generated to support this template in the running program 
 - Template instantiation results in instantiated functions (function definition generated from a function template).
 - A compiler does not instantiate duplicate function definitions. If the same instantiation is called it triggers an instantiation that has already been 
   created earlier. 
	Swap<string>(s,t); //triggers instatiation 
	Swap<string>(u,v); //uses previous instatiation 
	Swap<int>(a,b); //triggers different instatiation 
 - Swap now has two instances one for string and the other one for integers.

Multiple Type Parameters:
 - A template can have more than one template parameter
	Template <typename U, typename T>
	U find (U first, U last, T const &v); //Search through the start of U to the end of U looking for the value v where U is an iterator type
Instantiation:
	i = find <double const *, double> (b, e, x);
	Template <typename U, typename T>

Typename VS Class
 - Class means the same as typename in c++ template
	Template<class T> // same as template<tyoename T>
	Void swap(T &a, T &b);
Note: class and typename are only interchangeable in templates.

Class templates:
 - It is a generalization of an object type class template is not a real class but an algorithm for making class 
 - The compile will automatically instantiate class definition as needed. 
 - Class definition generated from a class template is an instantiation of a class.
Syntax:
	Template<typename T>
	Class rational {
	  Public:
	  Rantional ();
	  Rantional (T n);
	  Ratiantional (T n, T d);
	  -----------------------------
          Other member function 
	  ------------------------------
	  Private:
	  Void reduce ();
          T num, den;
	};

Changing the type:
	Rational<long> r1 {10};
 - Defining “irat” as an alias for the type rational<int> using anyone of thr processes:
    i. Typedef rational<int> irat;
                 or
   ii. Using irat = rational<int>
	irat ri {4,5}; //changes the type from long to int

Container Class Templates:
 - A container class is an object that holds other objects example arrays, linked lists, etc.
 - STL provides various container class templates, where T is a type parameter representing the type in the containers including:
     i. List<T> - a double linked list of T objects
    ii. Vector<T> - a variable-length array of T objects
   iii. Set<T> - an ordered set of T objects

Note: Template isntatiation can be passed as template argument: list <rational<int>> ratios;

Member functions:
	1. Template <typename T>
	2. Class rational {
	  3. Public:
	  4. Rational ( );
	  5. Rational(T n); //declartion
	  6. //Other code
	7. };
Note: template initiated at line 1, its scope ends at line 7. 

Defination: 
	Template <typename T>
	Inline Rational <T> :: rational (T n): num {n}, den {1} { } //first rational is class name and second is member name

Inside the scope:
 - Inside the scope of the class definition, you can use the word rational or rational<T>. Optional only inside the scope. 
 - Both of them are equivalent (a member function of a class is a template)
	Where<T> is ignored:
	Rational ( );
	Rational (T n);
	Rational (T n, T d);
	   OR
	Where <T> is present:
	Rational <T>( );
	Rational <T>(T n);
	Rational <T>(T n, T d);

Outside the scope:
 - Member function definition outside the scope is preceded by the class name and scope resolution operator
	Template<typename T>
	Rational <T> 
	Rational <T> : : operator += (rational const &ro){ }
 - <T> mandatory outside the class template scope
 - : : reenter the scope of class 
 - If you add <T> to the second rational after brackets that means <T> is explicitly specified. 

Constructors and Destructors:
 - When writing constructors and destructors, you are not allowed to put<T>.
 - To avoid any syntax error or any other complexity you can just put the destructors and constructors inside
	Public: //constructor: implicitly inline
	Rational (T n): num {n}, den {1} { } 

Constructor:
	Template <typename T>
	Rational <T>: : rational (T n): //Rational <T>: : rational <T> (T n): this syntax not allowed
	Num {n}, den {1} { }

Destructor:
	Template <typename T>
	Rational <T> : : ~ rational ( ) { } //Rational <T> : : ~ rational <T> ( ) { } this syntax is not allowed 

Note: write C<T> as just C everywhere inside the scope of a class template <T> and after the scope resolution operator does not put <T>.

Inline functions: 
 - Keyword inline when used with a function, the compiler will place the code that functions in place of the function call. Hence the compiler makes the 
   declaration, the definition.
 - Inline increases the size of executable code so the best practice is to not use it with a very large code of a function.

Statice Data Member in C++:
 - Shared by all objects 
 - Initlaized by zero, if no other initialization is given.
 - We cannot put it in the class definition, hence initialized outside using scope resolution operator.

Note: NO MATTER HOW MANY OBJECTS OF THE CLASS ATE CREATED, THERE IS ONLY ONE OF THE STATIC MEMBER. 

Syntax:
	Class Myclass{
	  Public:
	  Int x;
	  Static int count; //declared inside a class
	  My class ( ) {cout ++; } //contrustor
	};
	Int Myclass : : count = 0; //deifnation of count outside the class
	Int main ( ) {
	  Code;
	}

Static Member function in C++:
  1. Static member function is declared by the word “static”
  2. They are independent of any particular object of the class. Hence can even be called in no object is created 
  3. Accessed by using scope resolution operator (: :)
  4. Cannot access “this” pointer of the class as it has a class scope
  5. A static member function can access only: 
	a) Static data members
	b) Other static mener funcitons
	c) Any function outside the class
Syntax:
	Static int getcount ( )
	{ return count; }
	Int main ( )
	{ cout<<Myclass::getcount( ); }

Static Data Member in Templates:
 - Static data memeber can be declared and defined in two different ways 
   Method 1: Prior to C++ 17
	Template <type name T>
	Class gadget {
	  Static unsigned long counter; //declaration
	}
	Template <typename T>
	Usigned long gadget <T> counter = 0; //defination
   Method 2: C++ 17 feature
	Template<typename T>
	Class gadget{
	  Inline static unsigned long counter = 0; //declaration and deifnation
	};

Static constant data memeber (a feature of C++ 11):
	Template<typename T>
	Class gadget {
	  Static int const threshold = 37;
	};

Class template type members:
 - A class template can have members that are types:
     Method 1: Outside the class
	Template<typename T>
	Class list {
	  Public:
	  Class iterator; //type member declaration. A nested member called iterator for containers like vectors and lists. 
	  //rest of the code
	};
	Template<typename T> //memeber type defination
	Class list <T>:: iterator {
	  //code
	};

     Method 2: Inside the class
	Template<typename T>
	Class list {
	  Public:
	  Class iterator { //member type defination}; 
	};

 - Use your class iterator outside the scope of the list class by its, “fully-qualified name”.
	For(list<string>: : iterator i=ls.begin( ); i!=ls.end( ); ++i)
	{//code body}

Template Arguments As Expressions:
 - A template argument can be an expression rather than a type 
	Bitset<32> b1; // a sequence of 32 bits
 - STL provides a class template that represents a set of N bits. Bitset represents a fixed-size sequence of bits
 - To instantiate bitset class you don’t have to give a data type instead you give in a specific number of bits

Header and source file:
 - Non-Template Functions:
	1. Declaration in header files
	2. Defination in soucre files

Template Functions: 
 - Typically place all template declarations, including definitions in headers; Nothing is kept in source files
 - Downside: the template function will then be included in multiple separate compiled source files and the instantiation of the same thing multiple times,
   separately compiled source files or units. 
 - C++ linker can solve this problem as they are smart enough to see whats going on and essentially they throw away all but one copy of the instantiation

Angular bracket omission:
 - C++ often lets you omit the angle-bracketed template argument list a call to a function template
 - You can use just the template name as the function name
Example:
	i = abs (j); //correct i = abs <int>(j); //wrong
 - In this case, the compile looks in the parenthesis and uses that to deduce what's missing in the angular brackets. The process of deducing the template 
   argument from the function call argument is known as template argument deduction.
	i = abs (j); //calls i = abs <int>(j)
	i = abs (j); is what you are allowed to type but i = abs <int>(j) is what is instantiated

Type Deduction Failure:
	Template <typename T>
	Void swap(T &a, T &b);
	--------------
	Int i, j;
	String s, t;
	---------------
	Swap(I,s); //error: can’t deduce template argument
 - The swap requires two function arguments of the same type, where we have pass arguments of two different types. 
 - The compiler deduces the type argument by matching the form of the parameter with the form of the argument:
 - T const *a [ ] ---> char const *name [ ] 
 - Where T is char type as the rest of the signature is an exact match of types.

Note: Type deduction only happens on function arguments, not on return types.
	T f( ); // T doesnot give return type hence fails to run
	Int i = f ( ); //can’t deduce type
	Int i = f<int>( ); // work if stated explicitly 

Example of type deduction:
	Rational <int> r1, r2;
	Swap(r1, r2);
	Rational<int> r3 (r2); // before c++17 this was how we told the compiler r3 is an integer and r3 = r2
	Rational r4 (r1); // after c++ 17, this statment states intializeation of r4 with r1 and the compiler deduces the type of r4 from r1.


Two-Phase Translation:
 - The compiler is limited in what it can do when it first encounters a template definition. 
 - It cannot generate code for an instantiation, as it does not know what T is yet. 
 
 - Phase One:
     i. The compile scoops up the template and stores it in the symbol table, for later use.
    ii. The compiler states that it will get back to the code late once it needs to instantiate something
   iii. This process happens just once for each template

 - Phase Two:
     i. The second phase occurs when the compile instantiates the template for a particular combination of template arguments. 
    ii. This happens at each instantiation (every new combination of arguments being passed to the template will trigger this second phase).
   iii. When it inserts type or non-type arguments to instantiate it needs to actually instantiate something and fully compile it to semantic analysis.

Dependent Vs Non-dependent Names:
Dependent Names:
 - A name appearing in a template whose meaning depends on one or more template parameters is a dependent name.
	Template <typename T>
	T : : size_Type munge (T const &a){
	    T : : size_type *I (T : : npos);
	}
 - Hence size_type and npos both are dependent names as they depend on the T type parameter.
 - A dependent name may have a different meaning in each instantiation, the meaning of the name won’t be known till we know the meaning of T.

Non-dependent:
 - A non-dependent name has the same meaning in every instantiation of the template 
 - They have the same meaning in every template they are not dependent on the type of parameter

Types distinguish declaration from expression. 
 - According to the C++ standard:
   1. A name used in a template declaration
   2. That is dependent on a template parameter
   3. Is assumed not to name a type unless
   4. The name is qualified by the keyword “typename”
Further explained in Saks_CppCon_Template.jpeg 

Template Specialization:
 - When you take a template and a combination of type arguments and pair them together that's a specialization. 
 - The template ID turns to specialization when you plug in a type.
 - Template ID: template_name <argument_list>
 - Template Specialization: swap <int> This is a specialization of the swap template. 

Template Instantiation:
 - Normally C++ compilers automatically generate function definitions from templates as needed. 
 - The act of generating a function definition or class definition from a template is called template instantiation

NOTE: EVERY INSTATION ARISES FROM A SPECIALIZATION, NOT EVERY SPECIALIZATION PRODUCES AN INSTANTIAITION.

Explicit Vs Implicit Instantiation:
 - Implicit Instantiation:
    1. By default, a temple instantiation is an implicit instantiation 
    2. The compiler determines what code it must generate to satisfy the use of a template, and generate that code automatically. 
 - Explicit Instantiation: 
    1. Explicit instantiation is when you specify exactly where the compiler should instantiate a particular specialization. 
    2. A program must contain exactly one definition for every template instantiation in the program 
    3. If you explicitly instantiate a temple in one translation unit, you must ensure that the specialization is not instantiated elsewhere 
Example
Before C++ 11:
	Template void swap <string> (string &a, string &b);
                                 Or 
	Template void swap (int &a, int &b);
After C++ 11:
	Extern opt template declaration 
	Extern template void swap <string> (string &a, string &b);

Explicit Specialization:
 - C++ lets you alter the behavior of a particular template specialization 
 - This takes the general template and tailors it to work for a particular type of argument. 
 - This ensures that a general rule is not applied. It ensures that our template looks like the same interface but it has different behavior.  
Sytnax:
	Tempalate< > //declaration
Example:
	Template < > 
	Char const *
	Max <char const *> (char const *a, char const * b) //This declaration is valid only if max is already declared as the name of a function template
	{return strcmp (a,b)>0?a:b;}

Function/ Class Template: Further explained in Saks_CppCon_InstantiationVsSpecialization.jpeg
   1. Specialization
   2. Explicit Specialization
   3. Implicit Instantiation
   4. Explicit Instantiation

Class Template instantiation:
 - By default, the compiler instantiates class template implicitly
 - However, you can explicitly instantiate a class template using a declaration of the form:
 - Extern opt template declaration
Example:
	Template class rational<unsigned long>;
 - This explicitly instantiates rational <T> for type “unsigned long”

Implicit Instantiation:
 - Implicitly instantiating a class template specialization doesn’t necessarily instantiate all the members of the class
 - The compiler does not necessarily instantiate:
	a) Non-virtual member functions
	b) Static data members
 - The compiler must instantiate only those members that the program access
 - However explicitly instantiating a class template specialization, instantiates all the members of that specialization
Syntax:
	     Template rationa<int> : : ratuonal (int n);

 - Questions:
   1. Timer 31:47 - is this an example of composition where the list class has an iterator class?
   2. Timer 41:47 - are we using template to assign return type too by using the line int i =f<int>( );
   3. Cannot understand dependent and non-dependent names. 



							Exceptions
 
 - Exceptions are run-time anomalies or abnormal conditions that a program encounters during its execution. If an exception is thrown and not caught anywhere, the program terminates abnormally.
 - There are two types of exceptions: 
     a)Synchronous: Classical C++ exceptions, thrown whenever the user calls a function with wrong arguments. These can be caught with a try..catch block.
     b)Asynchronous: Asynchronous errors, on the other hand, are those that describe faults in asynchronously executed code, for example inside a command 
       group or a kernel. By default, they are considered "lost". How we can retrieve them is by providing an error handler function.
 - Different components of Exception Handling:
     a.try: define a block of code to be tested for errors while it is being executed.
     b.catch: allows you to define a block of code to be executed if an error occurs in the try block.
     c.throw: Used to throw an exception when a problem is detected, which lets us create a custom error. Also used to list the exceptions that a function 
       throws, but doesn’t handle itself.
     d.catch all: special catch block used to catch all types of exceptions. catch(…)
 - void fun(int *ptr, int x) signature is fine by the compiler, but not recommended. Ideally, the function should specify all uncaught exceptions and 
   function signature should be "void fun(int *ptr, int x) throw (int *, int)". 
 - Code within a try/catch block is known as protected code.
 - C++ library has a standard exception class which is the base class for all standard exceptions. All objects thrown by components of the standard library 
   are derived from this class. Therefore, all standard exceptions can be caught by catching this type. Hence A derived class exception should be caught 
   before a base class exception. 
 - In C++, all exceptions are unchecked. The compiler doesn’t check whether an exception is caught or not.

 - Pseudo Code:
	try {
      	if (condition) { throw exception/variable; }
	}
	catch (data_type variable) { \\normal catch }
	catch (...)  { \\catch all exceptions }
}

Example:
 - Normal Catch:
	try {
  	int age = 15;
  	if (age >= 18) {
    	  cout << "Access granted - you are old enough.";
  	 } 
	else {
    	  throw (age);
  	 }
	}
	catch (int myNum) {
  	  cout << "Access denied - You must be at least 18 years old.\n";
	  cout << "Age is: " << myNum;
	}
 - Catch All:
	try {
  	 int age = 15;
  	 if (age >= 18) {
    	   cout << "Access granted - you are old enough.";
  	 } else {
    	   throw 505;
  	 }
	}
 - catch (...) { cout << "Access denied - You must be at least 18 years old.\n"; }
 - Explained:
   i. We use the try block to test if the age variable is less than 18 or not.
  ii. If age is less than 18 we will throw an exception, and handle it in our catch block.
 iii. In the catch block, we catch the error and do something about it. 
  iv. The catch statement takes a parameter an int variable (myNum) to output the value of age in code written in the catch.
   v. If no error occurs, e.g. if age is 20 instead of 15, it is greater than 18, the catch block is skipped.

 - C++ Standard Exceptions
   1. std::exception: Parent class of all the standard C++ exceptions.
   2. std::bad_alloc: Type of the object thrown as exceptions by the allocation functions to report failure to allocate storage. This can be thrown by new.
   3. std::bad_cast: This can be thrown by dynamic_cast to a reference type that fails the run-time check (e.g. because the types are not related by inheritance), 
      and also from std::use_facet if the requested facet does not exist in the locale.
   4.std::bad_exception: This is a useful device to handle unexpected exceptions thrown by the C++ runtime in the following situations:
	i. If std::exception_ptr stores a copy of the caught exception and if the copy constructor of the exception object caught by std::current_exception 
        throws an exception, the captured exception is an instance of std::bad_exception.
       ii. If a dynamic exception specification is violated and std::unexpected throws or rethrows an exception that still violates the exception 
        specification, but the exception specification allows std::bad_exception, std::bad_exception is thrown.
   5. std::bad_typeid: This can be thrown by typeid when a typeid operator is applied to a dereferenced null pointer value of a polymorphic type.
   6. std::logic_error: An exception that theoretically can be detected by reading the code. Defines a type of object to be thrown as an exception. It reports 
     errors that are a consequence of faulty logic within the program such as violating logical preconditions or class invariants and may be preventable. 
     No standard library components throw this exception directly, but the exception types are derived from std::logic_error: 
	i. std::domain_error: This is an exception thrown when a mathematically invalid domain is used, that is, situations where the inputs are outside of 
           the domain on which an operation is defined.
       ii. std::invalid_argument: It reports errors that arise because an argument value has not been accepted.
      iii. std::length_error: This is thrown when a too big std::string is created.  It reports errors that result from attempts to exceed implementation 
           defined length limits for some object.
       iv. std::out_of_range: This can be thrown by the 'at' method, for example a std::vector and std::bitset<>::operator[]().
        v. std::future_error
       vi. std::experimental::bad_optional_access 
   7.std::runtime_error: An exception that theoretically cannot be detected by reading the code. Defines a type of object to be thrown as an exception. It reports errors that are due to events beyond the scope of the program and can not be easily predicted. Exceptions of type std::runtime_error are thrown by the following standard library components: std::locale::locale and std::locale::combine.
	i. std::overflow_error: This is thrown if a mathematical overflow occurs. It can be used to report arithmetic overflow errors (that is, situations where a result of a computation is too large for the destination type)
       ii. std::range_error: This occurs when you try to store a value that is out of range. It can be used to report range errors (that is, situations where a result of a computation cannot be represented by the destination type).
      iii. std::underflow_error: This is thrown if a mathematical underflow occurs. It may be used to report arithmetic underflow errors (that is, situations where the result of a computation is a subnormal floating-point value)
 Questions:
1.  std::bad_cast: This can be thrown by dynamic_cast to a reference type fails the run-time check (e.g. because the types are not related by inheritance), 
    and also from std::use_facet if the requested facet does not exist in the locale.
i.  If std::exception_ptr stores a copy of the caught exception and if the copy constructor of the exception object caught by std::current_exception 
    throws an exception, the captured exception is an instance of std::bad_exception.
ii. If a dynamic exception specification is violated and std::unexpected throws or rethrows an exception that still violates the exception specification, 
    but the exception specification allows std::bad_exception, std::bad_exception is thrown.

						   Other Notes
 - 15 most important header files:
 1. <iostream>: std::cout
 2. <iomanip>: std::setprecision()
 3. <fstream>: streaming files like std::open(), std::close(), reading and writing
 4. <random>: defines functions for random number generation such as std::random::rand(int,double)
 5. <cmath>: defines constant like pi, the definition of mathematical operations like pow(int, int)
 6. <ctype>: (find out more, find a sub in CPP): isalnum, isalpha, isupper, islower
 7. <cstdint>: (find out more, find sub in cpp): int8_t, int16_t, int32_t
 8. <functional>: defines std::function<void(int)>, lambdas?
 9. <type_traits>: std::is_same<T,U>, std::is_arithmetic<T>, (look up the concept of SFINAE)
10. <utility>: std::compare, std::swap, std::exchange
11. <iterator>: input, output, bidirectional, random access iterator
12. <exception>: std::exception
13. <algorithm>: 
	a. std::find: finds the first element satisfying specific criteria (std::search: searches for a range of elements)
	b. std::transform: applies a function to a range of elements, storing results in a destination range
	c. std::remove_if: removes elements satisfying specific criteria
	d. std::accumulate: sums up a range of elements
	e. std::move: moves a range of elements to a new location
	f. std:: swap: swaps the values of two objects
	g. std::reverse: reverses the order of elements in a range
	h. std::merge: merges two sorted ranges
	i. std::set_difference: computes the difference between two sets
	j. std::sort: sorts a range into ascending order

 - Useful Data Structures:
   1. <tuple>: std::tuple<std::string, int, double> tuple_name = {"Nova", 1, 1.0};
   2. <vector>: std::vector<int> vector_name = {1, 2, 3};
   3. <string>: std::string string_name = "Hello World!";
   4. <array>: std::array<int,3> array_name = {1,2,3};
   5. <pair>: std::pair<std::string, std::any> pair_value = {"string_value", "hello"};
   6. <map>: std::map<std::string, std::any> map_name = {{"double_value",1.0}, {"int_value",1}, pair_value};
   7. <unordered_map>: std::unordered_map<std::string, std::any> map_name = {{"double_value",1.0}, {"int_value",1}, pair_value};
   8. <complex>: std::complex<float> complex_float_value = {1.0, 0.0};
   9. <set>: std::set<int> set_values = {1,2,3,4};
  10. <memory>: std::unique_ptr<int>, std::shared_ptr<int>

 - Operators:
   1. Arithmetic: + - / % *
   2. Assignment: = += -= *= /= %= <<= >>= &= ^= |=
   3. Relational/Comparison: == != > < >= <=
   4. Logical: &&, ||, !
   5. Bitwise: & AND, | OR, ^ BINARY XOR, ~ BINARY ONE'S COMPLIMENT
   6. Ternary: sizeof ? . , &
   7. Shift: << left shift >> right shift >>> unsigned right shift
   8. Unary: ++ increment -- decerment & address of * derefernce 
   9. function: ()

 - Description of Cpp coding: 
   1. Declaration : header file (int max(int num1, int num2);)
   2. Definaton: Cpp file (Implementation of Code)

 - VC++ Project:
   Important Properties of a Project:
    1. General::Output Directory
    2. VC++ Directories::Include Directories
    3. VC++ Directories::Library Directories
    4. Linker::Input::Additional Dependencies
   Important Properties of a Solution: Project Dependencies

FAQ:
 - What outputs can you get from a compiled program in Windows? .exe, .lib, and .dll
 - For running a program through the command line, which output will you compile? .exe
 - For running a program through Java, which output file would you get after compiling the c++ program? .dll  
 - For intermediate projects, which output would you create to be used by the final output project (.exe/.dll): lib