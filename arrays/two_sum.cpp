class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
 // brute force O(n^2) :

    //          vector<int> ans;
    //          for(int i=0;i<nums.size();i++){
    //              for(int j=i+1;j<nums.size();j++){
    //                  if(nums[i]+nums[j]==target){
    //                      ans.push_back(i);
    //                      ans.push_back(j);
    //                      break;
    //                  }
    //              }
    //              if(ans.size()==2){
    //                  return ans;
    //              }
    //          }   
    //  return ans;


// Two - Pointer approach O(nlogn) :

    //   vector<int> v(nums);
    //   sort(v.begin(),v.end());
    //   int s = 0;
    //   int e = nums.size()-1;
    //   vector<int> ans,v2;
    //   while(s<e){
    //       if(v[s]+v[e]==target){
    //           v2.push_back(v[s]);
    //           v2.push_back(v[e]);
    //           break;
    //       }
    //       else if(v[s]+v[e]>target){
    //           e--;
    //       }
    //       else{
    //           s++;
    //       }
    //   } 
    //   for(int i=0;i<nums.size();i++){
    //       if(nums[i]==v2[0]){
    //           ans.push_back(i);
    //           continue;
    //       } 
    //       if(nums[i]==v2[1]){
    //           ans.push_back(i);
    //       } 
    //       if(ans.size()==2){
    //           break;
    //       }
    //   }
    // return ans;


// Using hash map
    vector<int> res;
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); ++i) {

   	 if (mp.find(target - nums[i]) != mp.end()) {

   		 res.emplace_back(i);
   		 res.emplace_back(mp[target - nums[i]]);
   		 return res;
   	 }

   	 mp[nums[i]] = i;
    }

    return res;




      }
    
    };
