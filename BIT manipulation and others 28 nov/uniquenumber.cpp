#include<bits/stdc++.h>
using namespace std;
int find(vector<int>v){
	int x = v[0];
	int n = v.size();
	for(int i = 1; i < n; i++) x = x^v[i];
	return x;
}
int main(){
	int n;
	cin >>n;
	vector<int>v(n);
	for(int i = 0; i < n;i++){
		cin >>v[i];
	}
	cout <<find(v);
}