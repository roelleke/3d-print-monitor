#include <avr/pgmspace.h>

const char printMonitorSettings_html[] PROGMEM =
{

"<!doctype html><html lang=\"en\"><head> <meta charset=\"utf-8\"> <meta name=\"viewport\" content=\"width=device-width, initial-scale=1, shrink-to-fit=no\"> <link rel=\"stylesheet\" href=\"https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css\" integrity=\"sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T\" crossorigin=\"anonymous\"> <link rel=\"stylesheet\" href=\"css/station.css\"> <title>OctoPrint Monitor | Printers</title></head><body> %NAVBAR% <div class=\"container-fluid\" style=\"margin-top:80px\"> <div class=\"table-responsive-md\"> <table class=\"table\" style=\"background-color: white\"> <thead class=\"thead-light\"> <tr> <th>ID</th> <th>Printer name</th> <th>OctoPrint address</th> <th>Port</th> <th>Enabled</th> <th>Action</th> </tr></thead> <tbody> %PRINTERTABLE% </tbody> </table> <br>Adding a new printer will reset your display settings.<br><br><button type=\"button\" class=\"btn btn-primary\" %ADDPRINTERENABLED% data-toggle=\"modal\" data-backdrop='static' data-target=\"#addPrinterModal\">Add Printer</button> </div><div class=\"modal\" id=\"addPrinterModal\"> <div class=\"modal-dialog\"> <div class=\"modal-content\"> <div class=\"modal-header\"> <h4 class=\"modal-title\">Add Printer</h4> <button type=\"button\" class=\"close\" data-dismiss=\"modal\">&times;</button> </div><div class=\"modal-body\"> <form action=\"/addnewPrinter.html\"> <div class=\"form-group\"> <label for=\"octoPrintDisplayName\">Printer display name (not an OctoPrint setting, e.g. Ender 3)</label> <input type=\"text\" class=\"form-control\" id=\"octoPrintDisplayName\" required placeholder=\"Display name\" maxlength=\"64\" name=\"octoPrintDisplayName\"> </div><div class=\"form-group\"> <label for=\"octoPrintUrl\">OctoPrint address (don't include http://):</label> <input type=\"text\" class=\"form-control\" id=\"octoPrintUrl\" required placeholder=\"OctoPrint address\" maxlength=\"64\" name=\"octoPrintUrl\"> </div><div class=\"form-group\"> <label for=\"octoPrintPort\">Port:</label> <input type=\"number\" class=\"form-control\" id=\"octoPrintPort\" required placeholder=\"Port number\" name=\"octoPrintPort\"> </div><div class=\"form-group\"> <label for=\"octoPrintUsername\">User name:</label> <input type=\"text\" class=\"form-control\" id=\"octoPrintUsername\" placeholder=\"User name\" maxlength=\"64\" name=\"octoPrintUsername\"> </div><div class=\"form-group\"> <label for=\"octoPrintPassword\">Password:</label> <input type=\"password\" class=\"form-control\" id=\"octoPrintPassword\" placeholder=\"Password\" maxlength=\"64\" name=\"octoPrintPassword\"> </div><div class=\"form-group\"> <label for=\"octoPrintAPIKey\">OctoPrint API Key:</label> <input type=\"text\" class=\"form-control\" id=\"octoPrintAPIKey\" required placeholder=\"API key\" name=\"octoPrintAPIKey\"> </div><div class=\"form-check form-group\"> <label class=\"form-check-label\" for=\"check1\"> <input type=\"checkbox\" class=\"form-check-input\" id=\"printerEnabled\" name=\"printerEnabled\" value=\"Enabled\" Checked>Enabled </label> </div><button type=\"button\" class=\"btn btn-danger float-left\" data-dismiss=\"modal\">Cancel</button> <button type=\"submit\" class=\"btn btn-primary float-right\">Add</button> </form> </div></div></div></div><div class=\"modal\" id=\"editPrinterModal\"> <div class=\"modal-dialog\"> <div class=\"modal-content\"> <div class=\"modal-header\"> <h4 class=\"modal-title\">Edit Printer</h4> <button type=\"button\" class=\"close\" data-dismiss=\"modal\">&times;</button> </div><div class=\"modal-body\"> <form action=\"/editPrinter.html\"> <input type=\"hidden\" id=\"printerId\" name=\"printerId\"> <div class=\"form-group\"> <label for=\"editDisplayName\">Printer display name (not an OctoPrint setting, e.g. Ender 3)</label> <input type=\"text\" class=\"form-control\" id=\"editDisplayName\" required placeholder=\"Display name\" maxlength=\"64\" name=\"editDisplayName\"> </div><div class=\"form-group\"> <label for=\"editPrintUrl\">OctoPrint address (don't include http://):</label> <input type=\"text\" class=\"form-control\" id=\"editPrintUrl\" required placeholder=\"OctoPrint address\" maxlength=\"64\" name=\"editPrintUrl\"> </div><div class=\"form-group\"> <label for=\"editPort\">Port:</label> <input type=\"number\" class=\"form-control\" id=\"editPort\" required placeholder=\"Port number\" name=\"editPort\"> </div><div class=\"form-group\"> <label for=\"editUsername\">User name:</label> <input type=\"text\" class=\"form-control\" id=\"editUsername\" placeholder=\"User name\" maxlength=\"64\" name=\"editUsername\"> </div><div class=\"form-group\"> <label for=\"editPassword\">Password:</label> <input type=\"password\" class=\"form-control\" id=\"editPassword\" placeholder=\"Password\" maxlength=\"64\" name=\"editPassword\"> </div><div class=\"form-group\"> <label for=\"editAPIKey\">OctoPrint API Key:</label> <input type=\"text\" class=\"form-control\" id=\"editAPIKey\" required placeholder=\"API key\" name=\"editAPIKey\"> </div><div class=\"form-check form-group\"> <label class=\"form-check-label\" for=\"check1\"> <input type=\"checkbox\" class=\"form-check-input\" id=\"editEnabled\" name=\"editEnabled\" value=\"Enabled\">Enabled </label> </div><button type=\"button\" class=\"btn btn-danger float-left\" data-dismiss=\"modal\">Cancel</button> <button type=\"submit\" class=\"btn btn-primary float-right\">Save</button> </form> </div></div></div></div></div><script src=\"https://code.jquery.com/jquery-3.3.1.min.js\" integrity=\"sha384-tsQFqpEReu7ZLhBV2VZlAu7zcOV+rXbYlF2cqB8txI/8aZajjp4Bqd+V6D5IgvKT\" crossorigin=\"anonymous\"></script> <script src=\"https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js\" integrity=\"sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1\" crossorigin=\"anonymous\"></script> <script src=\"https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js\" integrity=\"sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM\" crossorigin=\"anonymous\"></script> <script src=\"js/jquery.confirmModal.min.js\"></script> <script src=\"js/printMonitorSettings.js\"></script></body></html>"

};

const char printMonitorSettings_js[] PROGMEM =
{

"function init(){if ($('#printMonitorEnabled').is(\":checked\")){$(\"#printMonitorForm\").show();}else{$(\"#printMonitorForm\").hide();}$(\"#printMonitorEnabled\").click(function(){if($(this).is(\":checked\")){$(\"#printMonitorForm\").show();}else{$(\"#printMonitorForm\").hide();}});}$(function (){$('.confirmDeletePrinter').click(function (e){var options={messageHeader: 'Delete?', modalVerticalCenter: true, backgroundBlur: ['#header_wrap, #main_content_wrap, #footer_wrap'], autoFocusOnConfirmBtn: false,}; e.preventDefault(); $tr=$(this).closest('tr'); $.confirmModal('Are you sure you want to delete this printer: ' + $('.display-name', $tr).text() + '?' + '<br>Deleting a printer will reset your display settings.', options, function (el){window.location.href=\"/deletePrinter.html?printerId=\" + $('.printer-id', $tr).text();});});});$(\".btn[data-target='#editPrinterModal']\").click(function(){var columnValues=$(this).parent().siblings().map(function(){return $(this).text();}).get(); $.get('getPrinter.html', 'printerId=' + columnValues[0], function(response){console.log(response); $('#editPrinterModal').find('#printerId').val(columnValues[0]); $('#editPrinterModal').find('#editDisplayName').val(response.displayName); $('#editPrinterModal').find('#editPrintUrl').val(response.address); $('#editPrinterModal').find('#editPort').val(response.port); $('#editPrinterModal').find('#editUsername').val(response.username); $('#editPrinterModal').find('#editPassword').val(response.password); $('#editPrinterModal').find('#editAPIKey').val(response.apiKey); $('#editPrinterModal').find('#editEnabled').prop('checked', response.enabled);}, \"json\" );});window.addEventListener(\"load\", init, false);"

};