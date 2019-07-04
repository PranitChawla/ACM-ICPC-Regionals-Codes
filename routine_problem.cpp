#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;
typedef long long int ll;


int main(){
    ll a,b,c,d,g;
    cin>>a>>b>>c>>d;
    if(d * a < b * c){
        d *= a;
        b *= c;
        d = b - d;
        //g = gcd(d,b);
        if(a*d!=b*c)
        	cout<<0<<" "<<0<<endl;
        else
        cout<<d <<" "<<b<<endl;
    }
    else{
        c *= b;
        a *= d;
        c = a - c;
        //g = gcd(c,a);
         if(a*d!=b*c)
        	cout<<0<<" "<<0<<endl;
        else
        cout<<c<<""<<a<<endl;
    }
    return 0;
}