// Copyright (c) 2013 GitHub, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ATOM_COMMON_V8_NODE_COMMON_H_
#define ATOM_COMMON_V8_NODE_COMMON_H_

// Common helper for using node APIs.

#undef CHECK
#undef DISALLOW_COPY_AND_ASSIGN
#include "vendor/node/src/env.h"
#include "vendor/node/src/node.h"
#include "vendor/node/src/node_internals.h"
using node::node_isolate;

namespace atom {
// Defined in node_bindings.cc.
extern node::Environment* global_env;
}

#endif  // ATOM_COMMON_V8_NODE_COMMON_H_
