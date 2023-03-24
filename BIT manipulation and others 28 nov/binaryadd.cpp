#include<bits/stdc++.h>
using namespace std;
string addBinary(string a, string b) {
        string ans="";
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int sum = 0,carry = 0,i,y,z;
        int s1 = a.size();int s2 = b.size();
        // cout <<s1 <<s2;
        for(i = 0; i < s1 || i < s2;i++){
            sum = 0;    
            sum += carry;
            if(i < s1){
                y = a[i] - '0';
                sum += y;
            }

            if(i < s2){
                z = b[i] -'0';
                sum += z;
            }
            // cout <<sum <<" ";
            char st = (sum%2) + '0';
           ans += st; // how to put this into ans
            carry = sum/2;

        }
        if(carry != 0){
        	char st = carry+'0';
        	ans += st;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
int main(){
	string a,b;
	cin >>a>>b;
	string s = addBinary(a,b);
	cout <<endl;
	cout <<s;
}