#include<iostream>
using namespace std;

// Q1

class Rectangle{

    int l,b;

public:

    Rectangle(){

        l=0;
        b=0;
    }

    Rectangle(int x,int y){

        l=x;
        b=y;
    }

    Rectangle(int x){

        l=x;
        b=x;
    }

    int area(){

        return l*b;
    }
};


// Q2

class Rect{

    int l,b;

public:

    Rect(int x=0,int y=0){

        l=x;
        b=y;

        cout<<"Constructor Called"<<endl;
    }

    ~Rect(){

        cout<<"Destructor Called"<<endl;
    }

    int area(){

        return l*b;
    }
};


// Q3

class Demo{

public:

    Demo(){

        cout<<"Constructor"<<endl;
    }

    ~Demo(){

        cout<<"Destructor"<<endl;
    }
};


// Q4

class Test{

public:

    void show(){

        cout<<"Object Created"<<endl;
    }
};


int main(){

    // Q1

    Rectangle r1;

    Rectangle r2(4,5);

    Rectangle r3(5);

    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    cout<<r3.area()<<endl;



    // Q2

    Rect a[3]={Rect(),Rect(2,3),Rect(5,5)};

    for(int i=0;i<3;i++){

        cout<<a[i].area()<<endl;
    }



    // Q3

    Demo d;



    // Q4

    int *p=new int;

    *p=10;

    cout<<*p<<endl;

    delete p;



    float *f=new float;

    *f=5.5;

    cout<<*f<<endl;

    delete f;



    int *arr=new int[5];

    for(int i=0;i<5;i++){

        arr[i]=i+1;
    }

    for(int i=0;i<5;i++){

        cout<<arr[i]<<endl;
    }

    delete[] arr;



    float *fa=new float[3];

    fa[0]=1.1;
    fa[1]=2.2;
    fa[2]=3.3;

    for(int i=0;i<3;i++){

        cout<<fa[i]<<endl;
    }

    delete[] fa;



    Test *obj=new Test;

    obj->show();

    delete obj;



    Test *o=new Test[2];

    o[0].show();

    o[1].show();

    delete[] o;


    return 0;
}