void Momentum()
{

  double m = 0.0, v = 0.0, p = 0.0;
  string mUnits;
  string vUnits;

  //Formula for Acceleration
  p = m*v; 

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

  cout << "p"<< " = " << m << " * " << v;

  cout << "p = " << fixed << setprecision(4) << p << endl;

  
}