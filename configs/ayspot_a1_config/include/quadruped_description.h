#ifndef QUADRUPED_DESCRIPTION_H
#define QUADRUPED_DESCRIPTION_H

#include <quadruped_base/quadruped_base.h>

namespace champ
{
    namespace URDF
    {
        void loadFromHeader(champ::QuadrupedBase &base)
        {
      base.lf.hip.setOrigin(0.1808, 0.065, 0.0, 0.0, 0.0, 0.0);
base.lf.upper_leg.setOrigin(0.0, 0.0938, -0.0, 0.0, 0.0, 0.0);
base.lf.lower_leg.setOrigin(-4.2e-05, -0.00067, -0.150054, 0.0, 0.0, 0.0);
     base.lf.foot.setOrigin(1.7e-05, 0.0, -0.180027, 0.0, 0.0, 0.0);

      base.rf.hip.setOrigin(0.1808, -0.065, 0.0, 0.0, 0.0, 0.0);
base.rf.upper_leg.setOrigin(0.0, -0.0938, -0.0, 0.0, 0.0, 0.0);
base.rf.lower_leg.setOrigin(4.2e-05, 0.00067, -0.150054, 0.0, 0.0, 0.0);
     base.rf.foot.setOrigin(1.7e-05, 0.0, -0.180027, 0.0, 0.0, 0.0);

      base.lh.hip.setOrigin(-0.1808, 0.065, 0.0, 0.0, 0.0, 0.0);
base.lh.upper_leg.setOrigin(0.0, 0.0938, -0.0, 0.0, 0.0, 0.0);
base.lh.lower_leg.setOrigin(-4.2e-05, -0.00067, -0.150054, 0.0, 0.0, 0.0);
     base.lh.foot.setOrigin(1.7e-05, 0.0, -0.180027, 0.0, 0.0, 0.0);

      base.rh.hip.setOrigin(-0.1808, -0.065, 0.0, 0.0, 0.0, 0.0);
base.rh.upper_leg.setOrigin(0.0, -0.0938, -0.0, 0.0, 0.0, 0.0);
base.rh.lower_leg.setOrigin(4.2e-05, 0.00067, -0.150054, 0.0, 0.0, 0.0);
     base.rh.foot.setOrigin(1.7e-05, 0.0, -0.180027, 0.0, 0.0, 0.0);
        }
    }
}
#endif