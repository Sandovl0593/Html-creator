/**
 * - Crear clase HTML y subclases HEAD y BODY\n
 * - Crear clase abstracta TAG padre de los diferentes TAG conocidos\n
 * - En BODY crear unas subclases de TAG -> (DIV, HEADERS, SPANS, UL-OL, PARAGRAPHS. ETC) \n
 * - En HEAD se considera las subclases de TAG -> (SCRIPT y LINK), el título es un atributo.\n
 *
 */

#include <iostream>
#include <memory>
// #include "base_tags/head_tag.h"
#include "base_tags/tag_builder.h"
#include "text_tags/paragraph_tag.h"
using namespace std;

int main() {
    unique_ptr<Tag_Builder> p{new Paragraph_Tag};
    p->add_inner_text();
    cout << p->inner_cout() << endl;
    return 0;
}