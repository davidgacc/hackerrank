#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
   int i;
   unordered_map<char,int> freq;
   int count=0;
   //store all the ocorrurences
   for ( i = 0; i < a.size(); ++i){
        ++freq[a[i]];
   }
   
   for ( i = 0; i < b.size(); ++i){
		//find
		if (freq.find(b[i]) != freq.end() ) {
			if(freq[b[i]]>0)
				--freq[b[i]];
			else 
				count = count + 1 ;
		}
		//not found
		else 
		{
			count = count + 1 ;
		}
   }

   for (auto& x: freq){
	   count = count + x.second;
   }
  return count;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
