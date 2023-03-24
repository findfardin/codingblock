#include<bits/stdc++.h>
using namespace std;
findI(int n,int i){
if(((1 << i-1) & n) ==  n) cout <<"Set bit means 1";
	else cout <<"Clear bit means 0";
}
int main(){
	int n,i;
	cin >> n;
	cin >> i;
	findI(n,i);

}