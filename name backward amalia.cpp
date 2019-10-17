#include <iostream>
#include <cstring>
using namespace std;

int main()
{
         int    index;
         char   myName[60];

         cout << "Please enter your name: ";
         cin.getline(myName, 60);

         for (index = strlen(myName) - 1; index >= 0; --index)
               {
               cout << myName[index];
               }
         cout << endl;
 
         return 0;
}
