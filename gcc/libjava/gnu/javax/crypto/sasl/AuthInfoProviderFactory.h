
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_sasl_AuthInfoProviderFactory__
#define __gnu_javax_crypto_sasl_AuthInfoProviderFactory__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace sasl
        {
            class AuthInfoProviderFactory;
            class IAuthInfoProvider;
        }
      }
    }
  }
}

class gnu::javax::crypto::sasl::AuthInfoProviderFactory : public ::java::lang::Object
{

public:
  AuthInfoProviderFactory();
  virtual ::gnu::javax::crypto::sasl::IAuthInfoProvider * getInstance(::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_crypto_sasl_AuthInfoProviderFactory__