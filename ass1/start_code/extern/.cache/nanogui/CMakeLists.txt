# Distributed under the OSI-approved MIT License.  See accompanying
# file LICENSE or https://github.com/Crascit/DownloadProject for details.

cmake_minimum_required(VERSION 3.5)
cmake_policy(VERSION 4.1)

project(nanogui-download NONE)

include(ExternalProject)
ExternalProject_Add(nanogui-download
                    GIT_REPOSITORY;https://github.com/wjakob/nanogui.git;GIT_TAG;master
                    SOURCE_DIR          "/Users/xiaokairong/Desktop/animatin/ass0/starter_code_mac/extern/nanogui"
                    BINARY_DIR          "/Users/xiaokairong/Desktop/animatin/ass0/starter_code_mac/build/nanogui-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
)
