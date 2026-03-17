#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  if(n==1)
  {cout<<0;
  return 0;}
  if(n==2){
      cout<<1;
  return 1;
  }
  long long a=0;
  long long b=1;
  long long sum =a+b;
  for(int i=3;i<=n;i++)
  {
     long long third=a+b;
     sum+=third;
     a=b;
     b=third;
  }
  cout<<sum;


    return 0;
}
