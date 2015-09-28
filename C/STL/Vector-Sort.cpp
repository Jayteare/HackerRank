#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//0.05s on TestCase #6
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T_i,N_i;
    vector<int> my_v;
    cin>> T_i;
    for(int index= 0; index<T_i; index++)
    {
        cin>>N_i;
        my_v.push_back(N_i);    
    }
    sort(my_v.begin(),my_v.end());
    for(int index=0; index<my_v.size(); ++index)
        cout << my_v[index] << ' ';
    
    return 0;
}
