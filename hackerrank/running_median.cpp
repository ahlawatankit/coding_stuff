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


int main(){
    // decalare two heap;
    priority_queue<int , vector<int>, less<int>> max_heap;
    priority_queue<int , vector<int>, greater<int>> min_heap;
    int n;
    cin >> n;
    float median=0.0;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    for(int a_i=0;a_i<n;a_i++)
    {
         if(min_heap.size()==max_heap.size())
         {
             if((float)a[a_i]>median)
             {
                 min_heap.push(a[a_i]);
                 median=(float)min_heap.top();
                 printf("%.1f\n",median);
             }
             else{
                 max_heap.push(a[a_i]);
                 median=(float)max_heap.top();
                 printf("%.1f\n",median);
             }
         }
        else if(min_heap.size()>max_heap.size())
        {
            if((float)a[a_i]>median)
             {
                 max_heap.push(min_heap.top());
                 min_heap.pop();
                 min_heap.push(a[a_i]);
                 median=(float)min_heap.top()+(float)max_heap.top();
                 median=median/2.0;
                 printf("%.1f\n",median);
             }
             else{
                 max_heap.push(a[a_i]);
                 median=(float)min_heap.top()+(float)max_heap.top();
                 median=median/2.0;
                 printf("%.1f\n",median);
             }
        }
        else 
        {
           if((float)a[a_i]<median)
             {
                 min_heap.push(max_heap.top());
                 max_heap.pop();
                 max_heap.push(a[a_i]);
                 median=(float)min_heap.top()+(float)max_heap.top();
                 median=median/2.0;
                 printf("%.1f\n",median);
                 
             }
             else{
                 min_heap.push(a[a_i]);
                 median=(float)min_heap.top()+(float)max_heap.top();
                 median=median/2.0;
                 printf("%.1f\n",median);
             } 
        }
    }
    return 0;
}
