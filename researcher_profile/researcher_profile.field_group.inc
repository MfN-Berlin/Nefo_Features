<?php
/**
 * @file
 * researcher_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function researcher_profile_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_researcher_contact_details|profile2|researcher|form';
  $field_group->group_name = 'group_researcher_contact_details';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'researcher';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_reseacher_www',
      1 => 'field_researcher_linkedin',
      2 => 'field_researcher_research_gate',
      3 => 'field_researcher_twitter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-researcher-contact-details',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_researcher_contact_details|profile2|researcher|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_researcher_institution|profile2|researcher|form';
  $field_group->group_name = 'group_researcher_institution';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'researcher';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Institution',
    'weight' => '11',
    'children' => array(
      0 => 'field_researcher_www',
      1 => 'field_researcher_address',
      2 => 'field_researcher_geofield',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Institution',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-researcher-institution',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_researcher_institution|profile2|researcher|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Details');
  t('Institution');

  return $field_groups;
}
