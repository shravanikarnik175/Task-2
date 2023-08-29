#include<iostream>
using namespace std;
int main()
  {
      float num1,num2,result ;
      int ch;
      cout<<"Enter your choice \n1.ADDITION \n2.SUBTRACTION \n3.MULTIPLICATION \n4.DIVISION"<<endl;
    
      cin>>ch;
      cout<<"Enter 2 numbers"<<endl;
      cin>>num1>>num2;
      switch(ch)
        {
          case 1:
          result=num1+num2;
          break;

          case 2:
          result=num1-num2;
          break;

          case 3:
          result=num1*num2;
          break;

          case 4:
          result=num1/num2;
          break;

          case 5:
          default:
              cout<<"Invalid choice";

        }
        cout<<"Result: "<<result<<endl;
        return 0;


  }