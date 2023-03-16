
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include <iomanip>
#include "scientific.cpp"

void menu(void);
void Arithmetic(void);
void Scientific(void);
void returnMenu(void);

#define _USE_MATH_DEFINES
#define PI  3.14

int main() 
{
  system("clear");
  menu();

  
  std::cin.get(); 
}

void returnMenu()
{
  char op; 
  std::cout << "\nDo you want to repeat operatin || y.(Yes) || n.(No)" << std::endl;
  std::cin >> op;
  if(op =='y')
  {
    main();
  }
  else{
    return;
  }
}


void menu()
{
  system("clear");
  std::cout << "-------------------------------" << std::endl;
  std::cout << "|WELCOME TO DIGITAL CALCULATOR|" << std::endl;
  std::cout << "-------------------------------" << std::endl;
  
  std::cout <<"    "<< "SELECT CALCULATOR TYPE" << "    " << std::endl;
  int Tchoice;
  std::cout << "1.Arithmetic || 2.Scientific " << std::endl;
  std::cin >> Tchoice;
  switch(Tchoice)
  {
    case 1:
    Arithmetic();
    break;

    case 2:
    Scientific();
    break;

    default:
    break;
  }
}
void Arithmetic()
{
  system("clear");
  std::cout << "WELCOME TO ARITHMATIC CALCULATOR " << std::endl;
  int Achoice;
  double x,y;

  std::cout <<"\nEnter the operation you wanted to perform " << std::endl;
  std::cout << "\n 1.Addition " << "\n 2.Substraction" << "\n 3.Multiplication" <<"\n 4.Division" <<"\n 5.Exit"<< std::endl;
  std::cin >> Achoice;


  switch(Achoice)
  {
    case 1:
    std::cout << "\nEnter 2 numbers: " << std::endl;
    std::cin >> x >> y;
    std::cout << x << "+" << y << "=" << x+y << std::endl;
    returnMenu();
    break;
    
    case 2:
    std::cout << "\nEnter 2 numbers: " << std::endl;
    std::cin >> x >> y;
    std::cout << x << "-" << y << "=" << x-y << std::endl;
    returnMenu();
    break;

    case 3:
    std::cout << "\nEnter 2 numbers: " << std::endl;
    std::cin >> x >> y;
    std::cout << x << "*" << y << "=" << x*y << std::endl;
    returnMenu();
    break;

    case 4:
    std::cout << "\nEnter 2 numbers: " << std::endl;
    std::cin >> x >> y;
    std::cout << x << "/" << y << "=" << x/y << std::endl;
    returnMenu();
    break;

    case 5:
    std::cout << "\nPress any ke to exit form program" << std::endl;
    getchar();    
    return;
  }

  std::cin.get();
}

void Scientific()
{
   system("clear");
  std::cout <<"    "<< "WELCOME TO SCIENTIFIC CALCULATOR" << "    "<<std::endl;
  std::cout << "\nSelect the operation"<< std::endl;

  int Schoice;
  std::cout << "\n1.Trigonometric Operations " <<"\n2.Logaritmic Operations" << "\n3.Find Power" << "\n4.Find Factorial"<<"\n5.Find Squareroot"<<"\n6.Convert Angle"<<"\n7.Find Delta and roots by given parabola"<<std::endl;
  std::cin >> Schoice;
  double base,exp,res;//power variables
  double num,fact=1.0;//fact. var.
  switch(Schoice)
  {
    case 1:
    Trig();
    returnMenu();
    break;
    
    case 2:
    Log();
    returnMenu();
    break;

    case 3:
    system("clear");
    std::cout << "Enter base: ";std::cin >> base;
    std::cout << "Enter exponant: ";std::cin >>exp;
    res = pow(base, exp);
    std::cout << base << "^" << exp << "=" << res;
    returnMenu();
    break;
    
   case 4: 
   {
   system("clear");
   std::cout << "\nEnter a number to get factorial: "; std::cin >> num;
   if(num<0)
   {
    std::cout << "\nError factorial cant be lower then zero" << std::endl;
    returnMenu();
   }
   else{
    for(int i=1;i<=num;i++)
    {
      fact *=i;
    }
    std::cout << num<<"!" <<"="<<fact<< std::endl;
   }
    returnMenu();
    break;
   }

   case 5:
   printSqrt();
   returnMenu();
   break;
   
   case 6:
   AngleCon();
   returnMenu();
   break;
   
   case 7:
   Delta();
   returnMenu();
   break;

  }
}
