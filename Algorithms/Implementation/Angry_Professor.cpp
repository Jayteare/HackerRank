#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int T_input = 0;
    int N_input = 0;
    int K_input = 0;
    int A_input = 0;
    int counter = 0;
    
    cin >> T_input;
    for(int index = 0; index < T_input; index++)
    {
        cin >> N_input;
        cin  >> K_input; 
        for(int index_2 = 0; index_2 < N_input; index_2++)
        {
            cin >> A_input;
            if(A_input < 1)
            {
                counter++;
            }
        }
        if(counter < K_input)
        {
            cout << "YES" << endl;    
        }
        else
        {
            cout << "NO" << endl;   
        }
        counter = 0;
    }
    return 0;
}
