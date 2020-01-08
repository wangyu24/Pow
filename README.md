# Pow
A more efficient Pow than std::pow when exp is constant integer

Example:

  double x = 1.5;
  
  const size_t y = 1;
  
  std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
  
  std::cout << std::pow(x, y) << std::endl;
  
  std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
  
  std::cout << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << std::endl; //it takes 134us

  std::chrono::steady_clock::time_point start2 = std::chrono::steady_clock::now();
  
  std::cout << Pow<y>()(x) << std::endl;
  
  std::chrono::steady_clock::time_point end2 = std::chrono::steady_clock::now();
  
  std::cout << std::chrono::duration_cast<std::chrono::microseconds>(end2 - start2).count() << std::endl; //it takes 9us
  

