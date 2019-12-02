最大有效括号
public class Solution {
    
    public int longestValidParentheses(String s) {
        int maxlen = 0;
        Stack<Integer>stack = new Stack<Integer>();
        stack.push(-1);
        for(int i =0 ; i<s.length();i++){
            if(s.charAt(i) == '('){
                stack.push(i);
            }else{
                stack.pop();
                if(stack.empty()){
                    stack.push(i);
                }
                else{
                    maxlen = Math.max(maxlen,i-stack.peek());
                }
            }
        }
        return maxlen;
    }
}
