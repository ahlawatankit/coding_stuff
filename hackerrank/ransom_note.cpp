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

bool ransom_note(vector<string> magazine, vector<string> ransom) {
    unordered_map<string,int> word_store;
    for(int i=0;i<magazine.size();i++)
    {
        if(word_store.find(magazine[i])==word_store.end())
        {
            word_store[magazine[i]]=1;
        }
        else
        {
            word_store[magazine[i]]+=1;
        }
    }
     for(int i=0;i<ransom.size();i++)
    {
        if(word_store.find(ransom[i])==word_store.end())
        {
            return false;
        }
        else
        {
            word_store[ransom[i]]-=1;
            if(word_store[ransom[i]]<0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}