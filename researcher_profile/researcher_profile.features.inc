<?php
/**
 * @file
 * researcher_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function researcher_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function researcher_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function researcher_profile_image_default_styles() {
  $styles = array();

  // Exported image style: img_style_researcher.
  $styles['img_style_researcher'] = array(
    'label' => 'Forscherprofil',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 180,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
