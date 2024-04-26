#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
long long int a ;
cin>>a;

while(a!=1){
cout<<a<<" ";
(a%2==0)?a/=2 :a = a*3+1;

}
cout<<1;
return 0;
}


/*
in sha allah I will be completing my whole code in note pad
will use vs code just to check-----------

1.take the input n
2.start a while loop with a condition( n!=1)
3.check if n is even devide it with 2
else: multifly it with 3 and add 1 
**4. print a one by youself 
return 0


you can do like 
while(true){
if a==1 
break;
}

*/