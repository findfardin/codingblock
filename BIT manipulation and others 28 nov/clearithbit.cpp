#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, i;
	cin >>n;
	cin >>i;
	n = (~(1<<(i - 1))) & n; // clear bit ith, means putting 0 in ith.
	cout <<n; // give 7 , should be 5

}