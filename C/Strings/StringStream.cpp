#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
   istringstream ss(str);
   string delim;
   vector<int> parsed_ints;

    while(std::getline(ss, delim, ',')) 
    {
        parsed_ints.push_back(stoi(delim));
    }
    
    return token_;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
