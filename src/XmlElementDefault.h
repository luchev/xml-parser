#pragma once
#include <src/XmlElementEmpty.h>
#include <string>
#include <vector>

class XmlElementDefault : public XmlElementEmpty {
 public:
    explicit XmlElementDefault(const std::string& name = "");
    XmlElementDefault(const XmlElementDefault& rhs);
    XmlElementDefault& operator=(const XmlElementDefault& rhs);
    ~XmlElementDefault();

    void addChildElement(const XmlElement* xmlElement);
    XmlElement* getLastChild();
    size_t getNumberOfChildren() const;

    std::string toString() const override;
    std::string toStringBeautified() const override;

    XmlElement* clone() const override;

 private:
    std::vector<XmlElement*> children;

    void copyXmlElementDefault(const XmlElementDefault& element);
    void setChildren(const std::vector<XmlElement*>& children);
    void deleteChildren();
    XmlElement* getChild(size_t index);

    std::string toStringOpenTag() const;
    std::string toStringCloseTag() const;
};
