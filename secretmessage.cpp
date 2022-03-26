#include <iostream>
#include <string>
#include <cmath>
#include<iterator>
using namespace std;
int main() {
  int lines;
  cin>>lines;
  while(lines>0){
  string message;
  cin>>message;
      int padding=ceil(sqrt(message.length()));
  string stars (message.size()-padding,'*');

  message.append(stars);
   
  string ans;
  for(int row=0; row<padding;row++){ 
    for(int col=padding-1;col>=0;col--){
      //if(message.at(padding*col+row)!='*'){
        ans.push_back(message.at(padding*col+row));
        //}
      }
    }
    
    for(int i=0;i<ans.length();i++){
      if(ans.at(i)=='*'){
       ans.erase(ans.begin()+i);
      }
    }
    cout<<endl;
    cout<<ans;
    lines--;
    }
}
