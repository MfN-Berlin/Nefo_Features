<?php
/**
 * @file
 * shariff_social_sharing.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function shariff_social_sharing_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-blog-field_internal_link'.
  $field_instances['node-blog-field_internal_link'] = array(
    'bundle' => 'blog',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internal_link',
    'label' => 'Weitere NeFo-Beiträge zum Thema',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference_view_widget',
      'settings' => array(
        'allow_duplicates' => 0,
        'close_modal' => 1,
        'pass_argument' => 1,
        'pass_arguments' => '',
        'rendered_entity' => 0,
        'view' => 'nefo_entityreference_node_composite_title|entityreference_view_widget_1',
        'view_mode' => 'full',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Weitere NeFo-Beiträge zum Thema');

  return $field_instances;
}
