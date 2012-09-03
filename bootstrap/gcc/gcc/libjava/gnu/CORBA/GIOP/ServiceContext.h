
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_GIOP_ServiceContext__
#define __gnu_CORBA_GIOP_ServiceContext__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace CDR
      {
          class AbstractCdrInput;
          class AbstractCdrOutput;
      }
      namespace GIOP
      {
          class ServiceContext;
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace IOP
      {
          class ServiceContext;
      }
    }
  }
}

class gnu::CORBA::GIOP::ServiceContext : public ::java::lang::Object
{

public:
  ServiceContext();
  ServiceContext(::org::omg::IOP::ServiceContext *);
  static ::gnu::CORBA::GIOP::ServiceContext * read(::gnu::CORBA::CDR::AbstractCdrInput *);
  static JArray< ::gnu::CORBA::GIOP::ServiceContext * > * readSequence(::gnu::CORBA::CDR::AbstractCdrInput *);
  virtual void write(::gnu::CORBA::CDR::AbstractCdrOutput *);
  static void writeSequence(::gnu::CORBA::CDR::AbstractCdrOutput *, JArray< ::gnu::CORBA::GIOP::ServiceContext * > *);
  static void add(JArray< ::org::omg::IOP::ServiceContext * > *, ::org::omg::IOP::ServiceContext *, jboolean);
  static JArray< ::gnu::CORBA::GIOP::ServiceContext * > * add(JArray< ::gnu::CORBA::GIOP::ServiceContext * > *, ::org::omg::IOP::ServiceContext *, jboolean);
  static ::org::omg::IOP::ServiceContext * findContext(jint, JArray< ::org::omg::IOP::ServiceContext * > *);
  static ::org::omg::IOP::ServiceContext * findContext(jint, JArray< ::gnu::CORBA::GIOP::ServiceContext * > *);
  static ::gnu::CORBA::GIOP::ServiceContext * find(jint, JArray< ::gnu::CORBA::GIOP::ServiceContext * > *);
  virtual ::java::lang::String * toString();
private:
  static const jlong serialVersionUID = 1LL;
public:
  static const jint TransactionService = 0;
  static const jint CodeSets = 1;
  static const jint ChainBypassCheck = 2;
  static const jint ChainBypassInfo = 3;
  static const jint LogicalThreadId = 4;
  static const jint BI_DIR_IIOP = 5;
  static const jint SendingContextRunTime = 6;
  static const jint INVOCATION_POLICIES = 7;
  static const jint FORWARDED_IDENTITY = 8;
  static const jint UnknownExceptionInfo = 9;
  static const jint RTCorbaPriority = 10;
  static const jint RTCorbaPriorityRange = 11;
  static const jint FT_GROUP_VERSION = 12;
  static const jint FT_REQUEST = 13;
  static const jint ExceptionDetailMessage = 14;
  static const jint SecurityAttributeService = 15;
  static const jint ActivityService = 16;
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) context_id;
  JArray< jbyte > * context_data;
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_GIOP_ServiceContext__