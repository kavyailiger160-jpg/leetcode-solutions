# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

I used a stack to check whether the brackets are properly matched. Opening brackets are pushed into the stack. When a closing bracket is found, it is compared with the top bracket in the stack.

## Complexity

- Time: O(n)
- Space: O(n)

## Notes

The string is valid only when every opening bracket has the correct matching closing bracket and all brackets are properly ordered.