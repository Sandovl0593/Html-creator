//
// Created by adria on 20/2/2023.
//

#ifndef HTML_CREATOR_HTML_INIT_BUILDER_H
#define HTML_CREATOR_HTML_INIT_BUILDER_H

#include <bits//stdc++.h>
using namespace std;

struct Link_Header {
    string inner;
    Link_Header(string href, string rel) {
        inner = "<link rel='" + rel + "' href='" + href + "'>";
    }
};

class Head_Tag {
    string title = "";
    vector<Link_Header> link = {};
public:
    Head_Tag(string title_): title(title_) {}

    void add_link(string href, string rel) {
        link.push_back(Link_Header(href, rel));
    }

    string inner_head() {
        return "<head>\n\t<title>\n\t\t" + title + "\n\t</title>\n" + "</head>";
    }

};

#endif //HTML_CREATOR_HTML_INIT_BUILDER_H
