
#include<iostream>
#include<stdlib.h>
#include<math.h> //using some build in math. functions 
#include <iomanip> //using precision build in function

void Trig(void);
void Log(void);
double Mysquare(double);
void AngleCon(void);
void Delta(void);

#define _USE_MATH_DEFINES
#define PI  3.14


void Trig()
{
    system("clear");
    int Tchoice;
    std::cout <<"    "<< "Select the trigonometric method to perform " <<"    "<<std::endl;
    std::cout << "1.Sine || 2.Cos || 3.Tan || 4.Cot || 5.ArcSine || 6.ArcTan" << std::endl;
    std::cin >>Tchoice;
    double x;
    switch(Tchoice)
    {
        case 1:
        std::cout << "Enter value for Sine degree: "; std::cin >> x;
        std::cout << "Sine("<< x <<")=" << sin(x);
        break;
        
        case 2:
        std::cout << "Enter value for Cos degree: "; std::cin >> x;
        std::cout << "Cos("<< x <<")=" << cos(x);
        break;

        case 3:
        std::cout << "Enter value for Sine degree: "; std::cin >> x;
        std::cout << "Tan("<< x <<")=" << tan(x);
        break;

        case 4:
        std::cout << "Enter value for Sine degree: "; std::cin >> x;
        std::cout << "Cot("<< x <<")=" << 1/tan(x);
        break;

        case 5:
        std::cout << "Enter value for Sine degree: "; std::cin >> x;
        std::cout << "ArcSine("<< x <<")=" << asin(x);
        break;

        case 6:
        std::cout << "Enter value for Sine degree: "; std::cin >> x;
        std::cout << "ArcTan("<< x <<")=" << atan(x);
        break;

        default:
        break;
    }
}

void Log()
{
    system("clear");
    std::cout << "\nChoose the logarithm base" << std::endl;
    char logC;
    double x;
    std::cout << "\n e.Nautural Logarithm(base-e) || 0.Logrithm with base-10" <<std::endl;
    std::cin >> logC;
    if(logC == 'e')
    {
      std::cout << "Enter the Value for base-e logarithm: "; std::cin >> x;
      std::cout << "loge("<<x<<")=" << log(x);  
    }
    else{
      std::cout << "Enter the Value for base-10 logarithm: "; std::cin >> x;
      std::cout << "log10("<<x<<")=" << log10(x);  
    }
}

double Mysquare(double num)
{
  
  double x = num;
  double y=1;
  double per  = 0.000001;
  while(x-y > per)
  {
   x =(x+y)/2;
   y = num/x; 
  }
  return x;
}
void printSqrt()
{
  double num;
  std::cout << "\nEnter value to get squareroot: ";std::cin >> num;
  std::cout<<"√("<< num <<")= "<<Mysquare(num);
}

void AngleCon()
{
  system("clear");
  char conv;
  float rad,deg;
  std::cout << "\nConvert Angle"<<"r.For Randians to Degrees"<<"d.For Degress to Radians "<<std::endl;
  std::cin >> conv;
  if(conv == 'r')
  {
    std::cout << "\nEnter the angle in radians: ";std::cin >> rad;
    deg = (rad*180) / PI ;
    std::cout << rad <<"(rad)"<< "in degrees = " << deg << std::endl;
  }
  else if(conv == 'd')
  {
    std::cout << "\nEnter the angle in degress: ";std::cin >> deg;
    rad = (deg*PI) /180 ;
    std::cout << deg <<"˚"<< " in radians= " << rad<< std::endl;
  }
  else{
    std::cout << "\nIncorrect input " << std::endl;
  }
}

void Delta()
{
  system("clear");
  float a,b,c;
  std::cout << "\nEnter the parabola of f(x)= a(x^2)+b(x)+c " <<std::endl;
  std::cout << "\nEnter a: ";std::cin>>a; 
  std::cout << "\nEnter b: ";std::cin>>b;
  std::cout << "\nEnter c: ";std::cin>>c;
  
  float delta = b*b - (4 * a *c);
  std::cout <<"\nGiven formula = " <<"("<<a<<")x^2+"<<"("<<b<<")x+"<<"("<<c<<")"<<std::endl;
  std::cout << "\nDelta ∆ =" << delta <<std::endl;

  if(delta <0)
  {
    std::cout << "\nPolynomial has 2 imaginary numbers" << std::endl;
    return;
  }else if(delta >=0)
  {
   std::cout << "\nPolynomial has 2 root" <<std::endl;
    float x1 = -b + (sqrt(b*b-4*a*c));
    float x2 = -b - (sqrt(b*b-4*a*c));

    std::cout <<"\nRoot x1= "<<x1 << std::endl;
    std::cout <<"\nRoot x2= "<<x2 << std::endl;
  }


}