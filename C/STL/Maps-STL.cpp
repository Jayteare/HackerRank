#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

//0.21seconds on TestCase #17
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T_i,N_i,Q_i;
    string S_i;
    cin>>T_i;
    map<string,int>m; map<string,int>::iterator itr;
    for(int i = 0; i < T_i; i++)
    {
        cin>> N_i >> S_i;
        if(N_i == 1)
        {
            cin >> Q_i;
            if(itr == m.end())
               m.insert(pair<string,int>(S_i,Q_i));
            else if(itr != m.end())
                m[S_i] += Q_i;
        }
        else if(N_i == 2)
            m[S_i] = NULL;//Makes TestCase #17 run in 0.21seconds ; // m.erase(S_i) makes TestCase #17 run in 0.23seconds ; // m.[S_i] makes TestCase #17 run in 0.21seconds ;
        else if(N_i == 3)
            cout << m[S_i] << '\n';
            
    }
    return 0;
}
