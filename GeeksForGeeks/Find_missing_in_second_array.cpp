class Solution {

  public:
    vector<int> findMissing(vector<int>& a, vector<int>& b) {
        const int N=1e6;
        bool hash[N] = {0};
        for(int i=0; i<a.size(); i++) {
            hash[a[i]]=true;
        }
        vector<int> v;
        
        for(int i=0; i<b.size(); i++) {
            hash[b[i]]=false;
        }
        
        for(int i=0; i<a.size(); i++) {
            if(hash[a[i]]==true) {
                v.push_back(a[i]);
            }
        }
        return v;
    }
    
};

