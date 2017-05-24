<?php
function CSV_config_form($form, &$form_state)
{


	$form['CSVconfig'] = array(
				'#type' => 'fieldset',
				'#title' => t('CSV File locations'),
				'#collapsible' => FALSE,
			);

	$form['CSV_file1'] = array(
			'#type' => 'textfield',
			'#title' => t('Csv-1 file path'),
			'#default_value' => variable_get('CSV_file1'),
			'#description' => t('Your csv file location'),
		);
	$form['CSV_file2'] = array(
			'#type' => 'textfield',
			'#title' => t('Csv-2 file path'),
			'#default_value' => variable_get('CSV_file2'),
			'#description' => t('Your second csv file location'),
		);

	$form['CSV_file3'] = array(
			'#type' => 'textfield',
			'#title' => t('Csv-3 file path'),
			'#default_value' => variable_get('CSV_file3'),
			'#description' => t('Your third csv file location'),
		);

return system_settings_form($form);

}



?>