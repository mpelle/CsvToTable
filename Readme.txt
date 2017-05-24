------------------CSV To HTML Table-------------------------------------------------------------------------------------

Inorder to Display a CSV file on a page you must go to the module config page and enter in the file path to each csv file you would like to display. 

The php function CSVtotable() will convert your csv file to and HTML table with the CSS class name "CSVtable"



1. Go to admin/config/CsvtoTable/configuration

2. Place php code to display your csv files 


<?php
    module_load_include('inc', 'CSVtoTable', 'Csvtotable');
    CSVtotable(1);
?>

You can change the value in the CSVtoTable function to display any CSV you want 
For example:
CSVtotable(1); This will display the CSV file in location 1
CSVtotable(2); This will display the CSV file in location 2