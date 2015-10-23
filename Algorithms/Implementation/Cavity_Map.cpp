#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

//0.0seconds in TestCase #21 ranked as first seed.
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    string s1,s2,s3;
    vector<string>myV;
    cin >> T;
    for(int i = 0; i <T; i++)
    {
        cin >> s1;
        myV.push_back(s1);
    }
    
    for(int i = 1; i < myV.size()-1;i++)
    {
        s1 = myV[i-1]; s2 = myV[i]; s3= myV[i+1];
        for(int j = 1; j < s2.length()-1; j++)
        {
            if((s1[j] < s2[j]) && (s2[j] > s3[j]))
            {
                if((s2[j-1] < s2[j]) && (s2[j] > s2[j+1]))
                    s2[j] = 'X';    
            }   
        }
        myV[i] = s2;
    }
    
    for(int i = 0; i <myV.size(); i++)
        cout << myV[i] << endl;    

    return 0;
}
