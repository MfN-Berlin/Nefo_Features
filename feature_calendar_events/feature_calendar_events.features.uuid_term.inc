<?php
/**
 * @file
 * feature_calendar_events.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function feature_calendar_events_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'politik',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4a4b075b-1276-4092-9456-44e9bccbef5b',
    'vocabulary_machine_name' => 'event_types',
  );
  $terms[] = array(
    'name' => 'presse',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '55e2c902-3f62-45a6-b720-6e84feac2866',
    'vocabulary_machine_name' => 'event_types',
  );
  $terms[] = array(
    'name' => 'forschung',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b49513d1-d8f8-4a89-b15e-124c31dc5b21',
    'vocabulary_machine_name' => 'event_types',
  );
  return $terms;
}
