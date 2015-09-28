#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

//0.01seconds on TestCase #25
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T_i,Q_i,A_i;
    set<int> myset; set<int>::iterator it;
    
    cin >> T_i;
    for(int i = 0; i < T_i; i++)
    {
        cin>>Q_i>>A_i;
        if(Q_i == 1)
            myset.insert(A_i);
        else if(Q_i == 2)
            myset.erase(A_i);
        else if(Q_i == 3)
        {
            it=myset.find(A_i);
            if(it != myset.end())
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}
