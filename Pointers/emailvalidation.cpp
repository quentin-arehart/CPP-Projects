#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* Note: This was part of the Pointers lab but using pointers is still difficult for me. I was able to create the required program without using a pointer and it
   was significantly easier to understand what was going on. */

bool is_valid(string email)
{
    int At = 1, Dot = -1;
    
    for (int i = 0; i < email.length(); i++) 
    {
        if (email[i] == '@') {
            At = i;
        } else if (email[i] == '.') {
            Dot = i;
        }
        
    }
    
    if (At == -1 || Dot == -1) {
        return 0;
    } 
    if (At > Dot) {
        return 0;
    }
    return !(Dot >= (email.length() - 1));
}



int main()   
{
    string email;
    getline(cin, email);
    
    bool ans = is_valid(email);
    
    if (ans) {
        cout << "Valid email ID" << endl;
    } else {
        cout << "Invalid email ID" << endl;
    }
  
  return 0;
}
