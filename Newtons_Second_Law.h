void NewtonsSecondLaw()
{

  double m = 0.0, a = 0.0, N = 0.0;
  string mUnits;
  string aUnits;

  //Formula for Acceleration
  N = m*a; 


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
  
  cout << "∑F"<< " = " << m << " * " << a;

  cout << "∑F = " << fixed << setprecision(4) << N << endl;

}