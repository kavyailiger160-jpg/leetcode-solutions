# Problem: Two Sum (Easy)

**Link:** LeetCode — Two Sum

## Approach

I used a hash map to solve the Two Sum problem efficiently. For each element, I calculate the complement needed to reach the target and check whether that complement has already been stored in the hash map. If it exists, I return the indices of the two numbers.

## Complexity

* **Time:** O(n)
* **Space:** O(n)

## Notes

I tested the solution locally using two test cases before submitting it to LeetCode. The second test case checks duplicate values: `[3, 3]` with target `6`.
