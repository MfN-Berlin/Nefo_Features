<?php
/**
 * @file
 * ofen_dependencies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ofen_dependencies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
