#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  long int range;
  int count=0,num;
  while(cin>>range){
    vector<int> vec;
    for(int i=0;i<range;i++){
      cin>>num;
      vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    
    count++;
    cout<<endl;
    cout<<"Case "<<count<<": "<<vec.front()<<" "<<vec.back()<< " "<< vec.back()-vec.front();
  }
}
