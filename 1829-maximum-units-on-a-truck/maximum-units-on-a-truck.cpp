class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](const vector<int>&a,const vector<int>&b)
        {
            return a[1]>b[1];
        });
    int value=0;
    for(auto it:boxTypes)
    {
        if(truckSize<=0)break;
        int nboxes=min(it[0],truckSize);
        value+=nboxes*it[1];
        truckSize-=nboxes;
    }
return value;
    }
};