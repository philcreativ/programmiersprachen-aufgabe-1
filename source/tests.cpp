#define CATCH_CONFIG_RUNNER
#include <catch.hpp>


// Aufgabe 1.3 
// kleinste Zahl, die durch die Zahlen 1 
// bis 20 teilbar Funktion Implementation ---------------------------

bool teilbar_durch_alle(int num)
{
  int teiler = 2; 
    while (teiler <= 20)
    {
     // loop 20 % teiler where teiler goes from 1 to 20  must % = 0
     if( num % teiler != 0 )
     { 
       return false; 
     }
       ++teiler;
    } 
  return true;
}




// Aufgabe 1.8 
// GCD Funktion Implementation --------------------------------------

int gcd(int a, int b) 
{
	int gcd = 0;
	for(int i=1; i<=a&&i<=b; i++){
		if(a%i == 0 && b%i == 0 )
		{
	        gcd=i;
   		}
	}
	return gcd;
}



//Aufgabe 1.9 CheckSum  Funktion Implementation---------------------- 

int checksum(int a)
{ 
  int sum = 0;
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}



//Aufgabe 1.10 sumMultiple Funktion Implementation ------------------

int sumMultiples(int a, int b)
{ 
  int sum = 0;
   for( int i = 1; i <= 1000; i = i + 1 )
   {			       
     if (i%a==0 && i%b==0 )
      {
       sum = sum + i;
      }
    }
  return sum;
}



//Aufgabe 1.11 Fraction Anteil---------------------------------------

int fract(float frac)
{
    double integer, value = frac, fraction = modf(value, &integer);
    return fraction;
}










// *************************THE TEST CASES****************************//


// Aufgabe 1.8 -------------------------------------------------------

TEST_CASE("describe_gcd ","[gcd]")
{
  //Base Test
  REQUIRE( gcd(1,1) == 1 );
  REQUIRE( gcd(0,0) == 0 );
  REQUIRE( gcd(-1,1) == 0 );
  REQUIRE( gcd(-283,-1) == 0 );
    
  //Assigned Tests
  REQUIRE( gcd(2,4) == 2 );
  REQUIRE( gcd(6,9) == 3 );
  REQUIRE( gcd(3,7) == 1 );
} 


// Aufgabe 1.9 -------------------------------------------------------

TEST_CASE("checksum","[checksum]")
{

  //Base Test
  REQUIRE( checksum(1) == 1 );
  REQUIRE( checksum(-1) == -1 );
  REQUIRE( checksum(0) == 0 );

  //Assigned Test
  REQUIRE( checksum(112601) == 11 );
  REQUIRE( checksum(-112601) == -11 );
  REQUIRE( checksum(123456) == 21 );
  REQUIRE( checksum(000000) == 0 );
}


// Aufgabe 1.9 -------------------------------------------------------

TEST_CASE("sumMultiples","[sumMultiples]")
{

  //Base Test
  REQUIRE( sumMultiples(1,1) == 500500);
  REQUIRE( sumMultiples(-1,-1) == 500500);
  //REQUIRE( sumMultiples(0,0) == 0 );

  //Assigned Test
  REQUIRE( sumMultiples (3,5) == 33165);
  REQUIRE( sumMultiples (1,5) == 100500);
  REQUIRE( sumMultiples (1,3) == 166833);
  REQUIRE( sumMultiples (-3,-5) == 33165);


}









// ************************* MAIN FUNCTION****************************//

int main(int argc, char* argv[])
{

  int zahl = 1;
   while(! teilbar_durch_alle(zahl))
    {
      ++zahl;
    }

   std::cout << "\nDie kleinste Zahl, die durch die Zahlen 1 bis 20 teilbar ist : " << zahl << std::endl << std::endl;

  return Catch::Session().run(argc, argv);
}
