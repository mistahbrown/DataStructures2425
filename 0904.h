#include <iostream>
#include <string>
#include <vector>
using namespace std;


/*  printPyramid() - takes in an integer n and prints out n lines of a pyramid
    formatted like so (up to the line including 128, or n=8): 
                1
            1   2   1
        1   2   4   2   1
    1   2   4   8   4   2   1
 */

void printPyramid(int n)
{
    int nspaces = n - 1;
    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < nspaces; j++)
        {
            cout << "    ";
        }
        for (int k = 0; k < (i+1); k++)
        {
            cout << num;
            if (num > 100) cout << " ";
            else if (num > 10) cout << "  ";
            else cout << "   ";
            num *= 2;
        }
        num /= 2;
        for (int k = 0; k < i; k++)
        {
            num /= 2;
            cout << num;
            if (num > 100) cout << " ";
            else if (num > 10) cout << "  ";
            else cout << "   ";
        }
        nspaces--;
        cout << endl;
    }
}

/*  recursiveFibonacci() - takes in an integer n and returns the nth number in the
    fibonacci sequence using recursion and no iteration! Assume the fibonacci
    sequence starts with 0 and 1 where n=0 is 0. Since fibonacci is not defined
    for integers < 0, return -1 if given a negative number.
*/

int recursiveFibonacci(int n)
{
    // Your code here!
    return 0;
}

/*  isPalindrome() - takes in a string s and return true if s is a palindrome (same
    forwards as it is backwards) and false otherwise. Ex: racecar returns true, 
    chicken returns false. 
    IMPORTANT: IGNORE/REMOVE SPACES AND PUNCTUATION!
*/

bool isPalindrome(string s)
{
    // Your code here!
    return false;
}

/*  mode() - takes in a vector list and returns which number in the list appears
    most frequently. If multiple elements appear most frequently, return the one that
    appears first in the list. If list is empty, return -1.
*/

int mode(vector<int> list)
{
    // Your code here!
    return -1;
}
