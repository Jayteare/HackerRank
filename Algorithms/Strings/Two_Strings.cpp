#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//0.12seconds in TestCase #5
#define REP(i,a,b) \
  for (int i = int(a); i <= int(b); i++)

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    int i = 0;
    string S1, S2,temp;
    bool flag = false;
    
    cin >> T;
    while(T)
    {
        cin >> S1 >> S2;
        sort(S1.begin(),S1.end());
        sort(S2.begin(),S2.end());
        
        //Quick Greedy Method
        if(S1[0] == S2[0])
            flag = true;
        
        REP(i,S1[0],'z')
        {
            bool find = (S1.find(i) < S1.length()) && (S2.find(i) < S2.length());
            if(find)
                flag = true;
            
        }
        
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
        flag = false;
        T--;
    }
    return 0;
}
