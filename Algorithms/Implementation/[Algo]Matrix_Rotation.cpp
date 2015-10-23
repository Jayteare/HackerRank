#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//0.08seconds in TestCase #9 ranked as first seed.
unsigned M,N,R,in_,temp,temp2;
unsigned X = 0, inc = 1;
unsigned N_counter = 0, Mn = 0,outer_R = 0, L_R = 0;
bool init_1 = false, init_2 = false, init_3 = false;

unsigned rotation_R(unsigned M, unsigned N, unsigned dec)
{
    return ((N - dec) + (M - dec) + (N - dec) + (M - dec));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    cin >> M >> N >> R;
    outer_R = R;
    
    init_1 = M >= N; //Performance increase by 0.01 seconds;
    if(init_1)
        Mn = N/2; //Even Matrix Grid;
    else
        Mn = M/2; //Odd Matrix Grid;
    
    N_counter = Mn; //Outer Rotation;
    unsigned arr[M][N]; // Array creation M X N matrix;
    //Array population;
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
            init_2 = ((M>2) && (N>2));//Increases performance time by 0.1 seconds.
            if(init_2)
            {
                //LEFT MATRIX ROTATION - [0+X][X];
                for(unsigned i = X; i < (M-1)-X; i++)
                {
                    init_3 = i==X;
                    if(init_3)
                    {
                        temp2     = arr[i][i+1];
                        temp      = arr[i][X]; 
                        arr[i][X] = temp2;
                    }

                    temp2 = arr[i+1][X];
                    arr[i+1][X] = temp;
                    temp = temp2; 
                }         
                //BOTTOM MATRIX ROTATION -[(Max size Row - 1) - X][1+(X+1)]
                for(unsigned j = 1+X; j < (N-1)-X; j++)
                {
                    temp2 = arr[(M-1)-X][j];
                    arr[(M-1)-X][j] = temp;
                    temp = temp2; 
                }
                //RIGHT MATRIX ROTATION - [((Max size Row - 1) - (X+1)) - 1] [((Max size Column-1)-(X+1))]
                for(unsigned k = (M-1)-X; k > X; k--)
                {
                    temp2 = arr[k][(N-1)-X];
                    arr[k][(N-1)-X] = temp;
                    temp = temp2;   
                }               
                //TOP MATRIX ROTATION - [(Max size Column-1) - (X+1)][(X+1)+1]
                for(unsigned h = (N-1)-X; h > X; h--)
                {
                    temp2 = arr[X][h];
                    arr[X][h] = temp;
                    temp = temp2; 
                }                    
            }
            //RESET;
            temp2 = 0;
            temp  = 0;    
        }
        //INCREMENTATION;
        X++;inc +=2;
    }
    
    //PRINT THE 2D ARRAY
    for(unsigned i = 0; i < M ; i++)
    {
        for(unsigned j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }  
    return 0;
}
