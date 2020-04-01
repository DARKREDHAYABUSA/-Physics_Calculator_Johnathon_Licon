void Weight()
{
  
  double m = 0.0, g = 0.0, w = 0.0;
  string mUnits;
  string gUnits;

  //Formula for Acceleration
  w = m*g; 

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

  cout << "w"<< " = " << m << " * " << g;

  cout << "w = " << fixed << setprecision(4) << w << endl;

}