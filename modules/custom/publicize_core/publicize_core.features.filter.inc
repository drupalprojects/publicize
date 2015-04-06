<?php
/**
 * @file
 * publicize_core.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function publicize_core_filter_default_formats() {
  $formats = array();

  // Exported format: Site Building Text Format.
  $formats['site_building_text_format'] = array(
    'format' => 'site_building_text_format',
    'name' => 'Site Building Text Format',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
