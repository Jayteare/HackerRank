
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main()
{
    double n;
    cin>>n;
    // Fill up your code here.
    if(n >= 10.00)
    {
        n  = 10.00;
        n -= 2;
    }
    else if(n < 4)
        n+=n;
    else
        n=8;
    cout << fixed << setprecision(2);
    cout << n << endl;
        
}
