#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

//Influenced by albrio1
#define ALPHA 26
int K;
char A;
string S;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> K >> S >> K;
    for(auto &C: S)
    {
        if(isalpha(C))
        {
            A = isupper(C)?'A':'a';
            C = A + (C - A + K)%ALPHA;
        }
    }       
    cout << S + "\n";
    
    return 0;
}
