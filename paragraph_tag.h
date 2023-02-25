//
// Created by adria on 24/2/2023.
//

#ifndef HTML_CREATOR_PARAGRAPH_TAG_H
#define HTML_CREATOR_PARAGRAPH_TAG_H

#include <iostream>
#include <string>
#include <vector>
#include "tag_builder.h"
using namespace std;

class Paragraph_Tag: public Tag_Builder {
public:
    Paragraph_Tag() { tag_build.reset(new Tag); };

    void add_inner_text() {
        string add_text, opc, text_format;
        cout << "Tu contenido > ";
        getline(cin, add_text);

        // seleccionar solo un formato
        cout << "Puede agregar estilos, escribir el tag:\n-- Negrita (strong)\n-- Cursiva (em)\n-- Tachado (strike)\n-- Subrayado (u)\n > ";
        getline(cin, opc);

        cout << "Sección del párrafo (palabra o frase) > ";
        getline(cin, text_format);
        string text_taged = "<" + opc + ">" + text_format + "</" + opc + ">";

        size_t pos = add_text.find(text_format);  // primer index coincidente con el texto
        if (pos != string::npos)
            add_text.replace(pos, text_format.length(), text_taged);

        tag_build->inner_text += add_text;
    };

    string inner_cout() {
        return "<p>\n\t" + tag_build->inner_text + "\n</p>";
    }

    ~Paragraph_Tag() {}
};

#endif //HTML_CREATOR_PARAGRAPH_TAG_H
