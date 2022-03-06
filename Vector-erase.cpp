Input Format

The first line of the input contains an integer N.The next line contains N space separated integers(1-based index).The third line contains a single intege x,denoting the position of an element that should be removed from the vector.The fourth line contains two integers a and b denoting the range that should be erased from the vector inclusive of a and exclusive of b.

Output Format

Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.

Sample Input

6
1 4 6 2 8 9
2
2 4
Sample Output

3
1 8 9
Code:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int value,counter,integers,query_1,limit_1,limit_2;
    cin >> value;
    vector<int> v;
    for(counter=0;counter<value;counter++)
    {
        cin >> integers;
        v.push_back(integers);
    }
    cin >> query_1;
    v.erase(v.begin()+(query_1-1));
    cin >> limit_1 >> limit_2;
    v.erase(v.begin()+(limit_1-1),v.begin()+(limit_2-1));
    
    cout << v.size()<<"\n";
    for(counter=0;counter<v.size();counter++)
    {
        cout << v[counter]<<" ";
    }
    return 0;
}

