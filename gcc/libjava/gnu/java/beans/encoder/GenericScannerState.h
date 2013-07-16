
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_beans_encoder_GenericScannerState__
#define __gnu_java_beans_encoder_GenericScannerState__

#pragma interface

#include <gnu/java/beans/encoder/ScannerState.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace beans
      {
        namespace encoder
        {
            class Context;
            class GenericScannerState;
            class ObjectId;
            class Root;
        }
      }
    }
  }
}

class gnu::java::beans::encoder::GenericScannerState : public ::gnu::java::beans::encoder::ScannerState
{

public: // actually package-private
  GenericScannerState(::gnu::java::beans::encoder::Root *);
  GenericScannerState(::gnu::java::beans::encoder::Root *, jint);
public: // actually protected
  virtual void enterImpl(::gnu::java::beans::encoder::Context *);
public: // actually package-private
  virtual void methodInvocation(::java::lang::String *);
  virtual void staticMethodInvocation(::java::lang::String *, ::java::lang::String *);
  virtual void staticFieldAccess(::java::lang::String *, ::java::lang::String *);
  virtual void classResolution(::java::lang::String *);
  virtual void objectInstantiation(::java::lang::String *, ::gnu::java::beans::encoder::ObjectId *);
  virtual void primitiveInstantiation(::java::lang::String *, ::java::lang::String *);
  virtual void objectArrayInstantiation(::java::lang::String *, ::java::lang::String *, ::gnu::java::beans::encoder::ObjectId *);
  virtual void primitiveArrayInstantiation(::java::lang::String *, ::java::lang::String *, ::gnu::java::beans::encoder::ObjectId *);
  virtual void arraySet(::java::lang::String *);
  virtual void arrayGet(::java::lang::String *);
  virtual void listGet();
  virtual void listSet();
  virtual void nullObject();
  virtual void stringReference(::java::lang::String *);
  virtual void objectReference(::gnu::java::beans::encoder::ObjectId *);
  virtual void end();
  virtual void enter();
private:
  jint __attribute__((aligned(__alignof__( ::gnu::java::beans::encoder::ScannerState)))) skipElements;
  jint initialSkipElements;
public: // actually package-private
  ::gnu::java::beans::encoder::Root * root;
  ::java::util::HashMap * skipValues;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_beans_encoder_GenericScannerState__