using System;

public class Solution {
    public string solution(string my_string) {
        string answer = "";
        foreach (char char_element in my_string)
        {
            if (char.IsLower(char_element))
            {
                answer += char.ToUpper(char_element);
            }
            else
            {
                answer += char.ToLower(char_element);
            }
        }
        return answer;
    }
}