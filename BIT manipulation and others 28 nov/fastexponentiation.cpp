#include<bits/stdc++.h>
using namespace std;
int fastexpo(int a,int b){
	int placevalue = 1,ans = 1, i = 0;
	while(b != 0){
		int power = (b&1)*pow(2,i++);
		ans *= pow(a,power);
		b >>= 1;
	}
	return ans;
}
int main(){
	int a ,b;
	cin >>a >>b;
	cout <<fastexpo(a,b);
}