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
  $field_group->identifier = 'group_researcher_contact_details|profile2|researcher|default';
  $field_group->group_name = 'group_researcher_contact_details';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'researcher';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kontaktdaten',
    'weight' => '3',
    'children' => array(
      0 => 'field_researcher_personal_www',
      1 => 'field_researcher_email',
      2 => 'field_researcher_linkedin',
      3 => 'field_researcher_phone',
      4 => 'field_researcher_research_gate',
      5 => 'field_researcher_twitter',
      6 => 'field_researcher_xing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Kontaktdaten',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-researcher-contact-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_researcher_contact_details|profile2|researcher|default'] = $field_group;

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
    'label' => 'Kontaktdaten',
    'weight' => '3',
    'children' => array(
      0 => 'field_researcher_personal_www',
      1 => 'field_researcher_email',
      2 => 'field_researcher_linkedin',
      3 => 'field_researcher_phone',
      4 => 'field_researcher_research_gate',
      5 => 'field_researcher_twitter',
      6 => 'field_researcher_xing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Kontaktdaten',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-researcher-contact-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_researcher_contact_details|profile2|researcher|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_researcher_institution|profile2|researcher|default';
  $field_group->group_name = 'group_researcher_institution';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'researcher';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Institution',
    'weight' => '5',
    'children' => array(
      0 => 'field_researcher_www',
      1 => 'field_researcher_address',
      2 => 'field_researcher_institutio_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Institution',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-researcher-institution field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_researcher_institution|profile2|researcher|default'] = $field_group;

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
    'weight' => '5',
    'children' => array(
      0 => 'field_researcher_www',
      1 => 'field_researcher_address',
      2 => 'field_researcher_geofield',
      3 => 'field_researcher_institutio_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Institution',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-researcher-institution field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_researcher_institution|profile2|researcher|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_researcher_statements|profile2|researcher|default';
  $field_group->group_name = 'group_researcher_statements';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'researcher';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Statements',
    'weight' => '6',
    'children' => array(
      0 => 'field_researcher_statements',
      1 => 'field_researcher_deficit',
      2 => 'field_researcher_fascinated',
      3 => 'field_researcher_important',
      4 => 'field_researcher_interdiscipline',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Statements',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-researcher-statements field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_researcher_statements|profile2|researcher|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_researcher_statements|profile2|researcher|form';
  $field_group->group_name = 'group_researcher_statements';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'researcher';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Statements',
    'weight' => '6',
    'children' => array(
      0 => 'field_researcher_statements',
      1 => 'field_researcher_deficit',
      2 => 'field_researcher_fascinated',
      3 => 'field_researcher_important',
      4 => 'field_researcher_interdiscipline',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Statements',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-researcher-statements field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_researcher_statements|profile2|researcher|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_researcher_topics|profile2|researcher|default';
  $field_group->group_name = 'group_researcher_topics';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'researcher';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Forschung',
    'weight' => '4',
    'children' => array(
      0 => 'field_researcher_completed',
      1 => 'field_researcher_projects',
      2 => 'field_researcher_publications',
      3 => 'field_researcher_focus',
      4 => 'field_researcher_nefo_topics',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Forschung',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-researcher-topics field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_researcher_topics|profile2|researcher|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_researcher_topics|profile2|researcher|form';
  $field_group->group_name = 'group_researcher_topics';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'researcher';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Forschung',
    'weight' => '4',
    'children' => array(
      0 => 'field_researcher_completed',
      1 => 'field_researcher_projects',
      2 => 'field_researcher_publications',
      3 => 'field_researcher_focus',
      4 => 'field_researcher_nefo_topics',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Forschung',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-researcher-topics field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_researcher_topics|profile2|researcher|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Forschung');
  t('Institution');
  t('Kontaktdaten');
  t('Statements');

  return $field_groups;
}
