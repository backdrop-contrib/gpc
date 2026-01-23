<?php
/**
 * @file
 * Admin settings forms for Global Privacy Control Visual Confirmation
 */


function gpc_config_form($form, &$form_state) {
  $config = config('gpc.settings');
  $form = array('#config' => 'gpc.settings');

  $form['position'] = array(
    '#type' => 'radios',
    '#title' => t('Banner Positioning'),
    '#description' => t('To use a block instead of a banner, select <em>No Banner</em>.'),
    '#default_value' => $config->get('position'),
    '#options' => array(
      'none' => t('No Banner'),
      'fixed-top' => t('Fixed at Top: Anchors the banner to the top of the browser window'),
      'fixed-bottom' => t('Fixed at Bottom: Anchors the banner to the bottom of the browser window'),
    ),
  );
  $form['background'] = array(
    '#type' => 'radios',
    '#title' => t('Banner background color'),
    '#default_value' => $config->get('background'),
    '#options' => array(
      'none' => t('None'),
      'dark' => t('Black'),
      'light' => t('White'),
    ),
  );
  $form['link'] = array(
    '#type' => 'radios',
    '#title' => t('Include Banner Download Link'),
    '#default_value' => $config->get('link'),
    '#options' => array(
      'nolink' => t('No'),
      'yeslink' => t('Yes'),
    ),
  );

  return system_settings_form($form);
}