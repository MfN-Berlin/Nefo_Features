<?php
/**
 * @file
 * nefo_struktur.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nefo_struktur_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Hauptmenü',
    'description' => 'Das <em>Hauptmenü</em> wird oft benutzt, um die Hauptbereiche der Website anzuzeigen, häufig in einer Top-Navigationsleiste.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-nefo-login-menu.
  $menus['menu-nefo-login-menu'] = array(
    'menu_name' => 'menu-nefo-login-menu',
    'title' => 'NeFo Login Menu',
    'description' => 'Menü für Login / Logout.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-nefo-top-menu.
  $menus['menu-nefo-top-menu'] = array(
    'menu_name' => 'menu-nefo-top-menu',
    'title' => 'NeFo Top Menu',
    'description' => 'Menü für Dauerrubriken.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Das <em>Hauptmenü</em> wird oft benutzt, um die Hauptbereiche der Website anzuzeigen, häufig in einer Top-Navigationsleiste.');
  t('Hauptmenü');
  t('Menü für Dauerrubriken.');
  t('Menü für Login / Logout.');
  t('NeFo Login Menu');
  t('NeFo Top Menu');


  return $menus;
}
