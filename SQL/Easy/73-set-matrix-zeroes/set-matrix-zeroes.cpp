class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {

    int m=v.size();
    int n=v[0].size();    
    vector<bool> zeroRow(m, false);
    vector<bool> zeroColumn(n, false);

    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(v[i][j] == 0){
                zeroRow[i] = true;
                zeroColumn[j] = true;
            }
        }
    }

    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(zeroRow[i] || zeroColumn[j]){
                v[i][j] = 0;
            }
        }
    }
    }
};