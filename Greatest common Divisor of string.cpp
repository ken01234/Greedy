#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
string check(string str1, string str2){
    vector<char>ans = {};
  int count = 0;
  ans.push_back("o");
        if(str1.length() < str2.length()){
        for(int i =0;i<str1.length();i++){
            if(str1[i]==str2[i]){
                cout<< str1[i];
                ans.push_back(str1[i]);
               count+=1;
            }
          if(str1[i]==ans[count]){
            break;
          }

        }
          
        }else{
        for(int j =0;j<str2.length();j++){
            if(str2[j]==str1[j]){
                ans.push_back(str2[j]);
                cout<<str2[j];
                count+=1;
            }if(str2[j]==ans[count]){
            break;
          }
        }
        return "";
}
  }
int main(){
  check("LEET", "CODE");
}