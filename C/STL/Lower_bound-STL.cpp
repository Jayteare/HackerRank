#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//0.47seconds in TestCase #15
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int T_input,H_input;
    vector<long long int>my_v;
    vector<long long int>::iterator low;
    bool find_ = false;
    
    cin>> T_input;
    for(int index =0 ; index < T_input; index++)
    {
        std::cin>>H_input;   
        my_v.push_back(H_input);
    }
    cin >> T_input;
    for(int index =0; index<T_input; index++)
    {
       cin>>H_input;
       low = lower_bound(my_v.begin(), my_v.end(), H_input);
       find_ =my_v[low - my_v.begin()] == H_input;
       if (find_)
           cout << "Yes " << (low - my_v.begin()+1) << endl;
       else
           cout << "No "  << (low - my_v.begin()+1) << endl;
    }
    return 0;
