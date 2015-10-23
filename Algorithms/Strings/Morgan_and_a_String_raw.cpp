#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>     
#include <algorithm>       
#include <string>
using namespace std;

vector<string> myV;
int T;
int c1push    = 0 , c2push    = 0;
int pass_len1 = 0 , pass_len2 = 0;
string S1,S2;
string C1,C2;

void lexigo_(string S1, string S2)
{
    c2push = 0;
    for(int i = 0; i <S1.length();i++)
    {
        C1 = S1[i]; 
        for(int k = c2push; k <S2.length(); k++)
        {
            C2 = S2[k];
            if(C1 < C2)
            {
                myV.push_back(C1);
                c1push++; pass_len1++;
                break;
            }
            else
            {
                myV.push_back(C2);
                c2push++; pass_len2++;
            }      
            
            if(pass_len2 >= S2.length())
            {
                k      = S2.length();
                c2push = S2.length();
            }
        }
        
        if(pass_len1 == S1.length())
            i = S1.length();
    }    
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    cin >> T;
    
    for(int j = 0; j < T; j++)
    {
        cin >> S1 >> S2;
        
        lexigo_(S1,S2);
        
        if(myV.size() <= (S1.length() + S2.length()))
        {
            if(c1push < S1.length())
            {
                if(c2push < S2.length())
                    lexigo_(S1.substr(c1push,S1.length()), S2.substr(c2push,S2.length()));
                else
                {
                    c2push   = 0;
                    lexigo_(S1.substr(c1push,S1.length()), S1.substr(c1push,S1.length()));    
                }
            }
            
            if(c2push < S2.length())
            {
                if(c1push < S1.length())
                    lexigo_(S1.substr(c1push,S1.length()), S2.substr(c2push,S2.length()));
                else
                {
                   lexigo_(S2.substr(c2push,S2.length()), S2.substr(c2push,S2.length()));  
                }
            }
        }
        
        for(int h = 0; h < myV.size();h++)
            cout << myV[h];
        
        cout << endl;
        myV.clear(); c1push = 0; c2push = 0; pass_len1 = 0; pass_len2 = 0;
    }
    
    return 0;
}
