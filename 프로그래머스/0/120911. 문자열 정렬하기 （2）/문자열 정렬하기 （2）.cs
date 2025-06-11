using System;

public class Solution {
    public string solution(string my_string) {
        
        string lower = my_string.ToLower();
        
        char[] chars = lower.ToCharArray();
        
        Array.Sort(chars);
        
        string answer = new string(chars);
        
        return answer;
    }
}