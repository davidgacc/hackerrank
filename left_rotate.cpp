

/* ------------------------------
|
| Author : David Gutierrez Arias
|
---------------------------------*/

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

vector <int>array_left_rotation_eff(vector<int> a, int n,int k) 
{
    int i =0;
	vector <int> temp(n);
    for (i = k ; i < n ; i++)
		temp[i-k] = a[i];	
	for (i = n-k ; i < n ; i++)
		temp[i] = a[i-(n-k)];	
	return temp;	
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
     vector<int> resp(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    resp = array_left_rotation_eff(a, n, k);
    for(int i = 0; i < n;i++)
        cout << resp[i] << " ";
    cout << endl;
    return 0;
}
