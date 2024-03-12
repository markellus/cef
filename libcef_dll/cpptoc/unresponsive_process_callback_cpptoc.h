// Copyright (c) 2024 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=1816748407afd5599d8582de51b3289d1ea24a33$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_UNRESPONSIVE_PROCESS_CALLBACK_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_UNRESPONSIVE_PROCESS_CALLBACK_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_unresponsive_process_callback_capi.h"
#include "include/cef_unresponsive_process_callback.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefUnresponsiveProcessCallbackCppToC
    : public CefCppToCRefCounted<CefUnresponsiveProcessCallbackCppToC,
                                 CefUnresponsiveProcessCallback,
                                 cef_unresponsive_process_callback_t> {
 public:
  CefUnresponsiveProcessCallbackCppToC();
  virtual ~CefUnresponsiveProcessCallbackCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_UNRESPONSIVE_PROCESS_CALLBACK_CPPTOC_H_
