class Solution
{
    public:
        vector<string> lc(string digits, vector<string> ans, int index, unordered_map<char, string> m)
        {
            if (index >= digits.size())
                return ans;
            vector<string> temp;
            for (int i = 0; i < m[digits[index]].size(); i++)
                for (int j = 0; j < ans.size(); j++)
                {
                    temp.push_back(ans[j]);
                    temp.back().push_back(m[digits[index]][i]);
                }
            return lc(digits, temp, index + 1, m);
        }
    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
            return vector<string> ();
        unordered_map<char, string> m;
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        vector<string> ans = { "" };
        return lc(digits, ans, 0, m);
    }
};
