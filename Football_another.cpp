#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.find("0000000")!=string::npos || s.find("1111111")!=string::npos){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}