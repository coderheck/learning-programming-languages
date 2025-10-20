#include"iostream"
#include"vector"
using namespace std;
class Solution {
public:
  vector<int>twoSum(vector<int>& nums, long long target) {
    vector<int>res;
    int n=nums.size();
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(nums[i]+nums[j]==target){
          res.push_back(i);
          res.push_back(j);
        }
      }
    }
    return res;
  }
};
int main(){
  vector<int>nums={2,7,11,15};
  long long target=9;
  Solution sol;
  vector<int>res=sol.twoSum(nums,target);
  cout<<res[0]<<" "<<res[1];
}