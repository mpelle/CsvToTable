<?php

function CSVtotable($tablenum)

{

// Csv file locations
$csv1 = variable_get('CSV_file1');
$csv2 = variable_get('CSV_file2');
$csv3 = variable_get('CSV_file3');

switch($tablenum)
 {
 case 1:
 $file = $csv1;
 break;
 
 case 2:
 $file = $csv2;
 break;
 
 case 3:
 $file = $csv3;
 break;
}

//Read csv and display to html table

echo "<html><body><table class='CSVtable'>\n\n";
if(file_exists($file))
{
	$f = fopen($file, "r");
	
	while (($line = fgetcsv($f)) !== false)
	{
			echo "<tr>";
			foreach ($line as $cell) 
			{
				echo "<td>" . htmlspecialchars($cell) . "</td>";
			}
			echo "</tr>\n";
	}
 fclose($f);
 echo "\n</table></body></html>";
}
else 
{
echo "File not Found :(";
}

}

?>