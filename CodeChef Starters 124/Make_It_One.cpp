#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int left, right;
	    cin >> left >> right;
	    
	    int len = right-left + 1;
	    
	    //simple logic
	    // gcd(x, x+1) = 1 or gcd(x, x-1) = 1
	    // gcd(x, x+2) = 1 or gcd(x, x-2) if x is odd
	    // gcd(x, x+2) = 2 or gcd(x, x-2) = 2 if x is even
	    
	    //if len is even, always an answer exists
	    if(len%2 == 0) {
	        
	        // l+1, l, l+3, l+2, l+5, l+4, ...
	        
	        for(int i = left; i <= right; i+=2) {
	            cout << i+1 << " " << i << " ";
	        }
	    }
	    
	    //last element will come as conflict
	    // if last element is odd, we can use the third property mentioned above
	    // else it is not possible
	    else {
	        
	        if(right%2 == 0) {
	            cout << -1 << " ";
	        }
	        
	        else {
	            for(int i = left; i <= (right - 3); i+=2 ) {
	                cout << i+1 << " " << i << " ";
	            }
	            
	            cout << right-1 << " " << right << " " << right - 2 << " ";
	        }
	        
	    }
	    
	    cout << endl;
	}
	
	return 0;
}

/*
TC : O(N)
SC : O(1)

Difficulty Rating : 1886
Link : https://www.codechef.com/problems/MAKE_IT_ONE?tab=statement
*/
