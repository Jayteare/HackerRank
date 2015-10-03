#include <iostream>
#include <algorithm>
using namespace std;

//0.02seconds in TestCase #11
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arr_S,T,N,X,Y;
    cin>>arr_S>>T;
    int arr[arr_S];
    for(int i =0; i < arr_S; i++)
    {
        cin>>N;
        arr[i] = N;
    }
    for(int i =0; i<T;i++)
    {
        cin>>X>>Y;
        cout << *min_element(arr+X,arr+Y+1);
        cout << endl;
    }
    return 0;
}
