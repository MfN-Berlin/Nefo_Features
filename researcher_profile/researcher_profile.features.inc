<?php
/**
 * @file
 * researcher_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function researcher_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function researcher_profile_default_profile2_type() {
  $items = array();
  $items['researcher'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "researcher",
    "label" : "Researcher",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
