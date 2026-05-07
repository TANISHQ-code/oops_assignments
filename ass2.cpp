#include<iostream>
using namespace std;

// Q1

struct Student{

    string name;
    int roll;
    string degree;
    string hostel;
    float cgpa;

    void addDetails(){

        cin>>name>>roll>>degree>>hostel>>cgpa;
    }

    void updateDetails(){

        cin>>name>>degree;
    }

    void updateCGPA(){

        cin>>cgpa;
    }

    void updateHostel(){

        cin>>hostel;
    }

    void displayDetails(){

        cout<<name<<endl;
        cout<<roll<<endl;
        cout<<degree<<endl;
        cout<<hostel<<endl;
        cout<<cgpa<<endl;
    }
};


// Q2

class Stud{

private:

    string name;
    int roll;

    void privateFun(){

        cout<<"Private Function"<<endl;
    }

public:

    void setData(string n,int r){

        name=n;
        roll=r;
    }

    void show(){

        privateFun();

        cout<<name<<endl;
        cout<<roll<<endl;
    }
};


// Q3

class Demo{

private:

    void fun(){

        cout<<"Private Function"<<endl;
    }

public:

    void display(){

        fun();
    }
};


// Q4

class Rect{

    int w,h;

public:

    void getdata(int a,int b){

        w=a;
        h=b;
    }

    void calculatearea(){

        cout<<"Area = "<<w*h<<endl;
    }
};


// Q5

class Complex{

    float real,img;

public:

    void setComplex(float r,float i){

        real=r;
        img=i;
    }

    void displayComplex(){

        cout<<real<<" + "<<img<<"i"<<endl;
    }

    Complex sum(Complex c){

        Complex temp;

        temp.real=real+c.real;
        temp.img=img+c.img;

        return temp;
    }
};


// Q6

class Test{

    int x;

public:

    void setData(int a);
    void show();
};

void Test::setData(int a){

    x=a;
}

void Test::show(){

    cout<<x<<endl;
}

int g=100;


// Q7

namespace A{

    int x=10;

    void show(){

        cout<<"Namespace A"<<endl;
    }
}

namespace B{

    int x=20;

    void show(){

        cout<<"Namespace B"<<endl;
    }
}


int main(){

    // Q1

    Student s;

    s.addDetails();

    s.displayDetails();



    // Q2

    Stud s1;

    s1.setData("Rahul",101);

    s1.show();



    // Q3

    Demo d;

    d.display();



    // Q4

    Rect r;

    r.getdata(4,5);

    r.calculatearea();



    // Q5

    Complex c1,c2,c3;

    c1.setComplex(3,4);

    c2.setComplex(5,6);

    c3=c1.sum(c2);

    c3.displayComplex();



    // Q6

    Test t;

    t.setData(50);

    t.show();

    int g=10;

    cout<<g<<endl;

    cout<<::g<<endl;

    cout<<std::endl;



    // Q7

    A::show();

    B::show();

    cout<<A::x<<endl;

    cout<<B::x<<endl;


    return 0;
}