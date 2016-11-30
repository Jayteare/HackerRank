#include <cmath>
#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>    // std::min_element, std::max_elementusing namespace std;

int main()
{    
  const int N = 26;    
  int _alpha  = 97; // to 122;    
  vector<int> _alphabet(N);   
  vector<int> _word;    
  for(int index = 0; index < N; index++){ cin >> _alphabet[index]; }  
  
  string word;    
  cin >> word;        
  
  for(int index = 0; index < word.length(); index++){ _word.push_back(word[index]); }   
  sort(_word.begin(),_word.end());         
  int _wordL = _word.size();    
  int _min = *min_element(_word.begin(),_word.end());    
  int _max = *max_element(_word.begin(),_word.end());        
  std::vector<int>::iterator it_min;    
  std::vector<int>::iterator it_max;    
  it_min = find(_word.begin(),_word.end(),_min);   
  it_max = find(_word.begin(),_word.end(),_max);    
  int min_index = (N)-((122)-(*it_min));    
  int max_index = (N)-((122)-(*it_max));        
  min_index = min_index - 1;   
  max_index = max_index - 1;       
  int _low  = *min_element(_alphabet.begin()+min_index,_alphabet.begin()+max_index);    
  int _high = *max_element(_alphabet.begin()+min_index,_alphabet.begin()+max_index);        
  cout << (_wordL * _low * _high) << endl;        
  return 0;
  }
