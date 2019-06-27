#include <src/XmlAttribute.h>

#include <src/CharacterSet.h>
#include <src/XmlConfig.h>
#include <string>
#include <exception>
XmlAttribute::XmlAttribute(const std::string& name, const std::string& value) {
    if (name == "" && CharacterSet::hasWhiteSpace(value)) {
        std::string message =
            "Nameless xml attribute must have value with no spaces";
        throw std::invalid_argument(message);
    }
    this->name = name;
    this->value = value;
}

std::string XmlAttribute::getName() const {
    return this->name;
}

std::string XmlAttribute::getValue() const {
    return this->value;
}

std::string XmlAttribute::toString() const {
    std::string quote = XmlConfig::getInstance()->getOutputQuote();
    if (!isNameless()) {
        return this->name + "=" + quote + this->value + quote;
    } else {
        return this->value;
    }
}

std::string XmlAttribute::toStringCompact() const {
    std::string quote = XmlConfig::getInstance()->getOutputQuote();
    if (CharacterSet::hasWhiteSpace(this->value)) {
        return toString();
    } else {
        return this->name + "=" + this->value;
    }
}

bool XmlAttribute::isNameless() const {
    return name.length() == 0;
}
