#include <src/XmlElement.h>
#include <src/XmlAttribute.h>

XmlElement::~XmlElement() {
    // Intentionally empy - has nothing to delete
}

XmlElementType XmlElement::getType() const {
    return this->type;
}

std::string XmlElement::getName() const {
    return name;
}

void XmlElement::setName(const std::string& name) {
    this->name = name;
}

XmlElement* XmlElement::getParent() const {
    return parent;
}

void XmlElement::setParent(XmlElement* parent) {
    this->parent = parent;
}
