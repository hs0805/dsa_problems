// A C/C++ Program to generate OTP (One Time Password)

#include<bits/stdc++.h>
using namespace std;

// A Function to generate a unique OTP everytime
bool isPalindrome(string s, int i, int n)
{
    if (i >= n/2) {  //(i >= n-i-1)
        return true;
    }
    if (s[i] != s[n-i-1])
        return false;
    return isPalindrome(s, i+1, n);
    
}

// Driver Program to test above functions
int main()
{
    string str = "aba";
    bool isPal = isPalindrome(str, 0, str.length());
    cout<<isPal;
}

