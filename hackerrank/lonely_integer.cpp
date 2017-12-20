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

int lonely_integer(vector < int > a,int n) 
{
    unordered_map<int,int> umap;
     for(int a_i = 0;a_i < n;a_i++){
        if(umap.find(a[a_i])==umap.end())
        {
            umap.insert(make_pair(a[a_i],1));
        }
         else
         {
           umap.erase(a[a_i]);  
            umap.insert(make_pair(a[a_i],2));
         }
    }
    unordered_map<int,int>:: iterator itr;
    for(itr=umap.begin();itr!=umap.end();itr++)
    {
        if(itr->second==1)
        {
            return itr->first;
        }
    }
    return 0;         
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    cout << lonely_integer(a,n) << endl;
    return 0;
}