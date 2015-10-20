#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned M,N,R,in_,temp,temp2;
    unsigned X = 0, inc = 1;
    unsigned N_counter = 0, Mn = 0;
    cin >> M >> N >> R;
    
    //Even Matrix
    if(M >= N)
    {
        Mn = N/2;
    }
    else
    {
        Mn = M/2;
    }
    
    N_counter = Mn;
    unsigned arr[M][N];
    for(unsigned i = 0; i < M ; i++)
    {
        for(unsigned j = 0; j < N; j++)
        {
            cin >> in_;
            arr[i][j] = in_;
        }
    }
    
    for(unsigned index = 0; index < N_counter; index++)
    {
        for(unsigned jndex = 0; jndex < R; jndex++)
        {            
            if( M > 2  && N > 2)
            {
                //LEFT
                for(unsigned i = X; i < (M-1)-X; i++)
                {
                    if(i == X)
                    {
                        temp2     = arr[i][i+1];
                        temp      = arr[i][X]; 
                        arr[i][X] = temp2;
                    }

                    temp2 = arr[i+1][X];
                    arr[i+1][X] = temp;
                    temp = temp2; 
                }   
                
                
                //BOTTOM
                for(unsigned j = 1+X; j < (N-1)-X; j++)
                {
                    temp2 = arr[M-inc][j];
                    arr[M-inc][j] = temp;
                    temp = temp2; 
                }
                
                
                //RIGHT
                for(unsigned k = (M-1)-X; k > X; k--)
                {
                    temp2 = arr[k][(N-1)-X];
                    arr[k][(N-1)-X] = temp;
                    temp = temp2;   
                }  
               
                //TOP
                for(unsigned h = (N-1)-X; h > X; h--)
                {
                    temp2 = arr[X][h];
                    arr[X][h] = temp;
                    temp = temp2; 
                }                 
                
            }
            
            temp2 = 0;
            temp  = 0;    
        }
        
        X++;inc++;
    }
    
    //PRINT
    for(unsigned i = 0; i < M ; i++)
    {
        for(unsigned j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
       
    return 0;
}
