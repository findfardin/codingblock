#include<bits/stdc++.h>
using namespace std;
int rightbit(int n){
	int count = 0;
	while((n&1) == 0){
	 count++;
	 n >>=1;
	}
	return count;
}
vector<int> missingtwonumber(vector<int>v,int n){
	int totalXor = 0;
	vector<int>bit(32,0);
	for(int i = 1; i <= n; i++) totalXor = totalXor^i; 
	for(int i = 0; i < v.size();  i++) totalXor = totalXor^v[i];
		// cout <<totalXor;
	int rightMostBit = rightbit(totalXor);
	int num1 = 0,num2=0;
	// xor all emenents till size
	for(int i = 0;i <= n; i++){
		if((i&(1 <<rightMostBit))) {
			num1 = num1^i;
		}
	}
	//xor of elements available in arrray 
	for(int i = 0;i < v.size(); i++){
		if((v[i]&(1 <<rightMostBit))) {
			num1 = num1^v[i];
		}
	}
	//you will get num1 then xor it with both of their xor and you will get num2
	// cout <<num1;
	num2 = num1^totalXor;
	// cout <<num2;

	return {num1,num2};	
}
int main(){
	int n;
	cin >>n;
	vector<int>v(n);
	for(int i = 0;i < n-2;i++) cin >>v[i];
	vector<int>ans = missingtwonumber(v,n);
	for(int i = 0; i < ans.size(); i++) cout <<ans[i] <<" "; 
}