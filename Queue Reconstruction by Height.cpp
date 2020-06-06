bool comp(const vector<int>&p,vector<int>&q)
{
    return( p[0]>q[0] ||(p[0]==q[0] && p[1]<q[1]));
}
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>>v;
        sort(people.begin(),people.end(),comp);
        for(int i=0;i<people.size();i++)
        {
            if(people[i][1]==v.size())
                v.push_back(people[i]);
            else
            {
               v.insert(v.begin()+people[i][1],people[i]); 
            }
        }
        return v;
    }
};
