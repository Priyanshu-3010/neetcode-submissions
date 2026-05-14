class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        
        // valid characters store krne ke liye 

        for(char c : s){
            if(isalnum(c)){
                temp+=tolower(c);
            }
        }
        int i = 0;
        int j = temp.length()-1;

        bool palindrome = true;

        while(i<=j){
            if(temp[i]==temp[j]){
                i++;
                j--;
            }
            else{
                palindrome = false;
                break;
            }
        }
        return palindrome;
    }
};
