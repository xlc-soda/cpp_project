#include "CPoint.h"

int main() {
    CPoint a,b;
    cin>>a>>b;
    cout<<a<<endl<<b<<endl;
    CLine tmp(a,b);
    cout<<"distance = "<<tmp.Distance()<<endl;
    tmp.ShowLine();
    return 0;
}