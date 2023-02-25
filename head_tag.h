//
// Created by adria on 20/2/2023.
//

#ifndef HTML_CREATOR_HEAD_TAG_H
#define HTML_CREATOR_HEAD_TAG_H

#include <string>
#include <vector>
using namespace std;

struct Link_Header {
    string inner;
    Link_Header(string href, string rel) {
        inner = "\t<link rel='" + rel + "' href='" + href + "'>\n";
    }
};

class Head_Tag {
    string title = "Document";
    vector<Link_Header> tags_link = {};

public:
    Head_Tag() = default;
    Head_Tag(string title_): title(title_) {}

    void add_link(string href, string rel) {
        tags_link.push_back(Link_Header(href, rel));
    }

    string inner_cout() {
        string list_links = "";
        for (const auto link: tags_link)
            list_links += link.inner;
        return "<head>\n\t<title>" + title + "</title>\n" + list_links + "</head>";
    }
};

#endif //HTML_CREATOR_HEAD_TAG_H
