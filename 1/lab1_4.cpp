//
// Created by xlc on 2018/5/23.
//

#include <bits/stdc++.h>

using std::cout;
using std::endl;

const int N = 3;

int **transpose(int *a[N]){
    int **ans=new int*[N];
    for(int i=0;i<N;++i){
        ans[i] = new int[N];
    }
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            ans[i][j]=a[j][i];
        }
    }
    return ans;
}

void print(int *a[N]){
    for(int i=0;i<N;++i){
        cout<<a[i][0];
        for(int j=1;j<N;++j){
            cout<<' '<<a[i][j];
        }
        cout<<endl;
    }
}

int main(){
    srand(time(NULL));
    int **a=new int*[N];
    for(int i=0;i<N;++i){
        a[i]=new int[N];
    }
    int num[10];
    for(int i=0;i<10;++i){
        num[i]=i+1;
    }
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            a[i][j]=num[rand()%10];
        }
    }
    cout<<"a="<<endl;
    print(a);
    int **trans=transpose(a);
    cout<<"transpose="<<endl;
    print(trans);
}

