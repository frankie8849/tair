#include <gtest/gtest.h>
#include "tbsys.h"
int main(int argc, char **argv) {
    TBSYS_LOGGER.setLogLevel("ERROR");
      ::testing::InitGoogleTest(&argc, argv);
      return RUN_ALL_TESTS();
}
