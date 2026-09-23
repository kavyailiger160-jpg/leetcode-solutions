# Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

## Approach

I first move all non-zero elements to the beginning of the array while maintaining their original order. Then I fill the remaining positions with zeroes.

## Complexity

* Time: O(n)
* Space: O(1)

## Notes

The relative order of the non-zero elements must remain unchanged. The solution modifies the array in-place.
