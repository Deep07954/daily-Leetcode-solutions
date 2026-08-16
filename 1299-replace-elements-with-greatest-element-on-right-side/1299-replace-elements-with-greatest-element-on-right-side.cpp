class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
             int n=arr.size();
    //right se left travrsekro is pattern ko suffix maximum kehtehai jisme hum ek variable main righ se left tk maxm store krk rkhenge ke
    int maxright=-1;
    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        arr[i]=maxright;
        maxright=max(maxright,curr);

    }
    return arr;
    }
};