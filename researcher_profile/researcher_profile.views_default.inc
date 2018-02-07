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
  $view->human_name = 'Forscherprofile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Forscherprofile';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'A-Z';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Z-A';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Erweiterte Optionen',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'sort' => array(
      'bef_format' => 'bef_toggle_links',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sortieroptionen',
        'combine' => 1,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'secondary_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_researcher_www' => 'field_researcher_www',
    'field_researcher_twitter' => 'field_researcher_twitter',
    'field_researcher_linkedin' => 'field_researcher_linkedin',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Feld: Profile: Name */
  $handler->display->display_options['fields']['field_researcher_name']['id'] = 'field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['table'] = 'field_data_field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['field'] = 'field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_researcher_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_researcher_name']['element_label_colon'] = FALSE;
  /* Feld: Profile: Picture */
  $handler->display->display_options['fields']['field_researcher_picture']['id'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['table'] = 'field_data_field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['field'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_researcher_picture']['element_class'] = 'researcher-img';
  $handler->display->display_options['fields']['field_researcher_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_researcher_picture']['settings'] = array(
    'image_style' => 'img_style_researcher',
    'image_link' => '',
  );
  /* Feld: Profile: Website */
  $handler->display->display_options['fields']['field_researcher_www']['id'] = 'field_researcher_www';
  $handler->display->display_options['fields']['field_researcher_www']['table'] = 'field_data_field_researcher_www';
  $handler->display->display_options['fields']['field_researcher_www']['field'] = 'field_researcher_www';
  $handler->display->display_options['fields']['field_researcher_www']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_www']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_www']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_www']['alter']['text'] = '<a href="[field_researcher_www-url]"><span class="fa fa-globe fa-lg"></span></a>';
  $handler->display->display_options['fields']['field_researcher_www']['alter']['link_class'] = 'fa fa-globe';
  $handler->display->display_options['fields']['field_researcher_www']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_www']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_www']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_researcher_www']['type'] = 'link_url';
  /* Feld: Beschädigte/fehlende Behandlungsroutine */
  $handler->display->display_options['fields']['field_reseacher_www']['id'] = 'field_reseacher_www';
  $handler->display->display_options['fields']['field_reseacher_www']['table'] = 'field_data_field_reseacher_www';
  $handler->display->display_options['fields']['field_reseacher_www']['field'] = 'field_reseacher_www';
  $handler->display->display_options['fields']['field_reseacher_www']['label'] = '';
  $handler->display->display_options['fields']['field_reseacher_www']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reseacher_www']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_reseacher_www']['alter']['text'] = '<a href="[field_reseacher_www-value]"><span class="fa fa-globe fa-lg"></span></a>';
  $handler->display->display_options['fields']['field_reseacher_www']['element_label_colon'] = FALSE;
  /* Feld: Profile: Twitter */
  $handler->display->display_options['fields']['field_researcher_twitter']['id'] = 'field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['table'] = 'field_data_field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['field'] = 'field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_twitter']['alter']['text'] = '<a href="[field_researcher_twitter-value]"><span class="fa fa-twitter fa-lg"></span></a>';
  $handler->display->display_options['fields']['field_researcher_twitter']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_twitter']['hide_empty'] = TRUE;
  /* Feld: Profile: Linked In */
  $handler->display->display_options['fields']['field_researcher_linkedin']['id'] = 'field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['table'] = 'field_data_field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['field'] = 'field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_linkedin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_linkedin']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_linkedin']['alter']['text'] = '<a href="[field_researcher_linkedin-value]"><span class="fa fa-linkedin fa-lg"></span></a>';
  $handler->display->display_options['fields']['field_researcher_linkedin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_linkedin']['element_label_colon'] = FALSE;
  /* Feld: Left Wrapper */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Left Wrapper';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="researcher-col1">
<div class="field-researcher-picture">[field_researcher_picture]</div>
<div class="field-researcher-www">[field_researcher_www]</div>
<div class="field-researcher-www">[field_reseacher_www]</div>
<div class="field-researcher-twitter">[field_researcher_twitter]</div>
<div class="field-researcher-linkedin">[field_researcher_linkedin]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Feld: Profile: Biodiversität fasziniert mich, ... */
  $handler->display->display_options['fields']['field_researcher_fascinated']['id'] = 'field_researcher_fascinated';
  $handler->display->display_options['fields']['field_researcher_fascinated']['table'] = 'field_data_field_researcher_fascinated';
  $handler->display->display_options['fields']['field_researcher_fascinated']['field'] = 'field_researcher_fascinated';
  $handler->display->display_options['fields']['field_researcher_fascinated']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_fascinated']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_fascinated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_fascinated']['element_wrapper_type'] = 'div';
  /* Feld: Profile: Biodiversität ist wichtig, ... */
  $handler->display->display_options['fields']['field_researcher_important']['id'] = 'field_researcher_important';
  $handler->display->display_options['fields']['field_researcher_important']['table'] = 'field_data_field_researcher_important';
  $handler->display->display_options['fields']['field_researcher_important']['field'] = 'field_researcher_important';
  $handler->display->display_options['fields']['field_researcher_important']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_important']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_important']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_important']['element_wrapper_type'] = 'div';
  /* Feld: Profile: Defizit in der Biodiversitätspolitik */
  $handler->display->display_options['fields']['field_researcher_deficit']['id'] = 'field_researcher_deficit';
  $handler->display->display_options['fields']['field_researcher_deficit']['table'] = 'field_data_field_researcher_deficit';
  $handler->display->display_options['fields']['field_researcher_deficit']['field'] = 'field_researcher_deficit';
  $handler->display->display_options['fields']['field_researcher_deficit']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_deficit']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_deficit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_deficit']['element_wrapper_type'] = 'div';
  /* Sortierkriterien: Profile: Name (field_researcher_name) */
  $handler->display->display_options['sorts']['field_researcher_name_value']['id'] = 'field_researcher_name_value';
  $handler->display->display_options['sorts']['field_researcher_name_value']['table'] = 'field_data_field_researcher_name';
  $handler->display->display_options['sorts']['field_researcher_name_value']['field'] = 'field_researcher_name_value';
  $handler->display->display_options['sorts']['field_researcher_name_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_researcher_name_value']['expose']['label'] = 'Sortieren';
  /* Filterkriterium: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'researcher' => 'researcher',
  );
  /* Filterkriterium: Global: Feld-Filter kombinieren */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'freetext-search';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Feld-Filter kombinieren';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_researcher_name' => 'field_researcher_name',
    'field_researcher_fascinated' => 'field_researcher_fascinated',
    'field_researcher_important' => 'field_researcher_important',
    'field_researcher_deficit' => 'field_researcher_deficit',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'forschung/forschungsakteure/personen';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Personen';
  $handler->display->display_options['menu']['description'] = 'Forscherprofile';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['view_researcher_profile'] = $view;

  return $export;
}
