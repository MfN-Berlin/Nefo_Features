<?php
/**
 * @file
 * nefo_calendar_events.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function nefo_calendar_events_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Politik',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '4a4b075b-1276-4092-9456-44e9bccbef5b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'event_types',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'events/politik',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Presse',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '55e2c902-3f62-45a6-b720-6e84feac2866',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'event_types',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'events/presse',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Forschung',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b49513d1-d8f8-4a89-b15e-124c31dc5b21',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'event_types',
    'path' => array(
      'pathauto' => 0,
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'events/forschung',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
