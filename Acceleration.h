void Acceleration()
{

  double dv = 0.0, dt = 0.0, a = 0.0;
  string dvUnits;
  string dtUnits;

  //Formula for Acceleration
  a = dv/dt; 

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

    cout << "a̅"<< " = " << dv << " / " << dt;

    cout << "a̅ = " << fixed << setprecision(4) << a << endl;

}