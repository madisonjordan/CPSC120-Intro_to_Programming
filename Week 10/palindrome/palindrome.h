//Madison Jordan
//CPSC 120-15
//Lab 08
//Desc: implementation for palindrome program

#ifndef _PALINDROME_H_
#define _PALINDROME_H_

#include <string>
using namespace std;

// Prototypes
bool isPalindrome(string);
string reverseString(string);



//check if reverse is same
bool isPalindrome(string word)
{
    if (reverseString(word) == word)
    {
        return true;
    }
    else
    {
        return false;
    }
}


string reverseString(string word)
{
    //create empty string
    string reverse_word = "";
    
    //store characters in reverse
    for(int i=word.length()-1;i>=0;i--)
    {
        reverse_word = reverse_word + word[i];
    }
    
    return reverse_word;
}

#endif // End palindrome.h
