

//Aufgabe 1.4-------------------------------------------------------------

int main () {
int    a       = 9;
bool   b       = false ;
char   c       = ’a ’;
double d       = 1.3;
int const five = 5;         //(const is a read-only state of an object during runtime)
double e       = a / five ; //(will not store the fractional part)

five = d ;  //(Will give an error because of trying to change a const)

return 0;

}



//Aufgabe 1.5--------------------------------------------------------------


Intialisierung   
/*
Initialization means telling compiler to allocate a memory to the initialized
variable so that compiler can know that this variable is going to store some value.

Example: */ 

extern int a;


Zuweisung           

/*
This referes to storing a legal value(wert) in a intialised allocated memory.
This can only be done after intialisation, if done without first intialisation 
there will be an error.

Example */ 

int b = 20;  a = b;



//Aufgabe 1.6--------------------------------------------------------------


Deklaration   
/*
Declaration, generally, refers to the introduction of a new name in the program. 
For example, you can declare a new function by describing it's "signature":

Example: */ 


extern int a;                      // Declaring a variable a without defining it
class Example { int a; int b; };   // Declaring a class
int addition (int a, int b);       // Declaring a function


Definition          

/*
This referes to storing a legal value(wert) in a intialised allocated memory.
This can only be done after intialisation, if done without first intialisation 
there will be an error.

Example */ 

int a;                                        // Definition a variable a without assignment
int b = 0;                                    // Definition a variable a with assignment
int addition (int a, int b) { return a + b; } // Definition a function with parameters
class Example                                 // Declaring a function
 {
 	 Example();
 	~Example();
 	 Example(int a, int b){}
 }; 



//Aufgabe 1.7--------------------------------------------------------------

Function Signature;


int sum(int a, int b){ return a + b; }
/*returnType nameOfFuction(typeofparameter paraName, typeofparameter paraName){body }

A function's signature includes the function's name and the number, 
order and type of its formal parameters. 
Two overloaded functions must not have the same signature. 
The return value is not part of a function's signature.


A function signature (or type signature, or method signature) 
defines input and output of functions or methods.

A signature can include:

1. parameters and their types
2. a return value and type
3. exceptions that might be thrown or passed back
4. information about the availability of the method in an object-oriented program 
(such as the keywords public, static, or prototype).

*/



Variable Scope

//Variablen haben einen Gültigkeitsbe- reich (scope)

Global Scope
/*This referes to the lifespan of the vaiable during runtime and is stored in persistant memory,
these usually exists through out the running of the whole program

Global Variables can be accessed from any part of the program.

1. They are available through out the life time of a program.
2. They are declared at the top of the program outside all of the functions or blocks.
3. Declaring global variables: Global variables are usually declared outside of all of the functions and blocks, 
   at the top of the program. They can be accessed from any portion of the program.


*/

Local Scope
/*This is the lifespan of a variable within the memory and its created and used during runtime
these usually die/cleared/deleted automatically once they are no longer needed.

Variables defined within a function or block are said to be local to those functions.

1. Anything between ‘{‘ and ‘}’ is said to inside a block.
2. Local variables do not exist outside the block in which they are declared, 
   i.e. they can not be accessed or used outside that block.
3. Declaring local variables: Local variables are declared inside a block.

*/


