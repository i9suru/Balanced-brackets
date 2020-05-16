#include <bits/stdc++.h>
using namespace std;

int main() {
	//[{}]
	string s;
	cin>>s;
	stack<char> var;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='{' || s[i]=='(' || s[i]=='[')
		{
			var.push(s[i]);
		}
		else
		{
			if(s[i]=='}' && var.top()=='{' )
			{
				var.pop();
			}
			else if(s[i]==']' && var.top()=='[' )
			{
				var.pop();
			}
			else if(s[i]==')' && var.top()=='(' )
			{
				var.pop();
			}
		}
	}
	if(var.empty())
	{
		cout<<"balanced";
	}
	else
	{
		cout<<"not balanced";
	}
}