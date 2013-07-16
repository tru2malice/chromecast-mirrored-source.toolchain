
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_ConcurrentHashMap$Segment__
#define __java_util_concurrent_ConcurrentHashMap$Segment__

#pragma interface

#include <java/util/concurrent/locks/ReentrantLock.h>
#include <gcj/array.h>


class java::util::concurrent::ConcurrentHashMap$Segment : public ::java::util::concurrent::locks::ReentrantLock
{

public: // actually package-private
  ConcurrentHashMap$Segment(jint, jfloat);
  static JArray< ::java::util::concurrent::ConcurrentHashMap$Segment * > * newArray(jint);
  void setTable(JArray< ::java::util::concurrent::ConcurrentHashMap$HashEntry * > *);
  ::java::util::concurrent::ConcurrentHashMap$HashEntry * getFirst(jint);
  ::java::lang::Object * readValueUnderLock(::java::util::concurrent::ConcurrentHashMap$HashEntry *);
  ::java::lang::Object * get(::java::lang::Object *, jint);
  jboolean containsKey(::java::lang::Object *, jint);
  jboolean containsValue(::java::lang::Object *);
  jboolean replace(::java::lang::Object *, jint, ::java::lang::Object *, ::java::lang::Object *);
  ::java::lang::Object * replace(::java::lang::Object *, jint, ::java::lang::Object *);
  ::java::lang::Object * put(::java::lang::Object *, jint, ::java::lang::Object *, jboolean);
  void rehash();
  ::java::lang::Object * remove(::java::lang::Object *, jint, ::java::lang::Object *);
  void clear();
private:
  static const jlong serialVersionUID = 2249069246763182397LL;
public: // actually package-private
  jint volatile __attribute__((aligned(__alignof__( ::java::util::concurrent::locks::ReentrantLock)))) count;
  jint modCount;
  jint threshold;
  JArray< ::java::util::concurrent::ConcurrentHashMap$HashEntry * > * volatile table;
  jfloat loadFactor;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_ConcurrentHashMap$Segment__