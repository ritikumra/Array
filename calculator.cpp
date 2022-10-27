#include<iostream>
using namespace std;
int main(){
  float a,b;
  char o;
  cin>>a;
  cin>>b;
  cin>>o;
  switch(o){
    case '+':{
      cout<<"Sum is: "<<a+b<<endl;
      break;
    }
    case '-':{
      cout<<"Subtraction is: "<<a-b<<endl;
      break;
    }
    case '*':{
      cout<<"Multiplication is: "<<a*b<<endl;
      break;
    }
    case '/':{
      cout<<"Division is: "<<float(a/b)<<endl;
      break;
    }
    default:{
      cout<<"Invalid Operation";
    }
  }
}
