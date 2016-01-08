<?php
/**
 * @file
 * researcher_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function researcher_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'view_researcher_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'view_researcher_profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Forscherprofil';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_researcher_fascinated' => 'field_researcher_fascinated',
    'field_researcher_deficit' => 'field_researcher_deficit',
  );
  /* Field: Profile: Name */
  $handler->display->display_options['fields']['field_researcher_name']['id'] = 'field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['table'] = 'field_data_field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['field'] = 'field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_name']['element_label_colon'] = FALSE;
  /* Field: Profile: Picture */
  $handler->display->display_options['fields']['field_researcher_picture']['id'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['table'] = 'field_data_field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['field'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_researcher_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Profile: Biodiversität fasziniert mich, ... */
  $handler->display->display_options['fields']['field_researcher_fascinated']['id'] = 'field_researcher_fascinated';
  $handler->display->display_options['fields']['field_researcher_fascinated']['table'] = 'field_data_field_researcher_fascinated';
  $handler->display->display_options['fields']['field_researcher_fascinated']['field'] = 'field_researcher_fascinated';
  $handler->display->display_options['fields']['field_researcher_fascinated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_fascinated']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_researcher_fascinated']['hide_empty'] = TRUE;
  /* Field: Profile: Defizit in der Biodiversitätspolitik */
  $handler->display->display_options['fields']['field_researcher_deficit']['id'] = 'field_researcher_deficit';
  $handler->display->display_options['fields']['field_researcher_deficit']['table'] = 'field_data_field_researcher_deficit';
  $handler->display->display_options['fields']['field_researcher_deficit']['field'] = 'field_researcher_deficit';
  $handler->display->display_options['fields']['field_researcher_deficit']['hide_empty'] = TRUE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'researcher' => 'researcher',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['view_researcher_profile'] = $view;

  return $export;
}
