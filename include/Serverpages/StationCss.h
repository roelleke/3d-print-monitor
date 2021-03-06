#include <avr/pgmspace.h>

const char station_css[] PROGMEM =
{

"body {\n"
"    background-color: #d2d6df;\n"
"  }\n"
"\n"
"  .alert.mdi::before,\n"
".breadcrumb .mdi::before,\n"
".btn.mdi::before,\n"
".card-title.mdi::before,\n"
".card-subtitle.mdi::before,\n"
".card-link.mdi::before,\n"
".dropdown-item.mdi::before,\n"
".list-group-item.mdi::before,\n"
".nav-link.mdi::before {\n"
"    font-size: 1.25em;\n"
"    line-height: initial;\n"
"    position: relative;\n"
"    top: 0.09rem;\n"
"}\n"
".alert.mdi::before,\n"
".breadcrumb .mdi:not(:empty)::before,\n"
".btn.mdi:not(:empty)::before,\n"
".card-title.mdi:not(:empty)::before,\n"
".card-subtitle.mdi:not(:empty)::before,\n"
".card-link.mdi:not(:empty)::before,\n"
".dropdown-item.mdi:not(:empty)::before,\n"
".nav-link.mdi:not(:empty)::before {\n"
"    margin-right: 0.25rem;\n"
"}\n"
".list-group-item.mdi:not(:empty)::before {\n"
"    margin-right: 0.5rem;\n"
"}\n"
".dropdown-item.mdi:not(:empty)::before {\n"
"    margin-left: -0.75rem;\n"
"}\n"
".alert.mdi::before,\n"
".list-group-item.mdi:not(:empty)::before {\n"
"    margin-left: -0.5rem;\n"
"}\n"
".modal-title.mdi::before {\n"
"    font-size: 1.5em;\n"
"    line-height: 0.5;\n"
"    position: relative;\n"
"    top: 0.26rem;\n"
"    margin-right: 0.5rem;\n"
"}\n"
""
};