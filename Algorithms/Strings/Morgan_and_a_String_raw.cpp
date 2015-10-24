#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>     
#include <algorithm>       
#include <string>
#include <fstream>
#include <stack>
using namespace std;

vector<string> myV;
int T;
int s1_len   = 0, s2_len   = 0;
int s1_size  = 0, s2_size  = 0;
int s1_count = 0, s2_count = 0;
bool lane1_ = false; bool lane2_ = false;
bool swap_1 = false; bool swap_2 = false;
int s1_sum = 0, s2_sum = 0;
string S1, S2;
string C1, C2;
string E1, E2;

int sim_count(string S_)
{
	int s_sum = 0;
	for (int i = 0; i < S_.length(); i++)
	{
		if (S_[0] == S_[i])
			s_sum++;
		else
			return s_sum;
	}

	return s_sum;
}

int sim_count2(string S_1, string S_2,int index)
{
	int s_sum = 0;
	int max_r = 0;
	if (S_1.length() < S_2.length())
		max_r = S_1.length();
	else if (S_1.length() > S_2.length())
		max_r = S_2.length();
	else
		max_r = S_1.length();

	for (int i = index; i < max_r; i++)
	{
		if (S_1[i] == S_2[i])
		{
			s_sum++;
		}
		else
			return s_sum;
	}

	return s_sum;
}

//void print_string(string S_)
//{
//
//}

int main()
{
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	ifstream fin("hacker.txt");
	ofstream fout("hackero.txt");
	fin >> T;
	for (int j = 0; j < T; j++)
	{
		fin >> S1 >> S2;

		s1_size = S1.length();
		s2_size = S2.length();
		while ((s1_count + s2_count) < (s1_size + s2_size))
		{
			if (!S1.empty())
				C1 = S1[s1_len];
			else
			{
				myV.push_back(S2);
				break;
				swap_1 = true;
			}

			if (!S2.empty())
				C2 = S2[s2_len];
			else
			{
				myV.push_back(S1);
				break;
				swap_2 = true;
			}


			if (C1 < C2)
			{
				if (!S1.empty())
				{
					myV.push_back(C1);
					S1.erase(0, 1);
					s1_count++;
				}
				else
				{
					myV.push_back(C2);
					S2.erase(0, 1);
					s2_count++;
				}

			}
			else if (C1 > C2)
			{
				if (!S2.empty())
				{
					myV.push_back(C2);
					S2.erase(0, 1);
					s2_count++;
				}
				else
				{
					myV.push_back(C1);
					S1.erase(0, 1);
					s1_count++;
				}
			}
			else if (C1 == C2)
			{
				s1_sum = sim_count(S1);
				s2_sum = sim_count(S2);

				if (s1_sum < s2_sum)
				{
					myV.push_back(S1.substr(0, s1_sum));
					S1.erase(0, s1_sum);
					s1_count += s1_sum;
				}
				else if (s1_sum > s2_sum)
				{
					myV.push_back(S2.substr(0, s2_sum));
					S2.erase(0, s2_sum);
					s2_count += s2_sum;
				}
				else if (s1_sum == s2_sum)
				{
					int og_count = sim_count2(S1, S2, s1_sum);
					if (og_count > 0)
					{
						if (!S1.empty())
						{
							E1 = S1[s1_sum+og_count];
						}

						if (!S2.empty())
						{
							E2 = S2[s2_sum+og_count];
						}
					}
					/* 
						FIX THIS SECTION AMIGOSAN
					*/
					if (((s1_sum > 1) && (s2_sum > 1)) && (og_count < 0))
					{
						if (!S1.empty())
						{
							E1 = S1[s1_sum];
						}

						if (!S2.empty())
						{
							E2 = S2[s2_sum];
						}

						//cout << E1 << endl;
						//cout << E2 << endl;
						if (E1 < E2)
						{
							myV.push_back(S1.substr(0, s1_sum + 1));
							S1.erase(0, s1_sum + 1);
							s1_count += s1_sum + 1;
						}
						else if (E1 > E2)
						{
							myV.push_back(S2.substr(0, s2_sum + 1));
							S2.erase(0, s2_sum + 1);
							s2_count += s2_sum + 1;
						}
						else
						{
							myV.push_back(S2.substr(0, s2_sum + 1));
							S2.erase(0, s2_sum + 1);
							s2_count += s2_sum + 1;
						}
					}
					else
					{
						myV.push_back(S2.substr(0, s2_sum));
						S2.erase(0, s2_sum);
						s2_count += s2_sum;
					}
				}
			}

			s1_sum = 0;
			s2_sum = 0;
		}

		swap_1 = false;
		swap_2 = false;
		for (int i = 0; i < myV.size(); i++)
			std::cout << myV[i];
		std::cout << endl;

		myV.clear(); s1_count = 0; s2_count = 0;

	}

	cin.get();
	return 0;
}
