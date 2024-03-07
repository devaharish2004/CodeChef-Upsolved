#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// your code goes here
	ll t;
	cin >> t;
	while(t--) {
	    
	    string s;
	    cin >> s;
	    
	    ll n = s.length();
	    
	    map<ll,ll> mp;
	    
	    //count the frequency of each letter
	    for(char x : s) {
	        mp[x]++;
	    }
	    
	    ll ans = INT_MAX;
	    
	    //go through every distinct char in the string
	    for(auto it : mp) {
	        
	        char x = it.first;
	        ll freq = it.second;
	        
	        //declare the window of size freq
	        ll left = 0;
	        ll right = freq-1;
	        ll count = 0;  
	        
	        //count the freq of x in the window
	        
	        for(ll i = left; i <= right; i++) {
	            if(s[i] == x) {
	                count++;
	            }
	        }
	        
            //update ans
            ans = min(ans, freq - count);
            
            //move the window throughout the string
            while(right < n) {
                
                if(s[left] == x) {
                    count--;
                }
                
                left++;
                
                if(right+1 < n && s[right + 1] == x) {
                    count++;
                }
                
                right++;
                
                ans = min(ans, freq - count);
            }
            
	    }
	    
	    cout << ans << endl;
	    
	    //TC : O(26 * N)
	    
	}
	
	return 0;
}

/*
Difficulty Rating : 1731
Link : https://www.codechef.com/problems/SWAPUNITE
*/

