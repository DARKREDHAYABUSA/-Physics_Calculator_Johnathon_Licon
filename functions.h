/* A header file to hold the 
main defintions of the program
Student: Johnthon Licon
Teacher: Dr_T 10-17-2019, updated 3-24-2020 (clear screen methods for Ubuntu)
*/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include "Input_Validation_Extended.h" 
using namespace std;

void showMenu()
{
  cout << "\nMENU" << endl; 
  cout << "A: Velocity" <<endl; 
  cout << "B: Acceleration" << endl; 
  cout << "C: Motion" << endl; 
  cout << "D: Newtons 2nd Law" << endl; 
  cout << "E: Weight" << endl;
  cout << "F: Momentum" << endl;
  cout << "G: Exit" << endl; 
  cout << "H: clear the screen" << endl;
}

void Velocity()
{

  double ds = 0.0, dt = 0.0, v = 0.0;
  string dsUnits;
  string dtUnits;

  //Formula for Velocity
  v = ds/dt; 

    cout <<"\nPlease enter the following to solve v̅ = Δs/Δt or v = ds/dt: ";


    cout << "v̅"<< " = " << ds << " / " << dt;

    cout << "v̅ = " << fixed << setprecision(4) << v << endl;

}

void Acceleration()
{
  double dv = 0.0, dt = 0.0, a = 0.0;
  string dvUnits;
  string dtUnits;

  //Formula for Acceleration
  a = dv/dt; 

  cout <<"\nPlease enter the following to solve a̅ = Δv/Δt or a = dv/dt: ";

    cout << "a̅"<< " = " << dv << " / " << dt;

    cout << "a̅ = " << fixed << setprecision(4) << a << endl;
}

void Motion()
{
  char option = '0';
  double Ma = 0.0, Ms = 0.0, Mv2 = 0.0, Mv = 0.0, a = 0.0, t =0.0,v = 0.0,s0= 0.0, s= 0.0; 
  double vNot = 0.0, sNot = 0.0;
  string mUnits;
  string gUnits;

  //Formulas for Motion
  Ma = (vNot + (a*t));

  Ms = (sNot + (vNot * t) + (.5 * a * (t * t)));

  Mv2 = ((vNot * vNot) + (2 * a * (s - sNot)));

  Mv = (.5 * (v + vNot));

  if(option == '1') 

  {
    cout << "V" << " = " << vNot << " + " << " ( " << a << " * " << t << " ) ";
        cout << "V = " << fixed << setprecision(4) << Ma << endl;
  }

  else if(option == '2')

  {
    cout << "s" << " = " << sNot << " + " << " ( " << a << " * " << t << " ) ";

    cout << "s = " << fixed << setprecision(4) << Ms << endl;
  }

  else if(option == '3')
 
  {
    cout << "V^2" << " = " << vNot <<"^2" << " + " << " (2 * " << a  << "(" << s << " - " << s0 << " )) ";

    cout << "V2 = " << fixed << setprecision(4) << Ma << endl;
  }

  else if(option == '4')

  {

    cout << "v̅"<< " = " << "1/2(" << v << " + " << vNot << ")";

    cout << "v̅ = " << fixed << setprecision(4) << Mv << endl;
  }

}

void NewtonsSecondLaw()
{
  double m = 0.0, a = 0.0, N = 0.0;
  string mUnits;
  string aUnits;

  //Formula for Acceleration
  N = m*a; 

  cout << "∑F"<< " = " << m << " * " << a;

  cout << "∑F = " << fixed << setprecision(4) << N << endl;
  
  }

void Weight()
{
  
  double m = 0.0, g = 0.0, w = 0.0;
  string mUnits;
  string gUnits;

  //Formula for Acceleration
  w = m*g; 

  cout << "w"<< " = " << m << " * " << g;

  cout << "w = " << fixed << setprecision(4) << w << endl;

}

void Momentum()
{

  double m = 0.0, v = 0.0, p = 0.0;
  string mUnits;
  string vUnits;

  //Formula for Acceleration
  p = m*v; 

  cout << "p"<< " = " << m << " * " << v;

  cout << "p = " << fixed << setprecision(4) << p << endl;

}

void handleOption(string userOption); //function prototype 
double ds,dt,dv,vNot,sNot,a,t,s;
string dsUnits, dtUnits;
string userOption, option;

  if(userOption == "A" || userOption == "a")
{
  cout <<"\nPlease enter the following to solve v̅ = Δs/Δt or v = ds/dt: ";

  cout <<"\nPlease enter the Speed (Δs): ";
  ds = validateDouble(ds);

  cout <<"\nPlease enter a Unit for Velocity: "
  dsUnits = validateString(dsUnits);

  cout <<"\nPlease enter the time (Δt): ";
  dt = validateDouble(dt);

  cout <<"\nPlease enter a Unit for Time (i.e. “m/sec”): "
  dtUnits = validateString(dtUnits);

  Velocity(ds,dsUnits,dt,dtUnits);
}
  else if(userOption == "B" || userOption == "b")

{
  cout <<"\nPlease enter the following to solve a̅ = Δv/Δt or a = dv/dt: ";

  cout <<"\nPlease enter the Velocity (Δv): ";
  dv = validateDouble(dv);

  cout <<"\nPlease enter a Unit for Velocity: "
  dvUnits = validateString(dvUnits);

  cout <<"\nPlease enter the time (Δt): ";
  dt = validateDouble(dt);

  cout <<"\nPlease enter a Unit for Time (i.e. “m/sec”): "
  dtUnits = validateString(dtUnits);

  Acceleration(dv,dvUnits,dt,dtUnits);

}

   else if(userOption == "C" || userOption == "c")
{

  cout <<"\nPlease select a Motion Formula you'd like to calculate in (choose from options 1-4): " <<endl;

  cout <<"\n1) Ma = Solve for v";

  cout <<"\n2) Ms = Solve for s";

  cout <<"\n3) Mv2 = Solve for v^2" ;

  cout <<"\n4) Mv = Solve for v_bar" ;

  option = validateChar(option);

  if(option == '1')

  {
    cout <<"\nPlease enter the following to solve v = v0 + at";
    
    cout <<"\nPlease enter an Initial Velocity (v0):";
    vNot = validateDouble(vNot);

    cout <<"\nPlease enter the Acceleration (a): "
    a = validateDouble(a);

    cout <<"\nPlease enter the Time (t): ";
    t = validateDouble(t);

  }

     if(option == '2')
  {
    cout <<"\nPlease enter the following to solve s = s0 + v0t + ½at2";

    cout <<"\nPlease enter a value for (s0):";
    sNot = validateDouble(sNot);

    cout <<"\nPlease enter an Initial Velocity (v0):";
    vNot = validateDouble(vNot);

    cout <<"\nPlease enter the Time (t): ";
    t = validateDouble(t);

    cout <<"\nPlease enter the Acceleration (a): "
    a = validateDouble(a);

    cout <<"\nPlease enter the Time (t): ";
    t = validateDouble(t);
  }

  else if(option == '3')
  {
    cout <<"\nPlease enter the following to solve v2 = v02 + 2a(s − s0)";

    cout <<"\nPlease enter an Initial Velocity (v0):";
    vNot = validateDouble(vNot);

    cout <<"\nPlease enter the Acceleration (a): "
    a = validateDouble(a);

    cout <<"\nPlease enter the Value for (s): ";
    s = validateDouble(s);

    cout <<"\nPlease enter the Value for (s0): ";
    s0 = validateDouble(s0);
  }

    else if(option == '4')
  {
    cout <<"\nPlease enter the following to solve v̅ = ½(v + v0): ";

    cout <<"\nPlease enter the Final Velocity (v): "
    v = validateDouble(v);

    cout <<"\nPlease enter the Initial Velocity (v0): ";
    vNot = validateDouble(vNot);
  }

  else if(option != "1" ||option != "2" ||option != "3" ||option != "4" ||)
  {
    cout <<"\nPlease enter (1-4)";
  }
//}
  else if(userOption == "D" || userOption == "d")

{
  cout << "Newton's second law of motion is F = ma, or force is equal to mass times acceleration" << endl;

  cout <<"\nPlease enter the Mass (m): ";
  m = validateDouble(m);

  cout <<"\nPlease enter a Unit for Mass (i.e.[kg m/s]): "
  mUnits = validateString(mUnits);

  cout <<"\nPlease enter the Acceleration (a): ";
  a = validateDouble(a);

  cout <<"\nPlease enter a Unit for Acceleration: "
  aUnits = validateString(aUnits);

  NewtonsSecondLaw(m,mUnits,a,aUnits);
  
}
  else if(userOption == "E" || userOption == "e")

{

  cout <<"\nPlease enter the following to solve weight = mass * gravity ";

  cout <<"\nPlease enter the Mass (m): ";
  m = validateDouble(m);

  cout <<"\nPlease enter a Unit for Mass (i.e. lbs, stone): "
  mUnits = validateString(mUnits);

  cout <<"\nPlease enter the Gravity (g): ";
  g = validateDouble(g);

  cout <<"\nPlease enter a Unit for Time (i.e. “m/sec”): "
  gUnits = validateString(gUnits);

  Weight(m,mUnits,g,gUnits);

  }
  else if(userOption == "F" || userOption == "f")
  {
      cout <<"\nPlease enter the following to solve p = mv";

  cout <<"\nPlease enter the Mass (m): ";
  m = validateDouble(m);

  cout <<"\nPlease enter a Unit for Mass (i.e.[kg m/s]): "
  mUnits = validateString(mUnits);

  cout <<"\nPlease enter the Velocity (v): ";
  v = validateDouble(v);

  cout <<"\nPlease enter a Unit for Velocity: "
  vUnits = validateString(vUnits);

  Momentum(m,mUnits,v,vUnits);
    }
    else if(userOption == "H" || userOption == "h")
    {
      string reset = "\x1b[0m";
      //Linux Umbunu
      cout << reset; 
      cout << "\033[2J\033[1;1H";  //for ubuntu Linux Option 1 of 2
      //Windows: system("cls"); 
      system("clear"); //for ubuntu Linux Option 2 of 2
    }
    else if(userOption == "G" || userOption == "g")
    {
      cout << "\nEnd program. Hasta la vista, Baby!!" << endl; 
    }
    else
    {
      cout << "\nInvalid input: try again." << endl; 
    }
}
  #endif