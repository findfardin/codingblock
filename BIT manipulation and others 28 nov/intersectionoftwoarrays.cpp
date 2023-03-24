#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int>a,vector<int>b){
	vector<int>ans;
	for(int i = 0; i < a.size();i++){
		for(int j =0; j  < b.size(); j++){
			if(a[i] == b[j]) {
				cout <<a[i]<<b[j];
				ans.push_back(a[i]);
				a[i] = INT_MIN;
				b[j] = INT_MIN;
				break;
			}
		}
	}
	sort(ans.begin(),ans.end());
	cout <<"[";
	for(int i = 0;i< ans.size();i++){
	 if(i == ans.size()-1) cout <<ans[i];
	 else cout <<ans[i]<<", ";
	}
	cout<<"]";

}
int main(){
	int n;
	cin >>n;
	vector<int> a(n);
	vector<int> b(n);
	for(int i = 0; i < n; i++) cin >>a[i];
	for(int i = 0; i < n; i++) cin >>b[i];
	intersection(a,b);
}