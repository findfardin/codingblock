#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >>a>>b;
	//a = a + b-(b = a);
	
	//using temp
	// int temp=a;
	// a = b;
	// b =temp;

	// using swap function
	// swap(a,b);
	
	//with arithmetics 
	// a = a+b;
	// b = a-b;
	// a =a-b;
	
	//using xor
	// a = a^b;
	// b = a^b;
	// a = a^b;
	cout <<a<<" "<<b;
}