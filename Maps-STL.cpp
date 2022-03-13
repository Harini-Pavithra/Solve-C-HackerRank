You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.
Each student can have multiple answer sheets.So the teacher has Q queries:

1 X Y :Add the marks Y to the student whose name is X.

2 X: Erase the marks of the students whose name is X.

3 X: Print the marks of the students whose name is X. (If X didn't get any marks print 0.)

Input Format

The first line of the input contains Q where Q is the number of queries. The next Q lines contain 1 query each.The first integer, type of each query is the type of the Q
query.If query is of type 1, it consists of one string X and an integer Y and  where X is the name of the student and Y is the marks of the student.If query is of type 2 or 3,
it consists of a single string X where X is the name of the student.

Output Format

For queries of type 3 print the marks of the given student.

Sample Input

7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess
Sample Output

30
20
0

Code:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int queries,type,counter,marks;
    string studentName;
    map<string,int> map;
    
    cin >> queries;
    for(counter=0;counter<queries;counter++)
    {
        cin >> type;
        if(type ==1)
        {
            cin >> studentName>>marks;
            //map.insert(make_pair(studentName,marks));
            map[studentName] += marks;
        }
        if(type==2)
        {
            cin >> studentName;
            map.erase(studentName);
        }
        if(type==3)
        {
            cin >> studentName;
            cout<<map[studentName]<<"\n";
        }
    }
  
    
    return 0;
}



