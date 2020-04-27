#include <bits/stdc++.h> 
using namespace std; 
  
vector<int>store; 
void grp(int l, int r) 
{ 
  
if (l > r) 
    return; 
int n = rand() % (r - l + 1) + l;  
store.push_back(n); 
grp(l, n - 1); 
grp(n + 1, r); 
} 
  
void printvalue() 
{ 
for (auto i : store) 
    cout << i << " ";  
} 
int main() 
{ 
int l = 5; 
int r = 15; 
grp(l, r); 
printvalue(); 
return 0; 
} 
