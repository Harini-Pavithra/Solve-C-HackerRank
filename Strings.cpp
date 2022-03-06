Input Format

You are given two strings, a and b, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of  a and b respectively.

in the second line print the string produced by concatenating a and b
In the third line print two strings separated by a space, a and b. 
 except that their first characters are swapped.

Sample Input

abcd
ef
Sample Output

4 2
abcdef
ebcd af
Code:
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string a_string,b_string;
    cin >> a_string >> b_string;
    
    cout << a_string.size() <<" "<< b_string.size()<<"\n";
    cout << a_string+b_string<<"\n";
    char character = a_string[0];
    
    a_string[0] = b_string[0];
    b_string[0] = character;
    
    cout << a_string << " "<<b_string;
    
  
    return 0;
}
