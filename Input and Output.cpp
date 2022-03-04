Objective
In this challenge, we practice reading input from stdin and printing output to stdout.

In C++, you can read a single whitespace-separated token of input using cin, and print output to stdout using cout. For example, let's say we declare the following variables:

string s;
int n;
and we want to use cin to read the input "High 5" from stdin. We can do this with the following code:

cin >> s >> n;

If we want to print these values to stdout, separated by a space, we write the following code:

cout << s << " " << n << endl;

We end our line of output with a newline using endl. This results in the following output:

High 5
Task
Read 3 numbers from stdin and print their sum to stdout.
  
Input Format

One line that contains 3 space-separated integers: a, b, and c.
Output Format

Print the sum of the three numbers on a single line.

Sample Input

1 2 7
Sample Output

10

Code:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int number_1,number_2,number_3;
    cin >> number_1 >> number_2 >> number_3;
    cout << number_1+number_2+number_3;
    return 0;
}
