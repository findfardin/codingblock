#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {
        int totalwater = 0;
        int size = height.size();
        vector<int> leftmax(size); //making array where every index has its left max
        vector<int> rightmax(size); // rightmax
        leftmax[0] = -1;
        rightmax[size-1] = -1;
        for(int i = 1; i < size; i++){
            leftmax[i] = max(leftmax[i-1],height[i-1]);
        }
        for(int i = size-2; i >=0;i--){
            rightmax[i] = max(rightmax[i+1],height[i+1]);
        }
        for(int i = 0;i < size;i++){
            int water = min(leftmax[i],rightmax[i])-height[i]; // min of left and right max then minus height itself.
            if(water > 0) totalwater += water;
        }
    return totalwater;
    }

int main(){
	int n;
	cin >>n;
	vector<int>v(n);
	for(int i = 0; i < v.size();i++) cin >> v[i];
	cout << trap(v);
}