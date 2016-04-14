<?php
/**
 * @file
 * nefo_menue_struktur.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nefo_menue_struktur_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-nefo-footer-menu-fifth'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-nefo-footer-menu-fifth',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nefo_omega' => array(
        'region' => 'nefo_footer_fifth',
        'status' => 1,
        'theme' => 'nefo_omega',
        'weight' => 0,
      ),
      'ofen' => array(
        'region' => 'footer_fifth',
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
    'title' => 'Schnittstellen',
    'visibility' => 0,
  );

  $export['menu-menu-nefo-footer-menu-first'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-nefo-footer-menu-first',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nefo_omega' => array(
        'region' => 'nefo_footer_first',
        'status' => 1,
        'theme' => 'nefo_omega',
        'weight' => 0,
      ),
      'ofen' => array(
        'region' => 'footer_first',
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
    'title' => 'NeFo',
    'visibility' => 0,
  );

  $export['menu-menu-nefo-footer-menu-fourth'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-nefo-footer-menu-fourth',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nefo_omega' => array(
        'region' => 'nefo_footer_fourth',
        'status' => 1,
        'theme' => 'nefo_omega',
        'weight' => 0,
      ),
      'ofen' => array(
        'region' => 'footer_fourth',
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
    'title' => 'Forschung',
    'visibility' => 0,
  );

  $export['menu-menu-nefo-footer-menu-second'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-nefo-footer-menu-second',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nefo_omega' => array(
        'region' => 'nefo_footer_second',
        'status' => 1,
        'theme' => 'nefo_omega',
        'weight' => 0,
      ),
      'ofen' => array(
        'region' => 'footer_second',
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
    'title' => 'Unsere Themen',
    'visibility' => 0,
  );

  $export['menu-menu-nefo-footer-menu-third'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-nefo-footer-menu-third',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nefo_omega' => array(
        'region' => 'nefo_footer_third',
        'status' => 1,
        'theme' => 'nefo_omega',
        'weight' => 0,
      ),
      'ofen' => array(
        'region' => 'footer_third',
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
    'title' => 'Politik',
    'visibility' => 0,
  );

  $export['menu-menu-nefo-login-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-nefo-login-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nefo_omega' => array(
        'region' => 'nefo_login',
        'status' => 1,
        'theme' => 'nefo_omega',
        'weight' => 0,
      ),
      'ofen' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'ofen',
        'weight' => -30,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-nefo-top-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-nefo-top-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
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
        'region' => 'header',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -6,
      ),
      'nefo_omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'nefo_omega',
        'weight' => -6,
      ),
      'ofen' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'ofen',
        'weight' => -28,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nefo_omega' => array(
        'region' => 'nefo_main_menu',
        'status' => 1,
        'theme' => 'nefo_omega',
        'weight' => 0,
      ),
      'ofen' => array(
        'region' => 'navigation',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['superfish-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'nefo_omega' => array(
        'region' => 'nefo_top_menu',
        'status' => 1,
        'theme' => 'nefo_omega',
        'weight' => -14,
      ),
      'ofen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ofen',
        'weight' => -27,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
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
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -8,
      ),
      'nefo_omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'nefo_omega',
        'weight' => -24,
      ),
      'ofen' => array(
        'region' => '',
        'status' => 0,
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
    'visibility' => 0,
  );

  return $export;
}
