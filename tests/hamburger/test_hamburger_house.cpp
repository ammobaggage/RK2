#include "hamburger/hamburger_house.h"
#include <gtest/gtest.h>

TEST(HamburgerHouseTest, CheeseBurgerContents) {
    HamburgerHouse house(std::make_unique<BeefHamburgerFactory>());
    testing::internal::CaptureStdout();
    house.MakeCheeseBurger().Print();
    std::string output = testing::internal::GetCapturedStdout();
    
    EXPECT_NE(output.find("LightBread"), std::string::npos);
    EXPECT_NE(output.find("BeefPatty"), std::string::npos);
    EXPECT_NE(output.find("MozzarellaCheese"), std::string::npos);
}

TEST(HamburgerHouseTest, PorkJumboBurger) {
    HamburgerHouse house(std::make_unique<PorkHamburgerFactory>());
    testing::internal::CaptureStdout();
    house.MakeJumboBurger().Print();
    std::string output = testing::internal::GetCapturedStdout();
    
    size_t count = 0;
    size_t pos = 0;
    while ((pos = output.find("PorkPatty", pos)) != std::string::npos) {
        ++count;
        pos += 9; 
    }
    EXPECT_EQ(count, 2);
}
