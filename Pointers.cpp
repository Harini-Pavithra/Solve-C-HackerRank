Function Description

Complete the update function in the editor below.

update has the following parameters:

int *a: an integer
int *b: an integer
Returns

The function is declared with a void return type, so there is no value to return. Modify the values in memory so that a contains their sum and b contains their absoluted difference.

Input Format

Input will contain two integers,  a and b, separated by a newline.

Sample Input

4
5
Sample Output

9

1

Code:

#include <stdio.h>

#include <cstdlib>
#include <iostream>

using namespace std;

void update(int *a,int *b) {
    // Complete this function  
    int sum =0, difference =0;
    sum = *a + *b;
    difference = abs(*a - *b);
    cout << sum <<"\n"<<difference;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
   
    scanf("%d %d", &a, &b);
    update(pa, pb);
    //printf("%d\n%d", a, b);

    return 0;
}
