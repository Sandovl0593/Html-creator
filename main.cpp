/**
 * - Crear clase HTML y subclases HEAD y BODY
 * - Crear clase abstracta TAG padre de los diferentes TAG conocidos
 * - En BODY crear unas subclases de TAG  (DIV, HEADERS, SPANS, UL-OL, PARAGRAPHS. ETC)
 * - En HEAD se considera las subclases de TAG (SCRIPT y LINK), el título serrá un atributo.
 *
 */

#include <bits/stdc++.h>
#include "html_init_builder.h"

int main() {
    LINK link("sss", "ssssss");
    cout << link.inner << endl;
    return 0;
}
