#include <iostream>
#include "string.h"

using namespace std;

int romanToInt(string input);

int main (int argc, char *argv[]) {

   cout << "Enter a String of roman numerals" << endl;
   
   string input;
   
   cin >> input;
   
   cout << "Here is your number: "<< endl << romanToInt(input);
   

}

int romanToInt(string input)
{
   //size of goodIn is 6
   char goodIn[] = {'I','V','X','L','C','D','M'};
   int prevIndex;
   int size = input.length(); 
   int oldVal = 0;
   int z = 10;
   int result = 0;
   
   //sort through the string and match the char to the index of the array
   for(int i = 0; i < size; i++){
      prevIndex = z;
      for(z = 0; z < 6; z++){
         if(goodIn[z] == input.at(i)){   
            break;
         }
      }
      // if the current number was larger than the previous one. 
      // then subtract the previous value from the result 
      // since we already added the previous number we double it when we subtract
      if(z > prevIndex)
         result += (oldVal*-2);

         // relate the index of the array to a value to add to result
      switch(z){
         case(0):
            result +=  1;
            oldVal = 1;
            break;
            
         case(1):
            result += 5;
            oldVal = 5;
            break;         
            
         case(2):
            result += 10;
            oldVal = 10;
            break;
            
         case(3):
            result += 50;
            oldVal = 50;
            break;
            
         case(4):
            result += 100;
            oldVal = 100;
            break;
            
         case(5):
            result += 500;
            oldVal = 500;
            break;
            
         case(6):
            result += 1000;
            oldVal = 1000;
            break;
      }
         
   }
   
   return result;
   

}