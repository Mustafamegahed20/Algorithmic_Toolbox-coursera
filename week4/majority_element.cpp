#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
#include<math.h>
using std::vector;
using namespace std;
int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  //write your code here


  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  map<long long,long long>mp;
  long long mx=-1;
  for (int i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
    mp[a[i]]++;
    // cout<<mp[a[i]]<<" ";
    mx=max(mx,mp[a[i]]);
  }
  // cout<<mx<<endl;
  std::cout << (mx>n/2)?1:0 << '\n';
}
