Consider an nelement array,a where each index i in the array contains a reference to an array of k integers,Given a, you must answer q queries. 
 Each query is in the format i j, where i denotes an index in array a and j denotes an index in the array located at a[i]. For each query, find and print the value of element j
  in the array at location a[i] on a new line.
  
 Input Format

The first line contains two space-separated integers denoting the respective values of n and q. Each line i and n subsequent lines contains a space-separated sequence in the format k
describing the k-element array located at a[i]. Each of the q subsequent lines contains two space-separated integers describing the respective values of i and j  for a query.

Sample Input

2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
Sample Output

5
9

Code:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   int n,q,counter,k,counter1,i,j;
     
    cin >>n>>q;
    int *mainArray[n];
    for(counter=0;counter<n;counter++)
    {
        cin>>k;
        mainArray[counter]= new int[k];
        for(counter1=0;counter1<k;counter1++)
        {
            cin>>mainArray[counter][counter1];
        }
    }
      
for(counter=0;counter<q;counter++)
    {
        cin >> i >> j;
       //int *temp = mainArray[i];
       cout<< mainArray[i][j]<<endl;
    }
    
    return 0;
}
