//
// Created by xlc on 2018/5/23.
//

#ifndef INC_2_CPOINT_H
#define INC_2_CPOINT_H


#include <bits/stdc++.h>

using std::cout;
using std::cin;
using std::endl;
using std::pow;
using std::ostream;
using std::istream;

class CPoint{
private:
    int x,y;
//        static int nCount=1;   // nCount用于保存点的个数
public:
    CPoint(int px=0, int py=0):x(px),y(py){};
    CPoint(CPoint& a):x(a.GetX()),y(a.GetY()){};
    ~CPoint(){};
    int GetX(){
        return x;
    };
    int GetY(){
        return y;
    };
    void SetX(int a){
        x=a;
    };
    void SetY(int a){
        y=a;
    };
    void ShowPoint(){
        cout<<"x = "<<x<<", y = "<<y<<endl;
    };
    CPoint operator+(CPoint &a){
        CPoint tmp;
        tmp.SetX(a.GetX()+x);
        tmp.SetY(a.GetY()+y);
        return tmp;
    }
    friend ostream& operator<<(ostream &out,CPoint &a){
        out<<"x = "<<a.GetX()<<", y = "<<a.GetY()<<endl;
        return out;
    }
    friend istream& operator>>(istream &in,CPoint &a){
        int x,y;
        in>>x>>y;
        a.SetX(x);
        a.SetY(y);
        return in;
    }
};

class CLine {
private:
    CPoint pt1, pt2;  //pt1和pt2分别代表该线段的起点和终点
public:
    CLine():pt1(),pt2(){};
    CLine(int x1,int y1,int x2,int y2){
        pt1.SetX(x1);
        pt1.SetY(y1);
        pt2.SetX(x2);
        pt2.SetY(y2);
    };
    CLine(CPoint p1,CPoint p2):pt1(p1),pt2(p2){};
    double Distance(){
        return sqrt(pow(pt1.GetX()*1.0-pt2.GetX()*1.0,2)+pow(pt1.GetY()*1.0-pt2.GetY()*1.0,2));
    };  //计算该线段长度的成员函数
    void ShowLine(){
        cout<<"y = ((x - "<<pt1.GetX()<<")/"<<pt1.GetX()-pt2.GetX()<<")*"<<pt2.GetY()<<" + ((x - "<<pt2.GetX()<<")/"<<pt1.GetX()-pt2.GetX()<<")*"<<pt1.GetY();
    };
};


class CThreePoint:public CPoint {
private:
    int z;
public:
    CThreePoint():CPoint(),z(0){};
    CThreePoint(int a,int b,int c):CPoint(a,b),z(c){};
    int GetZ(){
        return z;
    };
    void SetZ(int pz){
        z=pz;
    };
    virtual void ShowPoint(){
        cout<<"x = "<<this->GetX()<<",y = "<<this->GetY()<<",z = "<<z<<endl;
    };
};


#endif //INC_2_CPOINT_H
