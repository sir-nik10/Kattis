#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;
int main() {
  string text,key,newText;
  cin>> text >> key;
  int current=0;
  //SGZV ACM
  //SGZVQBUQAFRWSLC
  int a,b;
   for(int i=0;i<text.length();i++){
     a=int(text[i]);
     b=int(key[i]);
     if(a<b){
       current=((26+((a-b)%26)) %26)+65;
     }else{
       current=((a-b)%26)+65;
     }
    //cout<<current;
    key+=char(current);
    //cout<<key[i];
    cout<<char(current);
    }
  //cout<<(26 +(-12%26)) %26;
  //(b + (a%b)) % b
}
