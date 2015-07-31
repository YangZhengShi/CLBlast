
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. This
// project loosely follows the Google C++ styleguide and uses a tab-size of two spaces and a max-
// width of 100 characters per line.
//
// Author(s):
//   Cedric Nugteren <www.cedricnugteren.nl>
//
// This file implements the tests for the Xsymm routine.
//
// =================================================================================================

#include "correctness/testblas.h"
#include "routines/level3/xsymm.h"

// =================================================================================================

// Shortcuts to the clblast namespace
using float2 = clblast::float2;
using double2 = clblast::double2;

// Main function (not within the clblast namespace)
int main(int argc, char *argv[]) {
  clblast::RunTests<clblast::TestXsymm<float>, float, float>(argc, argv, false, "SSYMM");
  clblast::RunTests<clblast::TestXsymm<double>, double, double>(argc, argv, true, "DSYMM");
  clblast::RunTests<clblast::TestXsymm<float2>, float2, float2>(argc, argv, true, "CSYMM");
  clblast::RunTests<clblast::TestXsymm<double2>, double2, double2>(argc, argv, true, "ZSYMM");
  return 0;
}

// =================================================================================================
