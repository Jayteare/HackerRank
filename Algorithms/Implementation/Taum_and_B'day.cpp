#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//0.0s in Testcase #13
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int T, B_req,W_req;
    long int B_cost = 0,W_cost = 0,Z_conv = 0;
    long int total_cost = 0;
    cin>>T;
    while(T)
    {
        cin >> B_req >> W_req;
        cin >> B_cost >> W_cost >> Z_conv;

        total_cost = B_req * min(B_cost, W_cost + Z_conv) + W_req * min(W_cost, B_cost + Z_conv);
        
        cout << total_cost << endl;
        T--; total_cost = 0;    
    }
    return 0;
}
