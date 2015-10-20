#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned M,N,R,in_,temp,temp2;
unsigned X = 0, inc = 1;
unsigned N_counter = 0, Mn = 0,outer_R = 0, L_R = 0;
bool init_1 = false;

unsigned rotation_R(unsigned M, unsigned N, unsigned dec)
{
    return ((N - dec) + (M - dec) + (N - dec) + (M - dec));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    cin >> M >> N >> R;
    outer_R = R;
    
    //Even Matrix
    if(M >= N)
        Mn = N/2;
    else
        Mn = M/2;
    
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
        
        L_R =  rotation_R(M, N, inc); //Reduces the calculated cycles.
        R   =  outer_R % L_R; //Reduces the RPM on the matrix increment.
        
        for(unsigned jndex = 0; jndex < R; jndex++)
        {   
            init_1 = ((M>2) && (N>2));//Increases performance time by 0.1 seconds.
            if(init_1)
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
                    temp2 = arr[(M-1)-X][j];
                    arr[(M-1)-X][j] = temp;
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
        X++;inc +=2;
    }
    
    //PRINT
    for(unsigned i = 0; i < M ; i++)
    {
        for(unsigned j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
       
    return 0;
}
