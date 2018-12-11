# Pangram

You are given a String S. Check whether the given string S is a Pangram or not. 
The Sentence which contains all the letters in the English Alphabet is known as Pangram.

# How to solve?

The idea is to use a boolean array check[]. When an alphabet is encountered the respetive position of the alphabet in check[] is made true, while iterating through the string. 
Both the lowercase and uppercase alphabets are considered same. 
After the string, we iterate through the check[] if any index is false, the string is not a Pangram.

### Input Format

- There will be a single string of length **N**.


### Output Format

Message saying if string is "Pangram" or not.

### Sample Input 1

```
The quick brown fox jumps over the lazy dog 
```

### Sample Output 1

```
Pangram
```

### Sample Input 2

```
The quick brown fox jumps over the dog 
```

### Sample Output 2

```
NOT Pangram
```

## Time Complexity

The time complexity is __O(N)__ where N is the length of the string.

### Implemented in:

- [C++](pangram.cpp)
