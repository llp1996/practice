
//注意无序map容器的使用，find函数的使用，以及map容器的赋值添加功能
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> res;
            unordered_map<int,int> map;
             for(int i=0;i<nums.size();i++)
             {
                 if(map.find(target-nums[i])!=map.end())
                 {
                    res.push_back(i);
                     res.push_back(map[target-nums[i]]);
                     break;
                 }
                 map[nums[i]]=i;
            }
             return res;
    }
};
