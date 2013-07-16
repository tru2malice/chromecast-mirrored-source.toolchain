
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_DomCharacterData__
#define __gnu_xml_dom_DomCharacterData__

#pragma interface

#include <gnu/xml/dom/DomNode.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
          class DomCharacterData;
          class DomDocument;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class NodeList;
      }
    }
  }
}

class gnu::xml::dom::DomCharacterData : public ::gnu::xml::dom::DomNode
{

public: // actually package-private
  DomCharacterData(jshort, ::gnu::xml::dom::DomDocument *, ::java::lang::String *);
  DomCharacterData(jshort, ::gnu::xml::dom::DomDocument *, JArray< jchar > *, jint, jint);
public:
  virtual void appendData(::java::lang::String *);
  virtual void deleteData(jint, jint);
  virtual ::java::lang::String * getNodeValue();
  virtual ::java::lang::String * getData();
  virtual jint getLength();
  virtual void insertData(jint, ::java::lang::String *);
  virtual void replaceData(jint, jint, ::java::lang::String *);
  virtual void setNodeValue(::java::lang::String *);
  virtual void setData(::java::lang::String *);
  virtual ::java::lang::String * substringData(jint, jint);
  virtual ::org::w3c::dom::NodeList * getChildNodes();
  virtual ::java::lang::String * getBaseURI();
private:
  void mutating(::java::lang::String *);
public: // actually package-private
  static ::org::w3c::dom::NodeList * CHILD_NODES;
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::gnu::xml::dom::DomNode)))) text;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_DomCharacterData__