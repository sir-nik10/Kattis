#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
  int list,num;
  vector<int> fixed;
  vector<int> temp;
  vector<int> unfixed;
  while(cin>>list){
    if(list == 0){
      return 0;
    }
    for(int i=0;i<list;i++){
      cin>>num;
      fixed.push_back(num);
    }
    for(int j=0;j<list;j++){
      cin>>num;
      unfixed.push_back(num);
    }
    temp = fixed;
    sort(temp.begin(),temp.end());
    sort(unfixed.begin(),unfixed.end());
    
    //cout<<"----begin list:----"<<endl;
    cout<<endl;
    for(int i: fixed){
      auto it = find(temp.begin(), temp.end(), i);
      int index = it - temp.begin();
      cout<<unfixed[index]<<endl;
    }
    cout<<endl;
    fixed.clear();
    temp.clear();
    unfixed.clear();
  }
}
