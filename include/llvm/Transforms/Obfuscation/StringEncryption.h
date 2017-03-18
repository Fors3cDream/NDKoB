#ifndef _STRING_ENCRYPTION_H_
#define _STRING_ENCRYPTION_H_

// LLVM include 
#include "llvm/Pass.h"

using namespace llvm;

namespace llvm {
	Pass* createXorStringEncryption();
}

#endif