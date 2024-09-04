#include "0904.h"
#include <cassert>

int main()
{
    cout << "Running pyramid tests..." << endl;

    printPyramid(5);
    printPyramid(2);
    printPyramid(8);

    cout << "Running fibonacci tests..." << endl;

    assert(recursiveFibonacci(3) == 2);
    assert(recursiveFibonacci(0) == 0);
    assert(recursiveFibonacci(5) == 5);
    assert(recursiveFibonacci(15) == 610);
    assert(recursiveFibonacci(-430 == -1));

    cout << "Running palindrome tests..." << endl;

    assert(isPalindrome("racecar"));
    assert(isPalindrome("tacocat"));
    assert(isPalindrome("dammit im mad"));
    assert(!isPalindrome("bruh"));
    assert(!isPalindrome("Mr. Brown is Awesome"));
    assert(isPalindrome("a"));
    assert(isPalindrome(""));

    cout << "Running mode tests..." << endl;

    vector<int> list1 = {};
    vector<int> list2 = {1, 2, 1};
    vector<int> list3 = {7};
    vector<int> list4 = {1, 3, 4, 3, 2, 3, 1, 4, 3, 7, 2};
    vector<int> list5 = {120, 4, 120, 3, 3, 467, 8, 9, 10, 21};
    vector<int> list6 = {4, 5, 6, 7, 8};

    assert(mode(list1) == -1);
    assert(mode(list2) == 1);
    assert(mode(list3) == 7);
    assert(mode(list4) == 3);
    assert(mode(list5) == 120);
    assert(mode(list6) == 4);
}