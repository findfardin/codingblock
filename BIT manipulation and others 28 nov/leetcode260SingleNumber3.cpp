/* if you have xor of two elements you can find which are those int that array*/
/*1. all xor, you will have those two numbers xor
2. find from right which bit is set bit,
that bit of those two numbers must be different
*/
#include<bits/stdc++.h>
using namespace std;
int rightbit(int totalxor){
        int bit = 0;
       while((totalxor&1) == 0 ){
            totalxor >>=1;
            bit++;
            }
        return bit;
    } 
    vector<int> singleNumber(vector<int>& nums) {
        int totalxor = 0;
        int n = nums.size(); 
         // get total xor means those two elements xor
        for(int i = 0; i < n; i++) totalxor = totalxor^nums[i];
        //find the right most set bit of xor value
        int rightmostsetbit = rightbit(totalxor);
        int num1 = 0,num2 = 0;
        //xor only those whos that particular bit is set
        for(int i = 0;i < n;i++) {
            if((nums[i] & (1 << rightmostsetbit))) num1 = num1^nums[i];  
        }
        num2 = totalxor^num1;
        return {num1,num2};      

}
int main(){
	int n;
	cin >>n;
	vector<int>v(n);
	for(int i = 0; i < n; i++) cin >>v[i];
	vector<int>ans = singleNumber(v);
	for(int i = 0; i  < ans.size(); i++) cout <<ans[i] <<" ";
}