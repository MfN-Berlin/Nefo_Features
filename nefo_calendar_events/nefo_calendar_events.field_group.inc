<?php
/**
 * @file
 * nefo_calendar_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nefo_calendar_events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advertising|node|nefo_event|form';
  $field_group->group_name = 'group_advertising';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nefo_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inhaltsbewerbung',
    'weight' => '2',
    'children' => array(
      0 => 'field_internal_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-advertising field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_advertising|node|nefo_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categorisation|node|nefo_event|form';
  $field_group->group_name = 'group_categorisation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nefo_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kategorisierung',
    'weight' => '1',
    'children' => array(
      0 => 'field_nefo_taxonomy_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-categorisation field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_categorisation|node|nefo_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|nefo_event|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nefo_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inhalt',
    'weight' => '0',
    'children' => array(
      0 => 'field_nefo_event_date',
      1 => 'field_nefo_event_desc',
      2 => 'field_nefo_event_type',
      3 => 'field_nefo_event_location',
      4 => 'title',
      5 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_content|node|nefo_event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Inhalt');
  t('Inhaltsbewerbung');
  t('Kategorisierung');

  return $field_groups;
}
