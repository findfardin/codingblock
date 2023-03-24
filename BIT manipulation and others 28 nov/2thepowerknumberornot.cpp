#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >>n;
	if((n&(n-1)) == 0) cout <<"true";//brian k remove last set bit.
	else cout <<"false";
}	