// Copyright 2022 Kolosova Alena

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Kolosova_Alena_complex_number_test, Can_Create_Zero) {
    // Arrange
    double re = 0.0;
    double im = 0.0;

    // Act
    ComplexNumber z(re, im);

    // Assert
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}

TEST(Kolosova_Alena_complex_number_test, Can_Copy_Number) {
    // Arrange
    double re = 0.0;
    double im = 0.0;
    ComplexNumber z(re, im);

    // Act
    ComplexNumber c(z);

    // Assert
    EXPECT_EQ(re, c.getRe());
    EXPECT_EQ(im, c.getIm());
}

TEST(Kolosova_Alena_complex_number_test, Check_Setters) {
    ComplexNumber a;
    a.setIm(-4.8);
    a.setRe(0.2);
    EXPECT_EQ(a.getIm(), -4.8);
    EXPECT_EQ(a.getRe(), 0.2);
}

TEST(Kolosova_Alena_complex_number_test, Can_Sum) {
    // Arrange
    ComplexNumber a(3.0, 2.4), b(1.2, 3.5), c(4.2, 5.9);

    // Act
    ComplexNumber d = a + b;

    // Assert
    EXPECT_EQ(c, d);
}

TEST(Kolosova_Alena_complex_number_test, Can_Subtract) {
    // Arrange
    ComplexNumber a(3.0, 2.4), b(1.2, 3.4), c(4.2, 5.8);

    // Act
    ComplexNumber d = c - b;

    // Assert
    ASSERT_EQ(a, d);
}

TEST(Kolosova_Alena_complex_number_test, Can_Multiply) {
    // Arrange
    ComplexNumber a(0, 1), b(-1, 0);

    // Act
    ComplexNumber c = a * a;

    // Assert
    EXPECT_EQ(b, c);
}

TEST(Kolosova_Alena_complex_number_test, Throws_When_Divided_By_Zero) {
    // Arrange
    ComplexNumber a(1.5, 24.6), b(0, 0);

    // Act


    // Assert
    EXPECT_ANY_THROW(a / b);
}

TEST(Kolosova_Alena_complex_number_test, Can_Divide) {
    // Arrange
    ComplexNumber a(3, -1), b(2, -2), c(1, 0.5);

        // Act
    ComplexNumber d = a / b;

    // Assert
    EXPECT_EQ(c, d);
}