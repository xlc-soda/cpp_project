//
// Created by xlc on 2018/5/16.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int max1(int a,int b){
    return a>b?a:b;
}

int max1(int a,int b,int c){
    return max1(max1(a,b),c);
}

double max1(double a,double b){
    if(a>=b)
        return a;
    return b;
}

double max1(double a,double b,double c){
    return max1(max1(a,b),c);
}

int main(){
    int a,b;
    while(true){
        cout<<"input two numbers:";
        if(cin>>a>>b);
        else
            break;
        cout<<max1(a,b)<<endl;
        cout<<max1(a,b,1)<<endl;
        cout<<max1(a*1.0,b*1.0)<<endl;
        cout<<max1(a*1.0,b*1.0,1.0)<<endl;
    }
}
