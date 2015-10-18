#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//0.4seconds in TestCase #12
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,C = 0,B = 0; string in_; string ini_;
    bool firstcheck = false;
    cin>>T;
    
    for(int i = 0; i < T; i++)
    {
        cin >> in_;
        ini_ = in_[0];
        
        for(int j = 0; j < in_.length(); j++)
        {
            if(in_[j] == ini_[0])
            {
                if((j+1) <= in_.length())
                {
                    if((in_[j] == in_[j+1]))
                    {
                       C++;   
                       B++;
                    }
                        
                }

            }
            else if(in_[j] != ini_[0])
            {
                if((j+1) <= in_.length())
                {
                    if((in_[j] == in_[j+1]))
                       B++;
                }   
            }
            else
                break;
        }
         
        firstcheck = ((C == in_.length() - 1) && (in_[0] == in_[1]));
        if(firstcheck)
        {
            cout <<  C << endl;
        }
        else
        {
            if(C == 0)
            cout << C << endl;
            else
            cout << B << endl;
        }
        
        C = 0;
        B = 0;
            
    }
    return 0;
}
