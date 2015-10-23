#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>     
#include <algorithm>       
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,S_L = 0,len_ = 0;
    int c1push = 0, c2push = 0;
    cin >> T;
    string S,S1,S2;
    vector<string> myV;
    string C1,C2,mainM="";
    for(int j = 0; j < T; j++)
    {
        cin >> S1 >> S2;
        for(int i = 0; i <S1.length();i++)
        {
            C1 = S1[i]; 
            for(int k = S_L; k <S2.length(); k++)
            {
                C2 = S2[k];
                if(C1 < C2)
                {
                    myV.push_back(C1);
                    c1push++;
                    break;
                }
                else
                {
                    S_L++;
                    myV.push_back(C2);
                    c2push++;
                }       
            }
        }
        len_ = S_L;
        S_L  = 0;
        
        if(myV.size() <= (S1.length() + S2.length()))
        {
            myV.push_back(S2.substr(len_,S2.length()));
            //myV.push_back(S2.substr(len_,S2.length()));
        }
        
        for(int h = 0; h < myV.size();h++)
        {
            cout << myV[h];    
        }
        
        cout << endl;
        myV.clear();
        len_ = 0;
    }
    
    return 0;
}
