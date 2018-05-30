//
// Created by xlc on 2018/5/23.
//

#include "CPoint.h"

enum ColorType{White, Black, Red, Green, Blue, Yellow, Magenta, Cyan};
//为图形形状定义Shape基类
class Shape{
protected:
    ColorType  color;
public:
    Shape(ColorType c):color(c){};
    virtual void draw(){
        cout<<"This is ";
        switch(color){
            case White:
                cout<<"White"<<endl;break;
            case Black:
                cout<<"Black"<<endl;break;
            case Red:
                cout<<"Red"<<endl;break;
            case Green:
                cout<<"Green"<<endl;break;
            case Blue:
                cout<<"Blue"<<endl;break;
            case Yellow:
                cout<<"Yellow"<<endl;break;
            case Magenta:
                cout<<"Magenta"<<endl;break;
            case Cyan:
                cout<<"Cyan"<<endl;break;
            default:break;
        }
    };
};

class vehicle{
private:
    double MaxSpeed,Weight;
public:
    vehicle():MaxSpeed(0.0),Weight(0.0){};
    vehicle(double a,double b):MaxSpeed(a),Weight(b){};
    void Run(){
        cout<<"vehicle running"<<endl;
    };
    void Stop(){
        cout<<"vehicle stop"<<endl;
    };
};

class bicycle:virtual public vehicle{
private:
    double Height;
public:
    bicycle():vehicle(),Height(0.0){};
    bicycle(double a,double b,double c):vehicle(a,b),Height(c){};
    virtual void Run(){
        cout<<"bicycle running"<<endl;
    }
    virtual void Stop(){
        cout<<"bicycle stop"<<endl;
    }
};

class motorcar:virtual public vehicle{
private:
    int SeatNum;
public:
    motorcar():vehicle(),SeatNum(0){};
    motorcar(double a,double b,int c):vehicle(a,b),SeatNum(c){};
    virtual void Run(){
        cout<<"motorcar running"<<endl;
    }
    virtual void Stop(){
        cout<<"motorcar stop"<<endl;
    }
};

class motorcycle:public bicycle,public motorcar{
public:
    motorcycle():bicycle(){};
    virtual void Run(){
        cout<<"motorcycle running"<<endl;
    }
    virtual void Stop(){
        cout<<"motorcycle stop"<<endl;
    }
};

int main(){
    CThreePoint tmp;
    tmp.ShowPoint();
    ColorType a = White;
    Shape shp(a);
    shp.draw();
    motorcycle motor;
    motor.Run();
    motor.Stop();
}
