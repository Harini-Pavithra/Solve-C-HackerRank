You will be given an array of  N integers and you have to print the integers in the reverse order.




Input Format

The first line of the input contains N ,where N  is the number of integers.The next line contains N space-separated integers.

Output Format

Print the N integers of the array in the reverse order, space-separated on a single line.

Sample Input

4
1 4 3 2
Sample Output

2 3 4 1
Code:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int value,counter;
    cin >> value;
    int value_array[value];
    for(counter=0;counter<value;counter++)
    {
        cin >> value_array[counter];
    }
    for(counter=value-1;counter>=0;counter--)
    {
        cout<< value_array[counter]<<" ";
    }
    
    return 0;
}
