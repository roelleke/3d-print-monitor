#include <avr/pgmspace.h>

const char settings_html[] PROGMEM =
{

"<!doctype html><html lang=\"en\"><head> <meta charset=\"utf-8\"> <meta name=\"viewport\" content=\"width=device-width, initial-scale=1, shrink-to-fit=no\"> <link rel=\"stylesheet\" href=\"https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css\" integrity=\"sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T\" crossorigin=\"anonymous\"> <link rel=\"stylesheet\" href=\"css/station.css\"> <title>OctoPrint Monitor | General Settings</title></head><body> %NAVBAR% <div class=\"container-fluid\" style=\"margin-top:80px\"> <h3>Update one section at a time. Allow up to 10 seconds for display refresh.</h3> <div class=\"table-responsive-md\"> <table class=\"table\" style=\"background-color: white\"> <thead class=\"thead-light\"> <tr> <th>Display</th> </tr></thead> <tbody> <tr> <td> <form action=\"/updateDisplaySettings.html\"> <div class=\"form-group\"> <div class=\"form-check\"> <label class=\"form-check-label\" for=\"display1\"> <input type=\"radio\" class=\"form-check-input\" id=\"display1\" name=\"optdisplay\" value=\"display1\" %DISPLAY1CHECKED%>Detailed current weather </label> </div><div class=\"form-check\"> <label class=\"form-check-label\" for=\"display2\"> <input type=\"radio\" class=\"form-check-input\" id=\"display2\" name=\"optdisplay\" value=\"display2\" %DISPLAY2CHECKED%>OctoPrint monitor </label> </div></div><div class=\"form-group\"> <label for=\"displayBrighness\">Display brightness</label> <input type=\"range\" class=\"custom-range\" id=\"displayBrighness\" name=\"brightness\" min=\"0\" max=\"100\" value=\"%BRIGHTNESS%\"> </div><button type=\"submit\" class=\"btn btn-primary\">Save</button> </form> </td></tr></tbody> </table> </div><div class=\"table-responsive-md\"> <table class=\"table\" style=\"background-color: white\"> <thead class=\"thead-light\"> <tr> <th>Clock</th> </tr></thead> <tbody> <tr> <td> <form action=\"/updateClockSettings.html\"> <div class=\"form-group\"> <label for=\"utcOffset\">Offset from UTC in hours</label> <input type=\"number\" class=\"form-control\" id=\"utcOffset\" value=\"%UTCOFFSET%\" placeholder=\"UTC offset\" name=\"utcOffset\" maxlength=\"12\"> </div><button type=\"submit\" class=\"btn btn-primary\">Save</button> </form> </td></tr></tbody> </table> </div><div class=\"table-responsive-md\"> <table class=\"table\" style=\"background-color: white\"> <thead class=\"thead-light\"> <tr> <th>Timings - enter values in seconds</th> </tr></thead> <tbody> <tr> <td> <form action=\"/updateTimings.html\"> <div class=\"form-group\"> <label for=\"currentWeatherInterval\">Current weather update interval: (min 30 seconds)</label> <input type=\"number\" class=\"form-control\" id=\"currentWeatherInterval\" value=\"%CURRENTWEATHERINTERVAL%\" placeholder=\"Current weather update interval\" name=\"currentWeatherInterval\" min=\"30\"> </div><div class=\"form-group\"> <label for=\"printMonitorInterval\">Print monitor interval: (min 5 seconds)</label> <input type=\"number\" class=\"form-control\" id=\"printMonitorInterval\" value=\"%PRINTMONITORINTERVAL%\" placeholder=\"Print monitor interval\" name=\"printMonitorInterval\" min=\"5\"> </div><button type=\"submit\" class=\"btn btn-primary\">Save</button> </form> </td></tr></tbody> </table> </div><div class=\"table-responsive-md\"> <table class=\"table\" style=\"background-color: white\"> <thead class=\"thead-light\"> <tr> <th>Reset</th> </tr></thead> <tbody> <tr> <td> <a class=\"btn btn-warning confirmResetSettings\">Reset settings</a> </td></tr><tr> <td> <a class=\"btn btn-warning confirmForgetWifi\">Forget Wifi</a> </td></tr></tbody> </table> </div></div><script src=\"https://code.jquery.com/jquery-3.3.1.slim.min.js\" integrity=\"sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo\" crossorigin=\"anonymous\"></script> <script src=\"https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js\" integrity=\"sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1\" crossorigin=\"anonymous\"></script> <script src=\"https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js\" integrity=\"sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM\" crossorigin=\"anonymous\"></script> <script src=\"js/jquery.confirmModal.min.js\"></script> <script src=\"js/settings.js\"></script></body></html>"

};

const char settings_js[] PROGMEM =
{

"$(function () {\n"
"    $('.confirmResetSettings').click(function (e) {\n"
"        var options = {\n"
"            messageHeader: 'Reset Settings?',\n"
"            modalVerticalCenter: true,\n"
"            backgroundBlur: ['#header_wrap, #main_content_wrap, #footer_wrap'],\n"
"            autoFocusOnConfirmBtn: false,\n"
"          };\n"
"\n"
"        e.preventDefault();\n"
"        $.confirmModal('Are you sure you want to reset?', options, function (el) {\n"
"            window.location.href = \"/resetSettings.html\";\n"
"        });\n"
"    });\n"
"\n"
"    $('.confirmForgetWifi').click(function (e) {\n"
"        var options = {\n"
"            messageHeader: 'Forget WiFi?',\n"
"            modalVerticalCenter: true,\n"
"            backgroundBlur: ['#header_wrap, #main_content_wrap, #footer_wrap'],\n"
"            autoFocusOnConfirmBtn: false,\n"
"          };\n"
"\n"
"        e.preventDefault();\n"
"        $.confirmModal('Are you sure you want to forget the current Wifi settings?', options, function (el) {\n"
"            window.location.href = \"/forgetWiFi.html\";\n"
"        });\n"
"    });\n"
"});"

};