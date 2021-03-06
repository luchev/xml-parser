#include <lib/catch.hpp>
#include <test/test-utilities.hpp>
#include <test/test-XmlTag.hpp>

TEST_CASE("XmlTag getName() correctness", "[xmlTag]") {
    REQUIRE(testXmlTagGetNameCorrectTag());
    REQUIRE(testXmlTagGetNameIncorrectTag());
    REQUIRE(testXmlTagGetNameOpenTag());
    REQUIRE(testXmlTagGetNameCloseTag());
    REQUIRE(testXmlTagGetNameSpecialTag());
    REQUIRE(testXmlTagGetNameSelfClosingTag());
}

TEST_CASE("XmlTag isValid() correctness", "[xmlTag]") {
    REQUIRE(testXmlTagIsValidTrue());
    REQUIRE(testXmlTagIsValidFalse());
}

TEST_CASE("XmlTag isContent() correctness", "[xmlTag]") {
    REQUIRE(testXmlTagIsContentsTrue());
    REQUIRE(testXmlTagIsContentsFalse());
}

TEST_CASE("XmlTag constructor correctness", "[xmlTag]") {
    REQUIRE(testXmlTagConstructorForTrimming());
    REQUIRE(testXmlTagConstructorWithCorrectOpenTag());
    REQUIRE(testXmlTagConstructorWithCorrectCloseTag());
    REQUIRE(testXmlTagConstructorWithCorrectSpecialTag());
    REQUIRE(testXmlTagConstructorWithIncorrectInput());
}

TEST_CASE("XmlTag toString() correctness", "[xmlTag]") {
    REQUIRE(testXmlTagToString());
}

TEST_CASE("XmlTag isOpening() correctness", "[xmlTag]") {
    REQUIRE(testXmlTagIsOpeningWithOpenTag());
    REQUIRE(testXmlTagIsOpeningWithCloseTag());
}

TEST_CASE("XmlTag isClosing() correctness", "[xmlTag]") {
    REQUIRE(testXmlTagIsClosingWithOpenTag());
    REQUIRE(testXmlTagIsClosingWithCloseTag());
}

TEST_CASE("XmlTag isEmpty() correctness", "[xmlTag]") {
    REQUIRE(testXmlTagIsEmptyWithSelfClosing());
    REQUIRE(testXmlTagIsEmptyWithOpenTag());
    REQUIRE(testXmlTagIsEmptyWithCloseTag());
}

TEST_CASE("XmlTag getAttributes() correctness", "[xmlTag]") {
    REQUIRE(testXmlTagGetAttributesCountWithOneAttribute());
    REQUIRE(testXmlTagGetAttributesCountWithTwoAttributes());
    REQUIRE(testXmlTagGetAttributesAttributeValuesAreCorrect());
}
