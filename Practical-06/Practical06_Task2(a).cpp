#include<bits/stdc++.h>
using namespace std;
void reverseStr(string& str)
{
int n=str.length();
for(inti=0;i<n/2;i++)
swap(str[i],str[n-i-1]);
}
int main()
{
string str="hello world";

reverseStr(str);
cout<<"Reverse (user defined function):"<<str<<endl;
return 0;
}

