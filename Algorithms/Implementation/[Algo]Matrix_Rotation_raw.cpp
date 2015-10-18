#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int M,N,R,in_,temp,temp2;
    cin >> M >> N >> R;
    
    int arr[M][N];
    for(int i = 0; i < M ; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> in_;
            arr[i][j] = in_;
        }
    }
    
    for(int i = 0; i < M; i++)
    {
        if(i == 0)
        temp = arr[i][0];
        if(i+1 < M)
        {
            if(i == 0)
            {
                arr[i][0]   = arr[i][1];
                temp2 = arr[i+1][0];
                arr[i+1][0] = temp;
                temp = temp2;
            }
            else
            {
                temp2 = arr[i+1][0];
                arr[i+1][0] = temp; 
                temp = temp2;
                
//                cout << i + 1 << endl;
                
                if(i+1 == M - 1)
                {
                    for(int j = 0; j < N; j++)
                    {
                        if(j+1 < N)
                        {
                            temp2 = arr[i+1][j+1];
                            arr[i+1][j+1] = temp;
                            temp = temp2;
                        }
                    }
                }
            }
            

        }
    }
    
    for(int i = 0; i < M ; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    

    
    return 0;
}
