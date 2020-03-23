/*
 Project 4 - Part 1 / 9
 video: Chapter 2 Part 7
 Returning Values tasks 

 Create a branch named Part1

 Purpose:  This project will take you through the process of writing a class that wraps a numeric type, beginning with writing simple member functions and ending with a fully templated class with lots of functionality. 
 
 1) write 3 UDTs named FloatType, DoubleType, IntType.

 2) give each UDT the following member functions:
        add( lhs, rhs );
        subtract( lhs, rhs );
        multiply( lhs, rhs );
        divide( lhs, rhs );
 3) implement the appropriate action in the member function. 
         a) Be aware that floating point division by 0 is legal, but integer division by 0 will crash your program.  
         b) Handle this possible input when you write your divide() functions.
         c) you should warn the user if they're doing floating-point-division-by-zero but not prevent the division from happening
         d) you should warn AND prevent the division from happening if it is an integer-division-by-zero.
 
 4) make them return the correct primitive type. e.g. if you're implementing the FloatType::add function, your implementation would start like this:
        float FloatType::add( float lhs, float rhs )
 
 5) declare a few instances of each class in main() and call the member functions with the appropriate arguments.
        FloatType ft;
        auto result = ft.add(3.2f, 23.f );
 
 6) print out those results using std::cout:
        std::cout "result of ft.add(): " << result << std::endl;
 
 7) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


// WingTangWong 
// FloatType, DoubleType, IntType.
#include <iostream>
using namespace std;

struct FloatType
   {
      float add( float lhs, float rhs ) { return lhs + rhs; };
      float subtract( float lhs, float rhs ) { return lhs - rhs; };
      float multiply( float lhs, float rhs ) { return lhs * rhs; };
      float divide( float lhs, float rhs )
      {
         if ( rhs == 0 )
         { // Issue warning
         std::cout << "Warning: dividing by zero." << std::endl;
         };
         return lhs / rhs;
      };
   };

struct DoubleType
   {
      double add( double lhs, double rhs ) { return lhs + rhs; };
      double subtract( double lhs, double rhs ) { return lhs - rhs; };
      double multiply( double lhs, double rhs ) { return lhs * rhs; };
      double divide( double lhs, double rhs )
      {
         if ( rhs == 0 )
         { // Issue warning
         std::cout << "Warning: dividing by zero." << std::endl;
         };
         return lhs / rhs;
      };
   };

struct IntType
   {
      int add( int lhs, int rhs ) { return lhs + rhs; };
      int subtract( int lhs, int rhs ) { return lhs - rhs; };
      int multiply( int lhs, int rhs ) { return lhs * rhs; };
      int divide( int lhs, int rhs )
      {
         if ( rhs == 0 )
         { // Issue warning
         std::cout << "Warning: dividing by zero. Fail." << std::endl;
         };
         return 0;
      };
   };


int main()
{
   FloatType   floatThing;
   DoubleType  doubleThing;
   IntType     intThing;

   // Do floats
   auto result1 = floatThing.add(3.2f, 23.f );
   std::cout << "result of floatThing.add(): " << result1 << std::endl;
   auto result2 = floatThing.subtract(3.2f, 23.f );
   std::cout << "result of floatThing.subtract(): " << result2 << std::endl;
   auto result3 = floatThing.multiply(3.2f, 23.f );
   std::cout << "result of floatThing.multiply(): " << result3 << std::endl;
   auto result4 = floatThing.divide(3.2f, 23.f );
   std::cout << "result of floatThing.divide(): " << result4 << std::endl;
   auto result5 = floatThing.divide(3.2f, 0.f );
   std::cout << "result of floatThing.divide(): " << result5 << std::endl;


   // Do doubles
   auto result6 = doubleThing.add(3.2, 23. );
   std::cout << "result of doubleThing.add(): " << result6 << std::endl;
   auto result7 = doubleThing.subtract(3.2, 23. );
   std::cout << "result of doubleThing.subtract(): " << result7 << std::endl;
   auto result8 = doubleThing.multiply(3.2, 23. );
   std::cout << "result of doubleThing.multiply(): " << result8 << std::endl;
   auto result9 = doubleThing.divide(3.2, 23. );
   std::cout << "result of doubleThing.divide(): " << result9 << std::endl;
   auto result10 = doubleThing.divide(3.2, 0. );
   std::cout << "result of doubleThing.divide(): " << result10 << std::endl;


   // Do ints
   auto result11 = intThing.add(32, 23 );
   std::cout << "result of intThing.add(): " << result11 << std::endl;
   auto result12 = intThing.subtract(32, 23 );
   std::cout << "result of intThing.subtract(): " << result12 << std::endl;
   auto result13 = intThing.multiply(32, 23 );
   std::cout << "result of intThing.multiply(): " << result13 << std::endl;
   auto result14 = intThing.divide(32, 23 );
   std::cout << "result of intThing.divide(): " << result14 << std::endl;
   auto result15 = intThing.divide(32,0 );
   std::cout << "result of intThing.divide(): " << result15 << std::endl;

   std::cout << "good to go!" << std::endl;
}
