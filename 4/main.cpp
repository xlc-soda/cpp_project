#include <bits/stdc++.h>

using namespace std;

// 1
template <class T>
T minv(T a,T b){
    if(a<b)
        return a;
    else
    return b;
}

// 2
const int SIZE = 100;
class Stack{
public:
    Stack():tos(0){};
    ~Stack(){};
    void Push(int n){
        if(tos==SIZE){
            cout<<"stack is full"<<endl;
            return;
        }
        stack[tos++]=n;
    };
    int Pop(){
        if(tos==0){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        return stack[--tos];
    };
private:
    int stack[SIZE];
    int tos;
};

// 4
template<class T> class List{
public:
    List(){
        pFirst = NULL;
    };  //构造函数
    void Add(T& a){
        Node *tmp = new Node;
        tmp->pT = &a;
        tmp->pNext = pFirst;
        pFirst = tmp;
    };  //在Link表头添加新结点
    void Remove(T& a){
        Node *tmp = pFirst;
        if(*(pFirst->pT)==a){
            pFirst = pFirst->pNext;
            return;
        }
        while(tmp!=NULL){
            if(*(tmp->pNext->pT) == a){
                tmp->pNext = tmp->pNext->pNext;
                return;
            }
            tmp = tmp->pNext;
        }
    };  //在Link中删除含有特定值的元素
    T* Find(T& a){
        Node * tmp = pFirst;
        while(tmp!=NULL){
            if(*(tmp->pT)==a){
                return tmp->pT;
            }
            tmp = tmp->pNext;
        }
        return NULL;
    };  //查找含有特定值的结点
    void PrintList(){
        Node * tmp = pFirst;
        while(tmp!=NULL){
            cout<<*tmp->pT<<' ';
            tmp = tmp->pNext;
        }
        cout<<endl;
    };  // 打印输出整个链表
    ~List(){};
protected:
    struct Node{
        Node *pNext;
        T* pT;
    };
    Node *pFirst;        //链首结点指针
};

typedef struct Snode{
    string name;
    int age;
}student;

ostream& operator<<(ostream &out,student &a){
    out<<"name:"<<a.name<<" age:"<<a.age<<endl;
    return out;
}

bool operator == (student &a,student &b){
    return a.name==b.name&&a.age==b.age;
}

int main() {
    // 1
    cout<<"min(1,2)="<<minv(1,2)<<endl;
    // 2
    Stack st;
    st.Push(1);
    cout<<"top of the stack is "<<st.Pop()<<endl;
    int x;
    // 3
    vector<int> v;
    cout<<"please input some number to push into the vector(input 0 to stop):";
    while(cin>>x&&x!=0){
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<"using functions to output:";
    for(int i=0,l=v.size();i<l;++i){
        cout<<v[i]<<' ';
    }
    cout<<endl;
    cout<<"using iterator to output:";
    for(auto x:v){
        cout<<x<<' ';
    }
    cout<<endl;
    cout<<"using for_each to output:";
    for_each(v.begin(),v.end(),[&](int a){cout<<a<<' ';});
    cout<<endl;
    // 4
    student a,b,*tmp;
    a.name="1";
    a.age=1;
    b.name="2";
    b.age=2;
//    cout<<a<<endl;
    List<student> l;
    l.Add(a);
    l.Add(b);
    l.PrintList();
    tmp = l.Find(a);
    cout<<"tmp="<<*tmp<<endl;
    l.Remove(a);
    l.PrintList();
    return 0;
}
