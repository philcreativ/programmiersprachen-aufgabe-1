

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








