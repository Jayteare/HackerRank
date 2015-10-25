#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */


// * Check to see if all the letters in a string are the same (CHECK);

bool check_same(string s)
{
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] != s[0])
            return false;
    }
    return true;
}

int stringReduction(char a[]) 
{

   return 0;
}

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
    
        T--;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
