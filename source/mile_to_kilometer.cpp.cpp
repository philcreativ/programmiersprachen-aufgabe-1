#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

#include <cmath>
#include <iostream>
#include <string>


double Mile = 0;
double Kilo = 1.60934;


double mileToKilometer(double Mile){
double Kilometer = Mile * Kilo;
	return  Kilometer;
}

TEST_CASE("mileToKilometer ","[mileToKilometer]")
{
	REQUIRE( mileToKilometer(0) == 0 );
	REQUIRE( mileToKilometer(1) == 1.60934 );
	REQUIRE( mileToKilometer(10) == 16.0934 );
	REQUIRE( mileToKilometer(100) == 160.934 );

}


int main(int argc, char const *argv[])
{
	double Mile = 0;
	std::cout<< "________________________Convert Miles to Kilometers__________________________" << std::endl;
	std::cout<< "Please give the Number of Miles you want to convert to Kilometers : ";
	 
	std::cin >> Mile;
	 	if (Mile >= 0.0000000)
	 {
	  std::cout << Mile << "mi(s) = " << mileToKilometer(Mile) << "km(s)" << std::endl;
	  std::cout << "_____________________________________________________________________________" << std::endl;
	 }
		

	return Catch::Session().run( argc, argv);
}