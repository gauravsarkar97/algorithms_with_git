# Program to check if a number is a Krishnamurthy number or not.

"What is a Krishnamurthy number ?
It is a number whose sum of factorials of digits is equal to the number itself.
For example : 145 is a Krishnamurthy number.
Explanation: 1! + 4! + 5! = 1 + 24 + 120 = 145
So, 145 is a Krishnamurthy number, where n! = n * (n-1) * (n-2) * ...... *1
Thus,  4! = 4 * 3 * 2 * 1

# How to solve?

We extract each digit and compute the factorial of that number and add it to another variable.
We do this step for the number of times as there are digits in the number.
Finally we check if the sum is equal to the original number.

### Input Format

- There will be a single integer of **N** digits.


### Output Format

Message saying if string is "Krishnamurthy" or not.

### Sample Input

```
145
```

### Sample Output

```
Krishnamurthy
```

## Time Complexity

The worst case will be O(digits_in_n * N), where N is the largest digit in the entered number. 
Of course we can decrease the time to logarithmic time by using recursion to compute the factorial of the number.
We can simply incorporate this function in place of the given factorial() function if we want to find the factorial in logarithmic time.
The rest of the code remains same.

### Implemented in:

- [C++](krishna.cpp)
