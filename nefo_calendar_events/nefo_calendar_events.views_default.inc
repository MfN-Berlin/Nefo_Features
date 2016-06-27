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
  $handler->display->display_options['title'] = 'Aktuelle Termine';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'alle Termine';
  $handler->display->display_options['link_display'] = 'nefo_events_all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
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
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Textbereich */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Es liegen keine zukünftigen Termine vor.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Global: Feldgruppe */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_nefo_event_date',
    1 => 'field_nefo_event_location',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'nefo-event--heading';
  /* Feld: Inhalt: Datum */
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
  /* Feld: Inhalt: Ort */
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
  /* Feld: Inhalt: Titel */
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
  /* Sortierkriterien: Inhalt: Datum -  Startdatum (field_nefo_event_date) */
  $handler->display->display_options['sorts']['field_nefo_event_date_value']['id'] = 'field_nefo_event_date_value';
  $handler->display->display_options['sorts']['field_nefo_event_date_value']['table'] = 'field_data_field_nefo_event_date';
  $handler->display->display_options['sorts']['field_nefo_event_date_value']['field'] = 'field_nefo_event_date_value';
  /* Kontextfilter: Inhalt: Beitrags-ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Datum: Datum (node) */
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Datum: Datum (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
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
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Global: Feldgruppe */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_nefo_event_date',
    1 => 'field_nefo_event_location',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'nefo-event--heading';
  /* Feld: Inhalt: Datum */
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
  /* Feld: Inhalt: Ort */
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
  /* Feld: Inhalt: Titel */
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
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Datum: Datum (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
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
  /* Kontextfilter: Inhalt: Beitrags-ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  /* Kontextfilter: Datum: Datum (node) */
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
  /* Kontextfilter: Datum: Datum (node) */
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
  /* Kontextfilter: Datum: Datum (node) */
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
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Feld: Inhalt: Datum */
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
  /* Kontextfilter: Datum: Datum (node) */
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

  /* Display: All Events */
  $handler = $view->new_display('page', 'All Events', 'nefo_events_all');
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
  /* Feld: Datum - Month */
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
  /* Feld: Inhalt: Datum */
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
    'format_type' => 'din_5008_numerisch',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_nefo_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_event_date']['delta_offset'] = '0';
  /* Feld: Global: Feldgruppe */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_nefo_event_type',
    1 => 'title',
    2 => 'field_nefo_event_location',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'nefo-event--content';
  /* Feld: Inhalt: Kategorie */
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
  /* Feld: Inhalt: Titel */
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
  /* Feld: Inhalt: Ort */
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
  $handler->display->display_options['path'] = 'events';
  $export['nefo_calendar'] = $view;

  return $export;
}
