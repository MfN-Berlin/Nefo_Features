<?php
/**
 * @file
 * nefo_calendar_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nefo_calendar_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nefo_calendar_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nefo_calendar_events_node_info() {
  $items = array(
    'nefo_event' => array(
      'name' => t('Termin'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
