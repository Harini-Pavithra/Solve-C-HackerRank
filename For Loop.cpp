A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop is

for(int i = 0; i < 10; i++) {
    ...
}
In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers, a and b, separated by a newline.

Output Format

For each integer n in the inclusive interval (a,b):

If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9  and it is an odd number, then print "odd".

Sample Input

8
11
Sample Output

eight
nine
even
odd

Code:
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int number_1,number_2,counter;
    cin >> number_1 >> number_2;
    //cout << number_1 << number_2;
    
    for(counter=number_1;counter<=number_2;counter++)
    {
        if(counter <= 9)
        {
            if(counter==1)
            {
            cout<<"one"<<"\n";
             }
            if(counter==2)
            {
            cout<<"two"<<"\n";
            }
            if(counter==3)
            {
            cout<<"three"<<"\n";
            }
            if(counter==4)
            {
            cout<<"four"<<"\n";
            }
            if(counter==5)
            {
            cout<<"five"<<"\n";
            }
            if(counter==6)
            {
            cout<<"six"<<"\n";
            }
            if(counter==7)
            {
            cout<<"seven"<<"\n";
            }
            if(counter==8)
            {
            cout<<"eight"<<"\n";
            }
            if(counter==9)
            {
            cout<<"nine"<<"\n";
            }
        }
        else if (counter>9 && counter%2==0) {
            cout<<"even"<<"\n";
        }
        else {
            cout<<"odd"<<"\n";
        }
    }
    return 0;
}
