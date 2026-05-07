#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // Q1

    cout<<"Hello World"<<endl;



    // Q2

    int a;
    float b;
    char c;

    cout<<"Enter int float char: ";
    cin>>a>>b>>c;

    cout<<a<<" "<<b<<" "<<c<<endl;



    // Q3

    int x,y;

    cout<<"Enter 2 numbers: ";
    cin>>x>>y;

    cout<<"Add = "<<x+y<<endl;
    cout<<"Sub = "<<x-y<<endl;
    cout<<"Mul = "<<x*y<<endl;
    cout<<"Div = "<<x/y<<endl;



    // Q4

    float cel,fah;

    cout<<"Enter Celsius: ";
    cin>>cel;

    fah = (9*cel/5)+32;

    cout<<"Fahrenheit = "<<fah<<endl;



    // Q5

    cout<<"Hello\nWorld"<<endl;

    cout<<"A\tB"<<endl;

    cout<<"ABC\bD"<<endl;

    cout<<setw(10)<<"Hi"<<endl;



    // Q6

    int p=10;

    p+=5;

    cout<<p<<endl;

    p-=3;

    cout<<p<<endl;



    // Q7

    int m,n;

    cout<<"Enter 2 numbers: ";
    cin>>m>>n;

    m = m^n;
    n = m^n;
    m = m^n;

    cout<<"After swap "<<m<<" "<<n<<endl;



    // Q8

    int days;

    cout<<"Enter late days: ";
    cin>>days;

    if(days<=5){

        cout<<"Fine = 50 paise"<<endl;
    }

    else if(days<=10){

        cout<<"Fine = 1 rupee"<<endl;
    }

    else if(days<=30){

        cout<<"Fine = 5 rupees"<<endl;
    }

    else{

        cout<<"Membership Cancelled"<<endl;
    }



    // Q9

    int num1,num2,ch;

    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;

    cout<<"1.Add 2.Sub 3.Mul 4.Div"<<endl;

    cin>>ch;

    switch(ch){

        case 1:
            cout<<num1+num2<<endl;
            break;

        case 2:
            cout<<num1-num2<<endl;
            break;

        case 3:
            cout<<num1*num2<<endl;
            break;

        case 4:
            cout<<num1/num2<<endl;
            break;

        default:
            cout<<"Invalid"<<endl;
    }



    // Q10

    int z;

    cout<<"Enter number: ";
    cin>>z;

    if(z%2==0){

        cout<<"Even"<<endl;
    }

    else{

        cout<<"Odd"<<endl;
    }

    (z%2==0)?cout<<"Even"<<endl:cout<<"Odd"<<endl;

    return 0;
}