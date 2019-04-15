

//Aufgabe 1.4----------------

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



Aufgabe 1.5-----------------

Definition 

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





















*/