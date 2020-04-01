void Motion()
{
  char option = '0';
  double Ma = 0.0, Ms = 0.0, Mv2 = 0.0, Mv = 0.0;
  double vNot = 0.0, sNot = 0.0;
  string mUnits;
  string gUnits;

  //Formulas for Motion
  Ma = (vNot + (a*t));

  Ms = (sNot + (vNot * t) + (.5 * a * (t * t)));

  Mv2 = ((vNot * vNot) + (2 * a * (s - sNot)));

  Mv = (.5 * (v + vNot));

  cout <<"\nPlease select a Motion Formula you'd like to calculate in (choose from options 1-4): " <<endl;

  cout <<"\n1) Ma = Solve for v";

  cout <<"\n2) Ms = Solve for s";

  cout <<"\n3) Mv2 = Solve for v^2" ;

  cout <<"\n4) Mv = Solve for v_bar" ;

  option = validateChar(option);

//**************** Option 1) Ma ************************

  // Ma = v0 + (a*t);

  if(option == '1')
  {
    cout <<"\nPlease enter the following to solve v = v0 + at";
    
    cout <<"\nPlease enter an Initial Velocity (v0):";
    vNot = validateDouble(vNot);

    cout <<"\nPlease enter the Acceleration (a): "
    a = validateDouble(a);

    cout <<"\nPlease enter the Time (t): ";
    t = validateDouble(t);

    cout << "V" << " = " << vNot << " + " << " ( " << a << " * " << t << " ) ";

    cout << "V = " << fixed << setprecision(4) << Ma << endl;

  }

//**************** Option 2) Ms *************************

  // Ms = s0 + v0t + 1/2at2;

  else if(option == '2')
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

    cout << "s" << " = " << sNot << " + " << " ( " << a << " * " << t << " ) ";

    cout << "s = " << fixed << setprecision(4) << Ms << endl;

  }

//**************** Option 3) Mv2 ************************

  // Mv2 = v02 + 2a(s-s0);

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

    cout << "V^2" << " = " << vNot <<"^2" << " + " << " (2 * " << a  << "(" << s << " - " << s0 << " )) ";

    cout << "V2 = " << fixed << setprecision(4) << Ma << endl;
  }

//**************** Option 4) Mv *************************

  // Mv = 1/2(v+v0);

  else if(option == '4')
  {
    cout <<"\nPlease enter the following to solve v̅ = ½(v + v0): ";

    cout <<"\nPlease enter the Final Velocity (v): "
    v = validateDouble(v);

    cout <<"\nPlease enter the Initial Velocity (v0): ";
    vNot = validateDouble(vNot);
  
    cout << "v̅"<< " = " << "1/2(" << v << " + " << vNot << ")";

    cout << "v̅ = " << fixed << setprecision(4) << Mv << endl;
  }

}