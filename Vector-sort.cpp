Input Format

The first line of the input contains N  where N  is the number of integers. The next line contains  N integers.

Output Format

Print the integers in the sorted order one by one in a single line followed by a space.

Sample Input

5
1 6 10 8 4
Sample Output

1 4 6 8 10
code:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int counter,value,input;  
    vector<int>v;
   
    cin >> input;
    for(counter=0;counter<input;counter++)
    {
        cin >> value;
        v.push_back(value);
    }
   
    sort(v.begin(),v.end());
   
    for(counter=0;counter<input;counter++)
    {
         cout << v[counter]<<" ";
    }
   
   
    return 0;
}
