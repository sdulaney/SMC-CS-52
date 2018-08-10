// Stewart Dulaney
// 3/29/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 4
// Problem 2
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int indexOfTriple(string s);
// Precondition: the string object s contains a line of
// text including any whitespace.
// Returns the index of the first non-whitespace character that
// exists at least 3 times in the string s or -1 if none exists.

int countOccurrences(string s, char c);
// Precondition: the string object s contains a line of
// text including any whitespace. The parameter c has been
// initialized to a character value.
// Returns the number of times the character c occurs in the
// string s. The count is not case-sensitive.

int main()
{
    string inputStr;
    cout << "Please enter a line of text including any whitespace: ";
    getline(cin, inputStr);
    int result = indexOfTriple(inputStr);
    if (result == -1)
    {
        cout << "Not found!" << endl;
    }
    else
    {
        cout << inputStr[result] << " at index " << result << endl;
    }
    
    return 0;
}

// Uses string, cctype:
int indexOfTriple(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (!isspace(s[i]))
        {
            int count = countOccurrences(s, s[i]);
            if (count >= 3)
            {
                return i;
            }
        }
    }
    return -1;
}

// Uses string, cctype:
int countOccurrences(string s, char c)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (tolower(s[i]) == tolower(c))
        {
            count++;
        }
    }
    return count;
}
