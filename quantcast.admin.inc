<?php

/**
 * @file
 * Admin callbacks for the Quantcast module.
 */

/**
 * Implementation of hook_admin_settings().
 */
function quantcast_admin_settings_form(&$form_state) {
  // General settings.
  $form['account'] = array(
    '#type'           => 'fieldset',
    '#title'          => t('General settings'),
  );
  $form['account']['quantcast_account'] = array(
    '#type'           => 'textfield',
    '#title'          => t('Quantcast P-Code'),
    '#default_value'  => variable_get('quantcast_account', ''),
    '#required'       => TRUE,
    '#description'    => t('If you do not already have a Quantcast P-Code, please acquire it by registering at <a href="@qc_url">Quantcast.com</a>.', array('@qc_url' => 'http://www.quantcast.com/user/signup')),
  );
  // Advanced settings.
  $form['advanced'] = array(
    '#type'           => 'fieldset',
    '#title'          => t('Advanced settings'),
    '#collapsible'    => TRUE,
    '#collapsed'      => TRUE,
  );
  $form['advanced']['quantcast_js_scope'] = array(
    '#type'           => 'select',
    '#title'          => t('Javascript Scope'),
    '#description'    => t('Quantcast recommends adding its Javascript code to the footer, right before &lt;/body&gt; tag and any other measurement tags. See <a href="@qc_implementation_guide_url">Web Measurement Implementation Guide</a> for more details.', array('@qc_implementation_guide_url' => 'http://www.quantcast.com/learning-center/guides/webmeasurement')),
    '#options'        => array(
      'header'          => t('Header'),
      'footer'          => t('Footer'),
    ),
    '#default_value'  => variable_get('quantcast_js_scope', 'footer'),
  );
  return system_settings_form($form);
}
