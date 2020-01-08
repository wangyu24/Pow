template<size_t N, bool odd=N%2>
struct Pow{
  double operator()(double x) const {
    return Pow<N/2>()(x)*Pow<N/2>()(x);
  }
};

template<size_t N>
struct Pow<N, true> {
  double operator()(double x) const {
    return x*Pow<(N-1)/2>()(x)*Pow<(N-1)/2>()(x);
  }
};

template <>
struct Pow<1, true> {
  double operator()(double x) const {
    return x;
  }
};

template <>
struct Pow<0, false> {
  double operator()(double x) const {
    return 1;
  }
};

