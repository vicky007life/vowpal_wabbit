/*
Copyright (c) by respective owners including Yahoo!, Microsoft, and
individual contributors. All rights reserved.  Released under a BSD
license as described in the file LICENSE.
 */
#ifndef CSOAA_H
#define CSOAA_H

namespace CSOAA {
  LEARNER::learner* setup(vw& all, po::variables_map& vm);
}

namespace CSOAA_AND_WAP_LDF {
  LEARNER::learner* setup(vw& all, po::variables_map& vm);
}

#endif
