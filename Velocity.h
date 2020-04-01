void Velocity()
{

  double ds = 0.0, dt = 0.0, v = 0.0;
  string dsUnits;
  string dtUnits;

  //Formula for Velocity
  v = ds/dt; 

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

    cout << "v̅"<< " = " << ds << " / " << dt;

    cout << "v̅ = " << fixed << setprecision(4) << v << endl;

  
}