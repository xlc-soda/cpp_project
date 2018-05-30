//
// Created by xlc on 2018/5/23.
//
#include <bits/stdc++.h>

using ll = long long;
using std::vector;
using std::ostream;
using std::for_each;
using std::cout;
using std::cin;
using std::endl;
using std::swap;
using std::max_element;
using std::string;
using std::max;
using std::pow;

using matrix=vector<vector<double>>;

ostream& operator<<(ostream &out,const vector<double> vec){
    for_each(vec.begin(),vec.end(),[&](double i){out<<(i<1e-6?0:i)<<' ';});
    out<<endl;
    return out;
}

ostream& operator<<(ostream &out,const matrix &mat){
    for_each(mat.begin(),mat.end(),[&](const vector<double> &vec){out<<vec;});
    return out;
}

//矩阵转置
matrix transpose(matrix mat){
    matrix tmp = {{0.0}};
    tmp.resize(mat.size());
    for(auto &x:tmp)
        x.resize(mat.size());
    for(int i=0;i<mat.size();++i){
        for(int j=0;j<mat.size();++j){
            tmp[j][i] = mat[i][j];
        }
    }
    return tmp;
}

int main(){
    srand(time(NULL));
    matrix a = {{1.0}};
    double num[10];
    for(int i=0;i<10;++i){
        num[i]=i*1.0+1.0;
    }
    a.resize(3);
    for(auto &x:a){
        x.resize(3);
    }
    for(auto &x:a){
        for(auto &y:x){
            y=num[rand()%10];
        }
    }
    matrix trans = transpose(a);
    cout<<"a = "<<endl<<a<<endl;
    cout<<"transpose = "<<endl<<trans<<endl;
}

