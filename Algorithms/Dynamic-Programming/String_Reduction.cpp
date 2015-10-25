#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */


// * Check to see if all the letters in a string are the same (CHECK);
// * Count the number of 'a'"s in the string(CHECK);
// * Count the number of 'b'"s in the string(CHECK);
// * Count the number of 'c'"s in the string(CHECK);
// * Find if a string is even or odd(CHECK);
// * Find the return value of the string(CHECK);
bool check_same(string s)
{
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] != s[0])
            return false;
    }
    return true;
}
//------------------------------------------
/* Count the letter of a&b&c; */
int count_A(string s)
{
    int a = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a')
            a++;
    }
    
    return a;
}
int count_B(string s)
{
    int b = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'b')
            b++;
    }
    
    return b;
}
int count_C(string s)
{
    int c = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'c')
            c++;
    }
    
    return c;
}
//------------------------------------------
int main() {
    int T;
    string s;
    cin>>T;
    while(T)
    {
        cin >> s;
        bool check_s = check_same(s);
        if(check_s)
            cout << s.length() << endl;
        else
        {
            
            int a_num = count_A(s);
            int b_num = count_B(s);
            int c_num = count_C(s);
            
            bool check_a = ((a_num % 2) == 1); //if zero odd;true;
            bool check_b = ((b_num % 2) == 1); //if zero odd;true;
            bool check_c = ((c_num % 2) == 1); //if zero odd;true;
            bool odd_    = ((check_a) && (check_b) && (check_c));
            
                 check_a = ((a_num % 2) == 0); //if zero even;true;
                 check_b = ((b_num % 2) == 0); //if zero even;true;
                 check_c = ((c_num % 2) == 0); //if zero even;true;
            bool even_    = ((check_a) && (check_b) && (check_c));
            
            if(odd_ || even_)
                cout << "2" << endl;
            else
                cout << "1" << endl;
        }
    
        T--;
    }
    
    return 0;
}
