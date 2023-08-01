//
// Created by 郑成琦 on 28/7/2023.
//
#include "gtest/gtest.h"
#include "DataLoader.h"

TEST(DataLoaderTestSuite, Sayhello) {
    DataLoader* sayHello = new DataLoader();
    sayHello->sayHello();
    sayHello->sayHello();
}
