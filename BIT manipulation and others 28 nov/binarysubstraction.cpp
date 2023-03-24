#include<bits/stdc++.h>
using namespace std;
string substraction(string a,string b){
	string s = "",int num1,num2,sum;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for(int i = 0; i < max(a.size(),b.size());i++){
		num=0;
		if(i < a.size()) {
			num1 = (a[i] -'0');
		}
		if(i < a.size()) {
			num2 = (a[i] -'0');
		}
		sum = num1 - min(num1,num2);
		s + =sum;

	}
	return s;
}
int main(){
	string a,b;
	cin >>a>>b;
	string s = substraction(a,b);
	cout << s;
}