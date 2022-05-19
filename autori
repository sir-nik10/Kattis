#include <iostream>
#include <cstring>

using namespace std;
int main() {
  string name;
  bool next = false;
  
  cin>>name;
  cout<< name[0];
  for(char c: name){
    if(next){
      cout<<c;
      next= false;
    }
    if(int(c) == 45){
      next = true;
    }
  }
} 
