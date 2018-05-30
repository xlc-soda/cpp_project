//
// Created by xlc on 2018/5/23.
//

#include <cstdio>
#include <iostream>
#include <cstring>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::ios;
using std::getline;

const int N=1024;
char s[N];

int main(int argc,char * argv[]){
    if(argc<1) {
        cout<<"No arguments"<<endl;
        return 0;
    }
    ofstream out(argv[1]);
    if(!out.is_open()){
        return 0;
    }
    cout<<"Input"<<endl;
    while(true){
	gets(s);
	if(s==NULL||s[0]=='\n')
		break;
        int len=strlen(s);
        if(len<1){
            cout<<"break"<<endl;
            return 0;
        }
        out<<s<<endl;
    }
}
