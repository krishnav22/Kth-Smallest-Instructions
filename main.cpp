class Solution {
public:
    long long int get(int a,int b){
        long long int ans = 1;
        int k = a+b;
        while(k>a){
            ans *= k;
            k--;
            while(b>1&&ans%b==0){
                ans /= b;
                b--;
            }
        }
        return ans;
    }
    string kthSmallestPath(vector<int>& a, int b) {
        int h = a[1],v=a[0],n=a[0]+a[1],i;
        long long int x;
        long long int k = b;
        string ans = "";
        for(i = 0; i < n; i++){
            if(h){
                x = get(h-1,v);
                cout<<x<<" "<<k<<endl;
                if(x>=k){
                    ans += 'H';
                    h--;
                }else{
                    k -= x;
                    ans += 'V';
                    v--;
                }
            }else{
                ans += 'V';
                v--;
            }
        }
        return ans;
    }
};
