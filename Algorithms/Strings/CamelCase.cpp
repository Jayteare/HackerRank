#include <string>
#include <iostream>
using namespace std;
int main(){
    string temp_;
    cin >> temp_;
    int index = 0;
	for (int i = 0; i < temp_.length(); i++)
	{
		if (isalpha(temp_[i]))
		{
			if (isupper(temp_[i]))
				index++;
		}
	}
    cout << (index+1) << endl;
    return 0;
}
