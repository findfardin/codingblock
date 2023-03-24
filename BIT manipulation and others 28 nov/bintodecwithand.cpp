#include<bits/stdc++.h>
using namespace std;
vector<int>convertdif(int n){
	vector<int>v;
	while(n != 0){
	v.push_back(n%2);
	n = n/2;
	}
	reverse(v.begin(),v.end());
	return v;
}
vector<int> convert(int n){
	vector<int>v;
	while(n != 0){
		v.push_back(n&1);
		n = n >> 1;
	}
	reverse(v.begin(),v.end());
	return v;
}
int main(){
	int n;
	cin >> n;
	vector<int>v = convertdif(n);
	for(int i = 0; i < v.size();i++) cout <<v[i]<<" ";

}