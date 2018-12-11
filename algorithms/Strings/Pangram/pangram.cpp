#include<bits/stdc++.h>
using namespace std;
// Returns true if the string is pangram else false
bool checkPangram (string &str)
{
//a hash table to check the alphabets present in the string
vector<bool> check(26, false);
// For indexing in check[]
int index;
// Traverse all alphabets
for (int i=0; i<str.length(); i++)
{
// finding index of the alphabet if uppercase
if ('A' <= str[i] && str[i] <= 'Z')
index = str[i] - 'A';
// finding index of the alphabet if lowercase
else if('a' <= str[i] && str[i] <= 'z')
index = str[i] - 'a';
// check current alphabet
check[index] = true;
}
// Return false if any alphabet is unchecked
for (int i=0; i<=25; i++)
if (check[i] == false)
return (false);
// If all alphabets were present
return (true);
}

int main()
{
string str = "The quick brown fox jumps over the lazy dog";  //Input String
if (checkPangram(str) == true)
cout<<"PANGRAM";
else
cout<<"NOT PANGRAM";
return(0);
}
