<?php
/**
 * @file
 * nefo_menue_struktur.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nefo_menue_struktur_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Hauptmenü',
    'description' => 'Das <em>Hauptmenü</em> wird oft benutzt, um die Hauptbereiche der Website anzuzeigen, häufig in einer Top-Navigationsleiste.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'Das <em>Management-Menü</em> enthält Links für administrative Aufgaben.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-nefo-footer-menu-fifth.
  $menus['menu-nefo-footer-menu-fifth'] = array(
    'menu_name' => 'menu-nefo-footer-menu-fifth',
    'title' => 'NeFo Footer Menu Fifth',
    'description' => 'Menü für die Rubrik Schnittstellen.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-nefo-footer-menu-first.
  $menus['menu-nefo-footer-menu-first'] = array(
    'menu_name' => 'menu-nefo-footer-menu-first',
    'title' => 'NeFo Footer Menu First',
    'description' => 'Menü für die Rubrik NeFo.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-nefo-footer-menu-fourth.
  $menus['menu-nefo-footer-menu-fourth'] = array(
    'menu_name' => 'menu-nefo-footer-menu-fourth',
    'title' => 'NeFo Footer Menu Fourth',
    'description' => 'Menü für die Rubrik Forschung.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-nefo-footer-menu-second.
  $menus['menu-nefo-footer-menu-second'] = array(
    'menu_name' => 'menu-nefo-footer-menu-second',
    'title' => 'NeFo Footer Menu Second',
    'description' => 'Menü für die Rubrik Themen.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-nefo-footer-menu-third.
  $menus['menu-nefo-footer-menu-third'] = array(
    'menu_name' => 'menu-nefo-footer-menu-third',
    'title' => 'NeFo Footer Menu Third',
    'description' => 'Menü für die Rubrik Politik.',
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
  t('Das <em>Management-Menü</em> enthält Links für administrative Aufgaben.');
  t('Hauptmenü');
  t('Management');
  t('Menü für Dauerrubriken.');
  t('Menü für Login / Logout.');
  t('Menü für die Rubrik Forschung.');
  t('Menü für die Rubrik NeFo.');
  t('Menü für die Rubrik Politik.');
  t('Menü für die Rubrik Schnittstellen.');
  t('Menü für die Rubrik Themen.');
  t('NeFo Footer Menu Fifth');
  t('NeFo Footer Menu First');
  t('NeFo Footer Menu Fourth');
  t('NeFo Footer Menu Second');
  t('NeFo Footer Menu Third');
  t('NeFo Login Menu');
  t('NeFo Top Menu');

  return $menus;
}
