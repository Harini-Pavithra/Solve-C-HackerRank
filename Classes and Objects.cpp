Input Format

Most of the input is handled for you by the locked code in the editor.

In the void Student::input() function, you must read 5 scores from stdin and save them to your scores instance variable.

Output Format

In the int Student::calculateTotalScore() function, you must return the student's total grade

Sample Input

The first line contains n, the number of students in Kristen's class. The n subsequent lines contain each student's 5 exam grades for this semester.


3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10
Sample Output

1
Code:
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student
{
    int marks[5],counter,sum=0;
    int score;
  public:
  void input()
  {
      for(counter=0;counter<5;counter++)
      {
      cin >> marks[counter];
      }
  } 
  
  int calculateTotalScore()
  {
      for(counter=0;counter<5;counter++)
      {
          sum = sum + marks[counter];
      }
      return sum;    
  } 
};
int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
