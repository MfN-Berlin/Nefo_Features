<?php
/**
 * @file
 * researcher_profile.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function researcher_profile_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-researcher_contact'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'researcher_contact',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:1:{s:2:"id";s:24:"block-researcher-contact";}}',
    'pages' => 'forscherprofile',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nefo_omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'nefo_omega',
        'weight' => 0,
      ),
      'ofen' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'ofen',
        'weight' => -24,
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

  $export['block-researcher_signup'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'researcher_signup',
    'module' => 'block',
    'node_types' => array(),
    'options' => 'a:1:{s:10:"attributes";a:1:{s:2:"id";s:23:"block-researcher-signup";}}',
    'pages' => 'forscherprofile',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nefo_omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'nefo_omega',
        'weight' => 0,
      ),
      'ofen' => array(
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'ofen',
        'weight' => -23,
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
