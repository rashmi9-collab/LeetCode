class Solution {
public:
void print(int ind,string combos[],vector<string> &ans,string s,string digits){
    if(ind==digits.size()){
        ans.push_back(s);
        return;
    }
    int digit=digits[ind]-'0';
    for(int i=0;i<combos[digit].size();i++)
{
   s.push_back(combos[digit][i]);
   print(ind+1,combos,ans,s,digits);
   s.pop_back();

}
}
    vector<string> letterCombinations(string digits) {
        string combos[]={"" ,"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        string s="";
        print(0,combos,ans,s,digits);
        return ans;
    }
};