<?php
/**
 * @file
 * feature_calendar_events.features.menu_links.inc
 */
	
/**
 * Implements hook_menu_default_menu_links().
 */
function feature_calendar_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_events:events
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Calendar of upcoming events',
      ),
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
 
  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('Home');


  return $menu_links;
}
