#include<iostream>
using namespace std;
int main(){
    int i,j,n=3;
    for(i=0;i<n;i++){
        for(char ch='A'+n-1-i;ch<='A'+n-1;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}