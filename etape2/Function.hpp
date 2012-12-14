#ifndef __Function_HPP__
#define __FUNCTION_HPP__

template < typename T >

class Function;


template <typename T, typename U>

class Function < T(U) >
{
public:
  Function(T);
  Function(T  (*f)(U)) { _func = f; }
  ~Function() { }

  Function operator=(T (*t)(U))
  {
    _func = t;
    return this;
  }

  T operator()(U t)
  {
    return _func(t);
  }
  
protected:
  typedef T  (*type)(U);
  type _func;
};

#endif
