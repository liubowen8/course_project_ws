import sys
print(sys.path)
sys.path.append("/home/l/tutorials_wspy2/src/robot_mrobot/mrobot_teleop/scripts/")
print(sys.path)

import test_beimported_in_difftree

print(test_beimported_in_difftree.x)
print(test_beimported_in_difftree.f())
import numpy
numpy.array2string