#include <iostream>
using namespace std;


//0.0seconds in TestCase #11
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int T = 0, N = 0, K = 0, A = 0, counter = 0;
    
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin  >> N >> K; 
        for(int j = 0; j < N; j++)
        {
            cin >> A;
            if(A < 1)
                counter++;
        }
        if(counter < K)
            cout << "YES" << endl;    
        else
            cout << "NO" << endl;   
        counter = 0;
    }
    return 0;
}
