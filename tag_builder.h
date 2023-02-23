//
// Created by adria on 21/2/2023.
//

#ifndef HTML_CREATOR_TAG_BUILDER_H
#define HTML_CREATOR_TAG_BUILDER_H

#include <vector>
#include <string>
using namespace std;

class Tag_Builder;

class Tag {
    string name_tag;
    [[maybe_unused]] vector<Tag> child_tag;
    bool is_paired = true;

public:
    void set_name_tag(string name_tag){ this->name_tag = name_tag; }
    friend class Tag_Builder;
    static Tag_Builder mount();
    ~Tag() = default;
};

class Tag_Builder {
    Tag tag;
public:
    operator Tag() const { return move(tag);}

    void add_child_tag(string name_tag);
    string inner_cout();
};

#endif //HTML_CREATOR_TAG_BUILDER_H
