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
    
    for(int index = 0; index < R; index++)
    {
        if( M > 2 && N > 2)
        {
            //OUTER LOOP SWITCH PART_1 - START
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

                        /* 

                        OUTER SUBJECTIVE ROTATION - START

                        */
                        //Bottom-Left-To-Right Rotation
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
                        }//Bottom-Left-To-Right Rotation - END
                    }
                }
            }//OUTER LOOP SWITCH PART_1 - END

            for(int i = 2; i >0; i--)
            {
                temp2 = arr[i][M-1];
                arr[i][M-1] = temp;
                temp = temp2;

                if(i - 1 == 0)
                {
                    for(int j = 3; j > 0; j--)
                    {
                        temp2 = arr[0][j];
                        arr[0][j] = temp;
                        temp = temp2;
                    }
                }
            }

            for(int i = 1; i < 2; i++)
            {
                temp  = arr[i][1];
                arr[i][1] = arr[i][1];
                temp2 = arr[i+1][1];
                arr[i+1][1] = temp; 

                temp = arr[i+1][i+1];
                arr[i+1][i+1] = temp2;
                temp2 = arr[i][i+1];

                arr[i][i+1]= temp;
                arr[i][i]  = temp2;

            }   
        }
        else
        {
            for(int i = 0; i < 1; i++)
            {
                temp  = arr[i][i];
                arr[i][i] = arr[i][i];
                temp2 = arr[i+1][i];
                arr[i+1][i] = temp; 

                temp = arr[i+1][i+1];
                arr[i+1][i+1] = temp2;
                temp2 = arr[i][i+1];

                arr[i][i+1]= temp;
                arr[i][i]  = temp2;
            }   
        }
   
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
