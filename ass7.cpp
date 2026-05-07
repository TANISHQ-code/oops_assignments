#include<iostream>
#include<string>
using namespace std;

// Q1

class Polygon{

protected:

    int w,h;

public:

    void set_value(int a,int b){

        w=a;
        h=b;
    }

    virtual int calculate_area(){

        return 0;
    }
};

class Rectangle : public Polygon{

public:

    int calculate_area(){

        return w*h;
    }
};

class Triangle : public Polygon{

public:

    int calculate_area(){

        return (w*h)/2;
    }
};


// Q2

class Shape{

public:

    virtual void area(){

        cout<<"Area"<<endl;
    }

    virtual void display(){

        cout<<"Shape"<<endl;
    }
};

class Circle : public Shape{

    int r;

public:

    Circle(int x){

        r=x;
    }

    void area(){

        cout<<3.14*r*r<<endl;
    }

    void display(){

        cout<<"Circle"<<endl;
    }
};

class Rect{

    int l,b;

public:

    Rect(int x,int y){

        l=x;
        b=y;
    }

    void area(){

        cout<<l*b<<endl;
    }

    void display(){

        cout<<"Rectangle"<<endl;
    }
};

class Tri{

    int b,h;

public:

    Tri(int x,int y){

        b=x;
        h=y;
    }

    void area(){

        cout<<(b*h)/2<<endl;
    }

    void display(){

        cout<<"Triangle"<<endl;
    }
};


// Q3

class Area{

public:

    void area(int b,int h){

        cout<<(b*h)/2<<endl;
    }

    void area(float a){

        cout<<0.433*a*a<<endl;
    }

    void area(int a,int b,int c){

        cout<<"Isosceles Triangle"<<endl;
    }
};


// Q4

class Student{

public:

    virtual void show()=0;
};

class Engineering : public Student{

public:

    void show(){

        cout<<"Engineering"<<endl;
    }
};

class Medicine : public Student{

public:

    void show(){

        cout<<"Medicine"<<endl;
    }
};

class Science : public Student{

public:

    void show(){

        cout<<"Science"<<endl;
    }
};


// Q5

class Time{

    int h,m,s;

public:

    Time(int a=0,int b=0,int c=0){

        h=a;
        m=b;
        s=c;
    }

    Time operator +(Time t){

        Time temp;

        temp.h=h+t.h;
        temp.m=m+t.m;
        temp.s=s+t.s;

        return temp;
    }

    void show(){

        cout<<h<<":"<<m<<":"<<s<<endl;
    }
};


// Q6

class STRING{

    string str;

public:

    STRING(string s=""){

        str=s;
    }

    bool operator ==(STRING s){

        return str==s.str;
    }

    STRING operator +(STRING s){

        return STRING(str+s.str);
    }

    void show(){

        cout<<str<<endl;
    }
};


// Q7

class Matrix{

    int a[2][2];

public:

    void input(){

        for(int i=0;i<2;i++){

            for(int j=0;j<2;j++){

                cin>>a[i][j];
            }
        }
    }

    void show(){

        for(int i=0;i<2;i++){

            for(int j=0;j<2;j++){

                cout<<a[i][j]<<" ";
            }

            cout<<endl;
        }
    }

    friend Matrix operator *(Matrix,Matrix);
};

Matrix operator *(Matrix m1,Matrix m2){

    Matrix temp;

    for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){

            temp.a[i][j]=0;

            for(int k=0;k<2;k++){

                temp.a[i][j]+=m1.a[i][k]*m2.a[k][j];
            }
        }
    }

    return temp;
}


// Q8

class Arr{

    int a[5]={1,2,3,4,5};

public:

    int operator [](int i){

        if(i>=0 && i<5)

            return a[i];

        return -1;
    }
};


// Q9

class Demo{

public:

    void operator ()(){

        cout<<"Function Operator"<<endl;
    }
};


// Q10

class Test{

    int x;

public:

    friend istream& operator >>(istream&,Test&);

    friend ostream& operator <<(ostream&,Test&);
};

istream& operator >>(istream &in,Test &t){

    in>>t.x;

    return in;
}

ostream& operator <<(ostream &out,Test &t){

    out<<t.x;

    return out;
}


// Q11

class Num{

    float x;

public:

    Num(float a){

        x=a;
    }

    void show(){

        cout<<x<<endl;
    }
};


// Q12

class Data{

    float x;

public:

    Data(float a){

        x=a;
    }

    operator float(){

        return x;
    }
};


// Q13

class Polar;

class Cartesian{

    int x,y;

public:

    Cartesian(){

        x=0;
        y=0;
    }

    void show(){

        cout<<x<<" "<<y<<endl;
    }

    Cartesian(Polar);
};

class Polar{

    int r,a;

public:

    Polar(int x,int y){

        r=x;
        a=y;
    }

    friend class Cartesian;
};

Cartesian::Cartesian(Polar p){

    x=p.r;
    y=p.a;
}


int main(){

    // Q1

    Polygon *p;

    Rectangle r;

    Triangle t;

    r.set_value(4,5);

    t.set_value(4,5);

    p=&r;

    cout<<p->calculate_area()<<endl;

    p=&t;

    cout<<p->calculate_area()<<endl;



    // Q2

    Circle c(5);

    c.display();

    c.area();



    // Q3

    Area a;

    a.area(4,5);

    a.area(6.0f);

    a.area(5,5,8);



    // Q4

    Student *s[3];

    Engineering e;

    Medicine m;

    Science sc;

    s[0]=&e;
    s[1]=&m;
    s[2]=&sc;

    for(int i=0;i<3;i++){

        s[i]->show();
    }



    // Q5

    Time t1(5,15,34),t2(9,53,58),t3;

    t3=t1+t2;

    t3.show();



    // Q6

    STRING s1("Hello ");

    STRING s2("World");

    STRING s3;

    s3=s1+s2;

    s3.show();



    // Q7

    Matrix m1,m2,m3;

    m1.input();

    m2.input();

    m3=m1*m2;

    m3.show();



    // Q8

    Arr ar;

    cout<<ar[2]<<endl;



    // Q9

    Demo d;

    d();



    // Q10

    Test tt;

    cin>>tt;

    cout<<tt<<endl;



    // Q11

    float f=5.5;

    Num n=f;

    n.show();



    // Q12

    Data d1(6.5);

    float y;

    y=d1;

    cout<<y<<endl;



    // Q13

    Polar p1(10,5);

    Cartesian c1=p1;

    c1.show();


    return 0;
}