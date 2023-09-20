//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define SHORT_SIZE 16
class Solution
{
  public:
        vector <int> rotate (int n1, int d1)
        {
            //code here.
            int n=n1;
            int d=d1;
           d=d%SHORT_SIZE;
            vector<int> ans;
            int a=((n<<d)|(n>>(SHORT_SIZE-d)));
            int b=((n>>d)|(n<<(SHORT_SIZE-d)));
            int mask = (1 << SHORT_SIZE) - 1;
        
            a &= mask;
            b &= mask;

            //cout<<a<<" "<<b<<"\n";
            ans.push_back(a);
            ans.push_back(b);
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends