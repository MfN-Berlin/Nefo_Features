<?php
/**
 * @file
 * nefo_calendar_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nefo_calendar_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nefo_calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Kalender';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aktuelle Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'alle Events';
  $handler->display->display_options['link_display'] = 'nefo_events_all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Es liegen keine zukünftigen Termine vor.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Feldgruppe';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_nefo_event_location',
    1 => 'field_nefo_event_date',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'nefo-event--heading';
  /* Field: Beitrag: Datum */
  $handler->display->display_options['fields']['field_nefo_event_date']['id'] = 'field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['table'] = 'field_data_field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['field'] = 'field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['settings'] = array(
    'format_type' => 'nefo_date_type_din5008',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_nefo_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['delta_offset'] = '0';
  /* Field: Beitrag: Ort */
  $handler->display->display_options['fields']['field_nefo_event_location']['id'] = 'field_nefo_event_location';
  $handler->display->display_options['fields']['field_nefo_event_location']['table'] = 'field_data_field_nefo_event_location';
  $handler->display->display_options['fields']['field_nefo_event_location']['field'] = 'field_nefo_event_location';
  $handler->display->display_options['fields']['field_nefo_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_event_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_event_location']['alter']['text'] = '<span class="nefo-event--date">[field_nefo_event_date]</span>|<span class="nefo-event--location">[field_nefo_event_location]</span>';
  $handler->display->display_options['fields']['field_nefo_event_location']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_event_location']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_nefo_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_location']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'nefo-event--title';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Beitrag: Datum -  start date (field_nefo_event_date) */
  $handler->display->display_options['sorts']['field_nefo_event_date_value']['id'] = 'field_nefo_event_date_value';
  $handler->display->display_options['sorts']['field_nefo_event_date_value']['table'] = 'field_data_field_nefo_event_date';
  $handler->display->display_options['sorts']['field_nefo_event_date_value']['field'] = 'field_nefo_event_date_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'today';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_nefo_event_date.field_nefo_event_date_value' => 'field_data_field_nefo_event_date.field_nefo_event_date_value',
  );
  $handler->display->display_options['filters']['date_filter']['date_method'] = 'AND';

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'event_up_ical');
  $handler->display->display_options['display_description'] = 'Block der zukünftigen Events.';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Feldgruppe';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_nefo_event_location',
    1 => 'field_nefo_event_date',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'nefo-event--heading';
  /* Field: Beitrag: Ort */
  $handler->display->display_options['fields']['field_nefo_event_location']['id'] = 'field_nefo_event_location';
  $handler->display->display_options['fields']['field_nefo_event_location']['table'] = 'field_data_field_nefo_event_location';
  $handler->display->display_options['fields']['field_nefo_event_location']['field'] = 'field_nefo_event_location';
  $handler->display->display_options['fields']['field_nefo_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_event_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_event_location']['alter']['text'] = '|<span class="nefo-event--location">[field_nefo_event_location]</span>';
  $handler->display->display_options['fields']['field_nefo_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_location']['hide_empty'] = TRUE;
  /* Field: Beitrag: Datum */
  $handler->display->display_options['fields']['field_nefo_event_date']['id'] = 'field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['table'] = 'field_data_field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['field'] = 'field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_event_date']['alter']['text'] = '<span class="nefo-event--date">[field_nefo_event_date]</span>[field_nefo_event_location]';
  $handler->display->display_options['fields']['field_nefo_event_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_event_date']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_nefo_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['settings'] = array(
    'format_type' => 'nefo_date_type_din5008',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_nefo_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'nefo-event--title';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_workshop' => 'nefo_workshop',
    'nefo_event' => 'nefo_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_nefo_event_date.field_nefo_event_date_value' => 'field_data_field_nefo_event_date.field_nefo_event_date_value',
  );

  /* Display: Upcoming w/o ical */
  $handler = $view->new_display('block', 'Upcoming w/o ical', 'event_up');
  $handler->display->display_options['display_description'] = 'This upcoming block doesn\'t and an ical icon to the buttom';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Feldgruppe';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_nefo_event_location',
    1 => 'field_nefo_event_date',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'nefo-event--heading';
  /* Field: Beitrag: Ort */
  $handler->display->display_options['fields']['field_nefo_event_location']['id'] = 'field_nefo_event_location';
  $handler->display->display_options['fields']['field_nefo_event_location']['table'] = 'field_data_field_nefo_event_location';
  $handler->display->display_options['fields']['field_nefo_event_location']['field'] = 'field_nefo_event_location';
  $handler->display->display_options['fields']['field_nefo_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_event_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_event_location']['alter']['text'] = '|<span class="nefo-event--location">[field_nefo_event_location]</span>';
  $handler->display->display_options['fields']['field_nefo_event_location']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_nefo_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_location']['hide_empty'] = TRUE;
  /* Field: Beitrag: Datum */
  $handler->display->display_options['fields']['field_nefo_event_date']['id'] = 'field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['table'] = 'field_data_field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['field'] = 'field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_event_date']['alter']['text'] = '<span class="nefo-event--date">[field_nefo_event_date]</span>[field_nefo_event_location]';
  $handler->display->display_options['fields']['field_nefo_event_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_event_date']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_nefo_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['settings'] = array(
    'format_type' => 'nefo_date_type_din5008',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_nefo_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'nefo-event--title';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_workshop' => 'nefo_workshop',
    'nefo_event' => 'nefo_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_nefo_event_date.field_nefo_event_date_value' => 'field_data_field_nefo_event_date.field_nefo_event_date_value',
  );

  /* Display: iCal Feed */
  $handler = $view->new_display('feed', 'iCal Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = 'Nefo Kalender';
  $handler->display->display_options['row_plugin'] = 'date_ical';
  $handler->display->display_options['row_options']['date_field'] = 'field_data_field_nefo_event_date.field_nefo_event_date_value';
  $handler->display->display_options['row_options']['summary_field'] = 'default_title';
  $handler->display->display_options['row_options']['location_field'] = 'field_data_field_nefo_event_desc.field_nefo_event_desc';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_workshop' => 'nefo_workshop',
    'nefo_event' => 'nefo_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'today';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_nefo_event_date.field_nefo_event_date_value' => 'field_data_field_nefo_event_date.field_nefo_event_date_value',
  );
  $handler->display->display_options['filters']['date_filter']['date_method'] = 'AND';
  $handler->display->display_options['path'] = 'kalender/%/kalender.ics';
  $handler->display->display_options['displays'] = array(
    'event_up_ical' => 'event_up_ical',
    'default' => 0,
    'event_up' => 0,
    'page_events_month' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page' => 0,
    'nefo_events_all' => 0,
  );

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_events_month');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_nefo_event_date.field_nefo_event_date_value' => 'field_data_field_nefo_event_date.field_nefo_event_date_value',
  );
  $handler->display->display_options['path'] = 'kalender';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Kalender';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_nefo_event_date.field_nefo_event_date_value' => 'field_data_field_nefo_event_date.field_nefo_event_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-nefo-event-date/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_nefo_event_date.field_nefo_event_date_value' => 'field_data_field_nefo_event_date.field_nefo_event_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-nefo-event-date/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Beitrag: Datum */
  $handler->display->display_options['fields']['field_nefo_event_date']['id'] = 'field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['table'] = 'field_data_field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['field'] = 'field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_nefo_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_nefo_event_date.field_nefo_event_date_value' => 'field_data_field_nefo_event_date.field_nefo_event_date_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-nefo-event-date/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Events */
  $handler = $view->new_display('page', 'Events', 'nefo_events_all');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_nefo_event_date_1',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Datum - Month */
  $handler->display->display_options['fields']['field_nefo_event_date_1']['id'] = 'field_nefo_event_date_1';
  $handler->display->display_options['fields']['field_nefo_event_date_1']['table'] = 'field_data_field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date_1']['field'] = 'field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date_1']['ui_name'] = 'Datum - Month';
  $handler->display->display_options['fields']['field_nefo_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date_1']['settings'] = array(
    'format_type' => 'nefo_date_type_month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Beitrag: Datum */
  $handler->display->display_options['fields']['field_nefo_event_date']['id'] = 'field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['table'] = 'field_data_field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['field'] = 'field_nefo_event_date';
  $handler->display->display_options['fields']['field_nefo_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_event_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_event_date']['element_class'] = 'nefo-event--date';
  $handler->display->display_options['fields']['field_nefo_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['settings'] = array(
    'format_type' => 'nefo_date_type_din5008_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_nefo_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['delta_offset'] = '0';
  /* Field: Beitrag: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_event_desc']['id'] = 'field_nefo_event_desc';
  $handler->display->display_options['fields']['field_nefo_event_desc']['table'] = 'field_data_field_nefo_event_desc';
  $handler->display->display_options['fields']['field_nefo_event_desc']['field'] = 'field_nefo_event_desc';
  $handler->display->display_options['fields']['field_nefo_event_desc']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_event_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_event_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_desc']['element_default_classes'] = FALSE;
  /* Field: Beitrag: Themen */
  $handler->display->display_options['fields']['field_nefo_taxonomy_tags']['id'] = 'field_nefo_taxonomy_tags';
  $handler->display->display_options['fields']['field_nefo_taxonomy_tags']['table'] = 'field_data_field_nefo_taxonomy_tags';
  $handler->display->display_options['fields']['field_nefo_taxonomy_tags']['field'] = 'field_nefo_taxonomy_tags';
  $handler->display->display_options['fields']['field_nefo_taxonomy_tags']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_taxonomy_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_taxonomy_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_taxonomy_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_taxonomy_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nefo_taxonomy_tags']['delta_offset'] = '0';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Feldgruppe';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_nefo_event_type',
    1 => 'title',
    2 => 'field_nefo_event_location',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'nefo-event--content';
  /* Field: Beitrag: Kategorie */
  $handler->display->display_options['fields']['field_nefo_event_type']['id'] = 'field_nefo_event_type';
  $handler->display->display_options['fields']['field_nefo_event_type']['table'] = 'field_data_field_nefo_event_type';
  $handler->display->display_options['fields']['field_nefo_event_type']['field'] = 'field_nefo_event_type';
  $handler->display->display_options['fields']['field_nefo_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_event_type']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_event_type']['element_class'] = 'nefo-event--category';
  $handler->display->display_options['fields']['field_nefo_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_type']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nefo_event_type']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'nefo-event--title';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Beitrag: Ort */
  $handler->display->display_options['fields']['field_nefo_event_location']['id'] = 'field_nefo_event_location';
  $handler->display->display_options['fields']['field_nefo_event_location']['table'] = 'field_data_field_nefo_event_location';
  $handler->display->display_options['fields']['field_nefo_event_location']['field'] = 'field_nefo_event_location';
  $handler->display->display_options['fields']['field_nefo_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_event_location']['alter']['text'] = '<div class="nefo-event--heading">
<span class="nefo-event--date">[field_nefo_event_date]</span>|<span class="nefo-event--location">[field_nefo_event_location]</span>
</div>';
  $handler->display->display_options['fields']['field_nefo_event_location']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_nefo_event_location']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_event_location']['element_class'] = 'nefo-event--location';
  $handler->display->display_options['fields']['field_nefo_event_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_workshop' => 'nefo_workshop',
    'nefo_event' => 'nefo_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'today';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_nefo_event_date.field_nefo_event_date_value' => 'field_data_field_nefo_event_date.field_nefo_event_date_value',
  );
  $handler->display->display_options['filters']['date_filter']['date_method'] = 'AND';
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['group'] = 1;
  $handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator_id'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'datum';
  $handler->display->display_options['filters']['date_filter_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['date_filter_1']['granularity'] = 'month';
  $handler->display->display_options['filters']['date_filter_1']['year_range'] = '-0:+3';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'field_data_field_nefo_event_date.field_nefo_event_date_value' => 'field_data_field_nefo_event_date.field_nefo_event_date_value',
    'field_data_field_nefo_event_date.field_nefo_event_date_value2' => 'field_data_field_nefo_event_date.field_nefo_event_date_value2',
  );
  /* Filter criterion: Beitrag: Themen (field_nefo_taxonomy_tags) */
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['id'] = 'field_nefo_taxonomy_tags_tid';
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['table'] = 'field_data_field_nefo_taxonomy_tags';
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['field'] = 'field_nefo_taxonomy_tags_tid';
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['value'] = array(
    31 => '31',
    32 => '32',
    33 => '33',
    35 => '35',
    36 => '36',
    37 => '37',
    71 => '71',
    39 => '39',
    54 => '54',
    72 => '72',
    73 => '73',
    74 => '74',
  );
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['expose']['operator_id'] = 'field_nefo_taxonomy_tags_tid_op';
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['expose']['operator'] = 'field_nefo_taxonomy_tags_tid_op';
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['vocabulary'] = 'nefo_taxonomy_tags';
  $handler->display->display_options['filters']['field_nefo_taxonomy_tags_tid']['hierarchy'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'allwords';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'volltext';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_nefo_event_desc' => 'field_nefo_event_desc',
    'title' => 'title',
    'field_nefo_event_location' => 'field_nefo_event_location',
  );
  $handler->display->display_options['views_ef_fieldset']['enabled'] = TRUE;
  $handler->display->display_options['views_ef_fieldset']['options'] = array(
    'sort' => array(
      'root' => array(
        'weight' => '0',
        'type' => 'container',
        'id' => 'root',
        'pid' => '',
        'depth' => 0,
        'container_type' => 'fieldset',
        'title' => 'Filter',
        'description' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'collapsed_if_no_exposed_input' => 0,
      ),
      'container-2' => array(
        'weight' => '-11',
        'type' => 'container',
        'id' => 'container-2',
        'pid' => 'root',
        'depth' => 1,
        'container_type' => 'fieldset',
        'title' => 'Datum',
        'description' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'collapsed_if_no_exposed_input' => 0,
      ),
      'date_filter_1' => array(
        'weight' => '-11',
        'type' => 'filter',
        'id' => 'date_filter_1',
        'pid' => 'container-2',
        'depth' => 2,
      ),
      'container-3' => array(
        'weight' => '-10',
        'type' => 'container',
        'id' => 'container-3',
        'pid' => 'root',
        'depth' => 1,
        'container_type' => 'fieldset',
        'title' => 'Unsere Themen',
        'description' => '',
        'collapsible' => 1,
        'collapsed' => 1,
        'collapsed_if_no_exposed_input' => 0,
      ),
      'field_nefo_taxonomy_tags_tid' => array(
        'weight' => '-11',
        'type' => 'filter',
        'id' => 'field_nefo_taxonomy_tags_tid',
        'pid' => 'container-3',
        'depth' => 2,
      ),
      'container-4' => array(
        'weight' => '-9',
        'type' => 'container',
        'id' => 'container-4',
        'pid' => 'root',
        'depth' => 1,
        'container_type' => 'fieldset',
        'title' => 'Textsuche',
        'description' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'collapsed_if_no_exposed_input' => 0,
      ),
      'combine' => array(
        'weight' => '-11',
        'type' => 'filter',
        'id' => 'combine',
        'pid' => 'container-4',
        'depth' => 2,
      ),
      'container-5' => array(
        'weight' => '-8',
        'type' => 'container',
        'id' => 'container-5',
        'pid' => 'root',
        'depth' => 1,
        'container_type' => 'container',
        'title' => '',
        'description' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'collapsed_if_no_exposed_input' => 0,
      ),
      'submit' => array(
        'weight' => '-11',
        'type' => 'buttons',
        'id' => 'submit',
        'pid' => 'container-5',
        'depth' => 2,
      ),
      'reset' => array(
        'weight' => '-10',
        'type' => 'buttons',
        'id' => 'reset',
        'pid' => 'container-5',
        'depth' => 2,
      ),
      'container-6' => array(
        'weight' => '-5',
        'type' => 'container',
        'id' => 'container-6',
        'pid' => 'root',
        'depth' => 1,
        'container_type' => 'fieldset',
        'title' => 'Container 6',
        'description' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'collapsed_if_no_exposed_input' => 0,
      ),
    ),
  );
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['description'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_calendar'] = $view;

  return $export;
}
