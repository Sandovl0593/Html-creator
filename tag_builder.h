//
// Created by adria on 21/2/2023.
//

#ifndef HTML_CREATOR_TAG_BUILDER_H
#define HTML_CREATOR_TAG_BUILDER_H

#include <vector>
#include <string>
#include <memory>
using namespace std;

class Tag {
    vector<unique_ptr<Tag>> child_tags;
public:
    string inner_text = "";
    ~Tag() = default;
};

class Tag_Builder {
protected:
    unique_ptr<Tag> tag_build;
public:
    virtual unique_ptr<Tag> get()  { return move(tag_build); }
    // virtual void add_child_tag(unique_ptr<Tag> child_tag_build) = 0;
    virtual void add_inner_text() = 0;
    virtual string inner_cout() = 0;
    virtual ~Tag_Builder() { tag_build.reset(); }
};

#endif //HTML_CREATOR_TAG_BUILDER_H
