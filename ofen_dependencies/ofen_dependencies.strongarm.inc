<?php
/**
 * @file
 * ofen_dependencies.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ofen_dependencies_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontawesome_use_cdn';
  $strongarm->value = 0;
  $export['fontawesome_use_cdn'] = $strongarm;

  return $export;
}
