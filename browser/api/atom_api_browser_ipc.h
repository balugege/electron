// Copyright (c) 2013 GitHub, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ATOM_BROWSER_API_ATOM_API_BROWSER_IPC_H_
#define ATOM_BROWSER_API_ATOM_API_BROWSER_IPC_H_

#include "base/basictypes.h"
#include "v8/include/v8.h"

namespace atom {

namespace api {

class BrowserIPC {
 public:
  static void Initialize(v8::Handle<v8::Object> target);

 private:
  static void Send(const v8::FunctionCallbackInfo<v8::Value>& args);

  DISALLOW_IMPLICIT_CONSTRUCTORS(BrowserIPC);
};

}  // namespace api

}  // namespace atom

#endif  // ATOM_BROWSER_API_ATOM_API_BROWSER_IPC_H_
