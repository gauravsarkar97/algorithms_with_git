#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
   int fact = 1;
   while (n != 0)    
   {      
   	  fact = fact*n;
      n--;
    }
 return fact;
}
void isKrishna(int n)
{
   int sum = 0;
   int temp = n;   
   while (temp != 0)    
      {        
      sum += factorial(temp%10);
      temp = temp/10;
      }
// Check if number is krishnamurthy
 if(sum == n)
    cout<<"Krishnamurthy";
 else
    cout<<"NOT Krishnamurthy";
 }
int main()
{
   int n;
   cin>>n;    
   isKrishna(n);   
   return 0;
}
