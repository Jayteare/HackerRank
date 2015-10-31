#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;
#define REP(i,a,b) \
    for(int i = int(a); i < int(b); i++)

//0.04seconds in Testcase #15
int main() 
{
    long long n, k; cin >> n >> k;
    vector<int> prices;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    
    int answer = 0;
    int count  = 0;
    
    // Write the code for computing the final answer using n,k,prices
    sort(prices.begin(), prices.end());
    vector<int>::iterator low; low = std::lower_bound (prices.begin(), prices.end(), k);
    
    int pos_ = (low- prices.begin());
    prices.resize(pos_);
    
    REP(i,0,prices.size())
    {
        answer += prices.at(i);
        if(answer > k)
            break;
        count++;
    }
    
    cout << count << endl;
    return 0;
}
