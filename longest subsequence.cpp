#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <fstream>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h> //works like magic, but at cost.
using namespace std;
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout<<x<<endl;
#define fo(i, n) for(int i=0; i<n; i++)
#define fk(i, k, n) for(i=k; i<n; i++)
#define fn(i, n) for(i=n-1;i>=0;i--)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define lli long long int
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<lli, lli>	pl;
typedef vector<int>		vi;
typedef vector<lli>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
int lengthOfLIS(vector<int>& nums) { 
        int longcurr=0, longglo=0,currele;
        for(int i=0;i<nums.size();i++){
            // if(longcurr==0){
            //     currele = nums[i];
            //     longcurr++;
            //     continue;
            // }
            // if(nums[i]>currele){
            //     currele = nums[i];
            //     longcurr++;
            //     continue;
            // }else{
                
            //     continue;
            
            for(int j=i;j>=0;j--){
               if(j==0)

            }longglo = max(longcurr,longglo);
        }
        return longglo;
    }
int main() {
   vector<int> nums;
   int n;
   cin>>n;
   fo(i,n){
       int r;
       cin>>r;
       nums.pb(r);
   }cout<<lengthOfLIS(nums)<<endl;
    
    return 0;
}