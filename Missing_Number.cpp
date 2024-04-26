#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll total = n*(n+1)/2;
ll sum =0;
for(int i = 0 ;i<n-1;i++){
ll x;
cin>>x;
sum+=x;
}
cout<<total-sum;


return 0;
}

/*
i am writting it on note pad  on 
7:42 AM 26-Apr-24
1. Take input n.
2. Calculate the sum of the total main sequence using the formula (n * (n + 1) / 2).
3. Run a loop to get all inputs as well as make a sum of those inputs also as total given.
4. Now subtract total given from total main to get the missing number, ans = total main - total given.
5. The missing number is ans.
alhumdulillah
*/


