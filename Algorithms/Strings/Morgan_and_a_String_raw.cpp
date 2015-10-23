#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>     // std::cout, std::boolalpha
#include <algorithm>    // std::lexicographical_compare
#include <cctype>       // std::tolower
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,S_L;
    cin >> T;
    string S,S1,S2;
    string min,max,mainM;
    for(int i = 0; i < T; i++)
    {
        cin >> S1 >> S2;
        S = S1 + S2;
        
        if(lexicographical_compare(S1.begin(),S1.end(),S2.begin(),S2.end()) < 1)
        {
            max = S2.substr(0,1) + S1 + S2.substr(1,S2.length());
            for(int i = 0; i <S2.length()-1; i++)
            {
                min = S2.substr(0,i+1) + S1 + S2.substr(i+1,S2.length());
                max = S2.substr(0,i+2) + S1 + S2.substr(i+3,S2.length());
                if(lexicographical_compare(min.begin(),min.end(),max.begin(),max.end()) >= 1)
                {
                    mainM = min;
                    cout << mainM << endl;
                }
            }
        }
        else
        {

        }
        cout << mainM << endl;
    }
    
    return 0;
}
