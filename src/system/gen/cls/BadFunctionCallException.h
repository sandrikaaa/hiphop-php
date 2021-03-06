/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_BadFunctionCallException_h1998da7d__
#define __GENERATED_cls_BadFunctionCallException_h1998da7d__

#include <cls/BadFunctionCallException.fw.h>
#include <cls/LogicException.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 183 */
FORWARD_DECLARE_CLASS(BadFunctionCallException);
class c_BadFunctionCallException : public c_LogicException {
  public:

  // Properties

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON(BadFunctionCallException, BadFunctionCallException)
  DECLARE_INVOKE_EX(BadFunctionCallException, BadFunctionCallException, LogicException)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_BadFunctionCallException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_BadFunctionCallException 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_BadFunctionCallException 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_BadFunctionCallException 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY_BadFunctionCallException 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_BadFunctionCallException 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_BadFunctionCallException 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_BadFunctionCallException 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_BadFunctionCallException 1

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_BadFunctionCallException 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  void init();
};
extern struct ObjectStaticCallbacks cw_BadFunctionCallException;
Object co_BadFunctionCallException(CArrRef params, bool init = true);
Object coo_BadFunctionCallException();

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_BadFunctionCallException_h1998da7d__
