#include<iostream>
#include <vector>
#include <string>
using namespace std;

long long maxpairwiseproduct(vector<int> &numbers){

    int max_index1 = -1;
  for (int i = 0; i < numbers.size(); ++i)
      if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
          max_index1 = i;

  int max_index2 = -1;
  for (int j = 0; j < numbers.size(); ++j)
      if ((j != max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
          max_index2 = j;

  return ((long long) (numbers[max_index1])) * numbers[max_index2];

}
int main() {
    vector<int> vec ;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){

        int x;
        cin>>x;
        vec.push_back(x);

    }


    long long maxproduct=maxpairwiseproduct(vec);
    cout<<maxproduct<<endl;
    return 0;
}







