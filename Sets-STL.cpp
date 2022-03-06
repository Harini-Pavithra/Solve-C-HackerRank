Input Format

The first line of the input contains Q where Q is the number of queries.The next Q lines contain 1 query each. Each query consists of two integers y and x where y is the type of the query and x is an integer.

Output Format

For queries of type 3 print "Yes"(without quotes) if the number x is present in the set and if the number is not present, then print "No"(without quotes).
Each query of type 3 should be printed in a new line.

Sample Input

8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6
Sample Output

Yes
No
No

Code:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int queries,counter,type,integer;
    cin >> queries;
    
    set<int> s;
    
    for(counter=0;counter<queries;counter++)
    {
        cin >> type >> integer;
        
        if(type == 1)
        {
            s.insert(integer);
        }
        else if (type == 2) 
        {
            s.erase(integer);
        }
        else
        {
            set<int>::iterator itr=s.find(integer);
            if(itr != s.end())
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    
    
    return 0;
}



