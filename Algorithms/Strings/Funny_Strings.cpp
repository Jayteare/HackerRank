#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//0.0seconds in TestCase #9 ranked as first seed.
int T,c = 0;
string S,R;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    cin >>T;
    for(int i = 0; i < T; i++)
    {
        cin >> S;
        int j = 1; int k = S.length()-1;
        while((j < S.length()) && (k>=0))
        {
            if((abs(S[j]-S[j-1])) == (abs(S[k-1]-S[k])))
                c++;
  
            j++;
            k--;
        }
        if(c == S.length()-1)
            cout << "Funny\n";
        else
            cout << "Not Funny\n";
        c = 0;
        
    }
    return 0;
}
