#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int M,N,R,in_,temp,temp2;
    int X = 0, inc = 1;
    int N_counter = 0;
    cin >> M >> N >> R;
    
    N_counter = 2;
    int arr[M][N];
    for(int i = 0; i < M ; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> in_;
            arr[i][j] = in_;
        }
    }
    
    for(int index = 0; index < N_counter; index++)
    {
        for(int jndex = 0; jndex < R; jndex++)
        {            
            if( M > 2  && N > 2)
            {
                //LEFT
                for(int i = X; i < (M-1)-X; i++)
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
                for(int j = 1+X; j < (N-1)-X; j++)
                {
                    temp2 = arr[M-inc][j];
                    arr[M-inc][j] = temp;
                    temp = temp2; 
                }
                
                //RIGHT
                for(int k = (M-1)-X; k > X; k--)
                {
                    temp2 = arr[k][(N-1)-X];
                    arr[k][(N-1)-X] = temp;
                    temp = temp2;   
                }    
                
                
                //TOP
                for(int h = (N-1)-X; h > X; h--)
                {
                    temp2 = arr[X][h-X];
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
