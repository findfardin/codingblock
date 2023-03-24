#include<bits/stdc++.h>
using namespace std;
long long int bintodec(vector<int>bit){
        long long int ans = 0;
        for(int i = 31; i >= 1; i--){
            int value = bit[i]* (long long int)pow(2,31-i);
            ans += value;
        }
        if(bit[0] == 1) return (-((long long int) pow(2,31)) + ans);
        else return ans; 
    }
    int getbit(int num,int pos){
        return (num&(1<<pos));
    }
    int singleNumber(vector<int>& nums) {
        vector<int>bit(32,0);
        //putting all bits addiing into array then modulo with 3
        for(int i = 0; i  < nums.size(); i++){
            int pos = 0;
            for(int j = 31; j >= 0 ;j--){
               if(getbit(nums[i],pos++)) bit[j]++;
            }
         }
         for(int i = 0; i < 32; i++){
             bit[i] = bit[i] %3;
         }
         long long int ans = bintodec(bit);
         return ans;

}
int main(){
	int n;
	cin >>n;
	vector<int>v(n);
	for(int i = 0; i < n; i++) cin >>v[i];
	cout <<singleNumber(v);
}