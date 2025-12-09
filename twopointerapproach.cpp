#include<iostream>
#include<vector>
#include<climits>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lp=0,rp=n-1,maxwater=0;
        while(lp<rp){
            int w=rp-lp;
            int ht=min(height[rp] ,height[lp]);
            int currwater=w*ht;
            maxwater=max(maxwater,currwater);
            if(height[lp]<height[rp]){
                lp++;
            }
            else{
                rp--;
            }
        }
        return maxwater;
            //two pointer approach leetcode -> problem number 11
    }
};