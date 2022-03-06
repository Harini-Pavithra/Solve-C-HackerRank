Input Format

The first line of the input contains the number of integers N.The next line contains N integers in sorted order. The next line contains Q, the number of queries. Then Q lines follow each containing a single integer Y.

Note: If the same number is present multiple times, you have to print the first index at which it occurs. Also, the input is such that you always have an answer for each query.


Output Format

For each query you have to print "Yes" (without the quotes) if the number is present and at which index(1-based) it is present separated by a space.

If the number is not present you have to print "No" (without the quotes) followed by the index of the next smallest number just greater than that number.

You have to output each query in a new line.

Sample Input

 8
 1 1 2 2 6 9 9 15
 4
 1
 4
 9
 15
Sample Output

 Yes 1
 No 5
 Yes 6
 Yes 8
Code:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int values,counter,integers,queries,input_value,index;
    vector<int> v;
    cin >> values;
    for(counter=0;counter<values;counter++)
    {
        cin >> integers;
        v.push_back(integers);
        
    }
    cin >> queries;
    for(counter=0;counter<queries;counter++)
    {
        cin >> input_value;
        vector<int>::iterator result = lower_bound(v.begin(),v.end(),input_value);
        if(input_value == *result)
        {
            cout<<"Yes" <<" "<< result-v.begin()+1 <<endl;
        }
        else {
            cout<<"No" << " " << result-v.begin()+1 <<endl;
        }
    }
    return 0;
}
