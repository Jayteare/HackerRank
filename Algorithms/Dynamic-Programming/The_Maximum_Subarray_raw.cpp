#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// * Add all the positive elements (CHECK);
// * Find the contunious sub-array;
int pos_sum(int *ar, int size)
{
    int pos_sum  = 0;
    for(int i = 0; i < size; i++)
    {
        if(ar[i] > 0)
            pos_sum += ar[i];
    }
    return pos_sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,size = 0,sum = 0;
    cin >> T;
    while(T)
    {
        cin >> size;
        int arr[size];
        for(int i = 0; i < size ;i++)
            cin >> arr[i];
        int max_sum = pos_sum(arr,size);
        cout << max_sum << endl;
        T--;
    }
    return 0;
}
