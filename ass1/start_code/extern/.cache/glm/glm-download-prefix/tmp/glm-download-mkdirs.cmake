# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/Users/xiaokairong/Desktop/animatin/ass0/starter_code_mac/extern/glm")
  file(MAKE_DIRECTORY "/Users/xiaokairong/Desktop/animatin/ass0/starter_code_mac/extern/glm")
endif()
file(MAKE_DIRECTORY
  "/Users/xiaokairong/Desktop/animatin/ass0/starter_code_mac/build/glm-build"
  "/Users/xiaokairong/Desktop/animatin/ass0/starter_code_mac/extern/.cache/glm/glm-download-prefix"
  "/Users/xiaokairong/Desktop/animatin/ass0/starter_code_mac/extern/.cache/glm/glm-download-prefix/tmp"
  "/Users/xiaokairong/Desktop/animatin/ass0/starter_code_mac/extern/.cache/glm/glm-download-prefix/src/glm-download-stamp"
  "/Users/xiaokairong/Desktop/animatin/ass0/starter_code_mac/extern/.cache/glm/glm-download-prefix/src"
  "/Users/xiaokairong/Desktop/animatin/ass0/starter_code_mac/extern/.cache/glm/glm-download-prefix/src/glm-download-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/xiaokairong/Desktop/animatin/ass0/starter_code_mac/extern/.cache/glm/glm-download-prefix/src/glm-download-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/xiaokairong/Desktop/animatin/ass0/starter_code_mac/extern/.cache/glm/glm-download-prefix/src/glm-download-stamp${cfgdir}") # cfgdir has leading slash
endif()
