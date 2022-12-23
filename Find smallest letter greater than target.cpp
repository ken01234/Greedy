//This is another leet code question. I can solve most of the test cases but when it comes to a case where the one of the given letters is smaller than the target, it tends to give out only the smallest letter of the array, whichi is wrong. Instead, it should only give out the next smallest letter that is still larger than the target letter.

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
           vector<char> left={};
        for(int i =0;i<letters.size();i++){
          if(letters[i]!=target){
          left.push_back(letters[i]);
          if(letters[i]<target){
            return letters[i];
            break;
          }else{
            if(letters[i]<left[0]){
              left[0]=letters[i];
            }
            }
            
          }
        }return left[0];
    }
};
