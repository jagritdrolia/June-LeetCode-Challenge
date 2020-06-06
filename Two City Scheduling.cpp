
bool compare(const vector<int>&a,const vector<int>&b)
{
    return ((a[0]-a[1])<(b[0]-b[1]));
}
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
       sort(costs.begin(),costs.end(),compare); 
        int ans;
        for(int i=0;i<costs.size()/2;i++)
            ans+=costs[i][0];
        for(int i=costs.size()/2;i<costs.size();i++)
            ans+=costs[i][1];
        
        return ans;
    }
};
