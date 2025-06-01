#include "munition/munition_store.h"
#include <gtest/gtest.h>
#include <sstream>

TEST(MunitionStoreTest, AncientStoreOutput) {
    MunitionStore store(std::make_unique<AncientMunitionFactory>());
    std::stringstream output;
    
    testing::internal::CaptureStdout();
    store.Print();
    std::string out = testing::internal::GetCapturedStdout();
    
    EXPECT_TRUE(out.find("Knife") != std::string::npos);
    EXPECT_TRUE(out.find("Horse") != std::string::npos);
}

TEST(MunitionStoreTest, FactorySwitching) {
    MunitionStore store(std::make_unique<AncientMunitionFactory>());
    
    testing::internal::CaptureStdout();
    store.Print();
    std::string out = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(out.find("Knife") != std::string::npos);

    store.ChangeFactory(std::make_unique<ModernMunitionFactory>());
    testing::internal::CaptureStdout();
    store.Print();
    out = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(out.find("Gun") != std::string::npos);
    EXPECT_TRUE(out.find("Tank") != std::string::npos);
}
