<?php
/**
 * @file
 * researcher_profile.features.inc
 */

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
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
