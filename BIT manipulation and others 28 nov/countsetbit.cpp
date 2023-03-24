#include<bits/stdc++.h>
using namespace std;
int  briankcount(int n){
	int count = 0;
	while(n > 0){
		count++;
		n = n & (n - 1); // last set bit turns into clear bits.
	}
	return count;
}
int count(int n){
	int c= 0;
	while(n != 0){
		if((n & 1) == 1) c++;
		n >>= 1;
	}

	return c;
}
int main(){
	int n;
	cin >> n;
	cout << count(n)<<endl;
	cout << briankcount(n);
}