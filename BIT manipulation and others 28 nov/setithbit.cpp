#include<bits/stdc++.h>
using namespace std;
int main(){
	//set ith bit
	int n, i;
	cin >>n;
	cin >>i;
	n = (n | (1 << i - 1));
	cout <<n;
}