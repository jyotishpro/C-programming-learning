#include<iostream>
using namespace std;

 caluculator_using_switch(){

int a;
int b;
int op;

//show message
cout<<"enter 1 for addition"<<endl;
cout<<"enter 2 for subtraction"<<endl;
cout<<"enter 3 for multiplication"<<endl;
cout<<"enter 4 for division"<<endl;

//input

cout<<"enter operator"<<endl;
cin>>op;
cout<<"enter first value"<<endl;
cin>>a;
cout<<"enter second value"<<endl;
cin>>b;


//calculate
switch(op){
case 1: cout<<"addition is: "<<a+b<<endl;
break;
case 2: cout<<"subtraction is: "<<a-b;
break;
case 3: cout<<"multiplication is: "<<a*b;
break;
case 4: cout<<"division is"<<a/b;
break;
default: cout<<"enter valid op"<<endl;
}
}

income_tax_calculator()
{
    //variable
    float income;

    //input
    cout<<"enter your income in lac"<<endl;
    cin>>income;

    //calculate taxes
    if(income<5)
    {
        cout<<"your total taxes is: "<<0<<endl;
    } else if(income<10){
    cout<<"your total taxes is: "<<((income*10000*20)/100)<<endl;
    } else if(income>10){
    cout<<"your total taxes is: "<<((income*100000*30)/100)<<endl;
    }
}

largest_number()
{
    //variable define
    int a,b;

    //input
    cout<<"enter first value"<<endl;
    cin>>a;
    cout<<"enter second value"<<endl;
    cin>>b;

    //check large
    if(a>b){
        cout<<"largest number is: "<<a<<endl;
    } else{
    cout<<"largest number is: "<<b<<endl;
    }

}

check_odd_even()
{
    //define variable
    int user_input;

    //input
  cout<<"enter any number: "<<endl;
  cin>>user_input;

  //check even or odd

  if(user_input%2==0)
  {
      cout<<user_input<<" is even number"<<endl;
  }
  else{
    cout<<user_input<<" is odd number"<<endl;
  }
}

int main()
{

check_odd_even();

//largest_number();
//income_tax_calculator();
    //caluculator_using_switch();

    return 0;
}

