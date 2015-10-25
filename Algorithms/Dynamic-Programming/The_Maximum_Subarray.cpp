#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//0.2seconds in Testcase #2;

// * Add all the positive elements (CHECK);
// * Find the contunious sub-array (CHECK);
// * Find the highest negative number in the given array (CHECK);
int pos_sum(int *ar, int size)
{
    int pos_sum   = 0;
    int neg_count = 0;
    for(int i = 0; i < size; i++)
    {
        if(ar[i] > 0)
            pos_sum += ar[i];
        else
            neg_count++;
    }
    
    if(neg_count == size)
    {
        int low      = ar[0];
        int high_low = 0;
        for(int i = 0; i < size; i++)
        {
            high_low = (ar[i] < low ? ar[i] : low);
            if(high_low > low)
                low = high_low;
        }

        pos_sum = low;
    }
        
    return pos_sum;
}
/* 
    
    Max sequential sum, sub array; 
    Uses Kadene Algorithm;
    
*/
int max_sub(int *ar, int size)
{
    int c_max = 0;//current max;
    int b_max = 0;//best max;
    
    for(int i = 0 ; i < size; i++)
    {
        c_max = c_max + ar[i];
        if(c_max < 0)
            c_max = 0;
        else if(c_max > b_max)
            b_max = c_max;
    }
    
    return b_max;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,size = 0;
    cin >> T;
    while(T)
    {
        cin >> size;
        int arr[size];
        for(int i = 0; i < size ;i++)
            cin >> arr[i];
        int max_sum = pos_sum(arr,size); //Gathers the max_positive sum in the array as a non-sequential array;
        int max_seq = max_sub(arr,size); //Gathers the max_positive sum in the array as a sequential array;
        if(max_seq < 1)
        {
            max_seq = max_sum;    
        }
        cout << max_seq << " " << max_sum << endl;
        T--;
    }
    return 0;
}
