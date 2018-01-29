<?php
/**
 * @file
 * nefo_struktur.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nefo_struktur_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_document_section|node|nefo_product_document|form';
  $field_group->group_name = 'group_document_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nefo_product_document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dokument',
    'weight' => '1',
    'children' => array(
      0 => 'field_nefo_description',
      1 => 'field_nefo_product_document',
      2 => 'field_nefo_product_field_type',
      3 => 'field_nefo_product_icon',
      4 => 'field_nefo_product_link',
      5 => 'field_nefo_taxonomy_document',
      6 => 'field_nefo_taxonomy_tags',
      7 => 'field_workshop_reference',
      8 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-document-section field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_document_section|node|nefo_product_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_frontpage_section|node|nefo_product_document|form';
  $field_group->group_name = 'group_frontpage_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nefo_product_document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Titelseite',
    'weight' => '0',
    'children' => array(
      0 => 'field_nefo_slide_product_img',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-frontpage-section field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_frontpage_section|node|nefo_product_document|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dokument');
  t('Titelseite');

  return $field_groups;
}
