<?php
/**
 * @file
 * nefo_struktur.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nefo_struktur_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['nefo_blocks_builder-nefo_feature_map'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'nefo_feature_map',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'nefo_blocks_builder',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ofen' => array(
        'region' => 'interviews',
        'status' => 1,
        'theme' => 'ofen',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
