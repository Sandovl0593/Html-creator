/**
 * - Crear clase HTML y subclases HEAD y BODY
 * - Crear clase abstracta TAG padre de los diferentes TAG conocidos
 * - En BODY crear unas subclases de TAG -> (DIV, HEADERS, SPANS, UL-OL, PARAGRAPHS. ETC)
 * - En HEAD se considera las subclases de TAG -> (SCRIPT y LINK), el título es un atributo.
 *
 */

#include <bits/stdc++.h>
#include "head_tag.h"

int main() {
    Link_Header link("style.css", "stylesheet");
    cout << link.inner << endl;
    return 0;
}
