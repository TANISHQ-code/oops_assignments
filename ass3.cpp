#include<iostream>
using namespace std;

// Q1

class Test{

    int x;

public:

    void setData(int x){

        this->x=x;
    }

    void show(){

        cout<<x<<endl;
    }
};


// Q2

class A{

    int x;

public:

    void setData(int a){

        x=a;
    }

    void show(){

        cout<<x<<endl;
    }

    friend void swapData(A&,A&);
};

void swapData(A &a1,A &a2){

    int temp;

    temp=a1.x;
    a1.x=a2.x;
    a2.x=temp;
}


// Q3

class B;

class C{

    int x;

public:

    C(int a){

        x=a;
    }

    friend void add(C,B);
};

class B{

    int y;

public:

    B(int b){

        y=b;
    }

    friend void add(C,B);
};

void add(C c1,B b1){

    cout<<"Sum = "<<c1.x+b1.y<<endl;
}


// Q4

class X{

    int a=100;

    friend class Y;
};

class Y{

public:

    void show(X obj){

        cout<<obj.a<<endl;
    }
};


// Q5

class Rect{

    int l,b;

public:

    void setData(int x,int y){

        l=x;
        b=y;
    }

    int area(){

        return l*b;
    }
};


// Q6

class Demo{

public:

    inline int cube(int x){

        return x*x*x;
    }
};


// Q7

class Num{

    int n;

public:

    void setData(int x){

        n=x;
    }

    void show(){

        cout<<n<<endl;
    }
};

void passValue(Num obj){

    obj.show();
}

void passAddress(Num *obj){

    obj->show();
}


int main(){

    // Q1

    Test t;

    Test *ptr=&t;

    t.setData(10);

    t.show();

    ptr->setData(20);

    ptr->show();



    // Q2

    A a,b;

    a.setData(5);

    b.setData(10);

    swapData(a,b);

    a.show();

    b.show();



    // Q3

    C c1(10);

    B b1(20);

    add(c1,b1);



    // Q4

    X x;

    Y y;

    y.show(x);



    // Q5

    Rect r[3];

    r[0].setData(2,3);
    r[1].setData(4,5);
    r[2].setData(6,7);

    for(int i=0;i<3;i++){

        cout<<r[i].area()<<endl;
    }



    // Q6

    Demo d;

    cout<<d.cube(3)<<endl;



    // Q7

    Num n;

    n.setData(50);

    passValue(n);

    passAddress(&n);


    return 0;
}