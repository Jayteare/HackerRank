#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//0.0seconds TestCase #9
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,N,min_=0,count=0;
    vector<int> v;
    cin >> T;
    for(int i =0;i<T;i++)
    {
        cin>>N;
        v.push_back(N);
    }
    while(v.size() != 0)
    {
        min_ = *min_element(v.begin(),v.end());
        for(int i =0;i<v.size();i++)
        {
            v[i] -= min_;
            count++;
        }
        cout << count << endl;
        v.erase(std::remove(v.begin(), v.end(), 0), v.end());
        count = 0;
    }

    return 0;
}
