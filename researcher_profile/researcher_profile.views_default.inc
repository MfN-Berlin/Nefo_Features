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
  $view->name = 'nefo_block_team';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'NeFo-Block Team';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: UserID */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['ui_name'] = 'UserID';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Field: Profil: Profil ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['pid']['separator'] = '';
  /* Field: Name */
  $handler->display->display_options['fields']['field_researcher_name']['id'] = 'field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['table'] = 'field_data_field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['field'] = 'field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['ui_name'] = 'Name';
  $handler->display->display_options['fields']['field_researcher_name']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_name']['element_type'] = 'h1';
  $handler->display->display_options['fields']['field_researcher_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_name']['element_default_classes'] = FALSE;
  /* Field: Picture */
  $handler->display->display_options['fields']['field_researcher_picture']['id'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['table'] = 'field_data_field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['field'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['ui_name'] = 'Picture';
  $handler->display->display_options['fields']['field_researcher_picture']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_researcher_picture']['settings'] = array(
    'image_style' => 'img_style_researcher',
    'image_link' => '',
  );
  /* Field: Contact Phone */
  $handler->display->display_options['fields']['field_researcher_phone']['id'] = 'field_researcher_phone';
  $handler->display->display_options['fields']['field_researcher_phone']['table'] = 'field_data_field_researcher_phone';
  $handler->display->display_options['fields']['field_researcher_phone']['field'] = 'field_researcher_phone';
  $handler->display->display_options['fields']['field_researcher_phone']['ui_name'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_researcher_phone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_phone']['hide_empty'] = TRUE;
  /* Field: Contact Email */
  $handler->display->display_options['fields']['field_researcher_email']['id'] = 'field_researcher_email';
  $handler->display->display_options['fields']['field_researcher_email']['table'] = 'field_data_field_researcher_email';
  $handler->display->display_options['fields']['field_researcher_email']['field'] = 'field_researcher_email';
  $handler->display->display_options['fields']['field_researcher_email']['ui_name'] = 'Contact Email';
  $handler->display->display_options['fields']['field_researcher_email']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_email']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_email']['type'] = 'email_plain';
  /* Field: Contact Website */
  $handler->display->display_options['fields']['field_researcher_personal_www']['id'] = 'field_researcher_personal_www';
  $handler->display->display_options['fields']['field_researcher_personal_www']['table'] = 'field_data_field_researcher_personal_www';
  $handler->display->display_options['fields']['field_researcher_personal_www']['field'] = 'field_researcher_personal_www';
  $handler->display->display_options['fields']['field_researcher_personal_www']['ui_name'] = 'Contact Website';
  $handler->display->display_options['fields']['field_researcher_personal_www']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_personal_www']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_personal_www']['click_sort_column'] = 'url';
  /* Field: Contact Research gate */
  $handler->display->display_options['fields']['field_researcher_research_gate']['id'] = 'field_researcher_research_gate';
  $handler->display->display_options['fields']['field_researcher_research_gate']['table'] = 'field_data_field_researcher_research_gate';
  $handler->display->display_options['fields']['field_researcher_research_gate']['field'] = 'field_researcher_research_gate';
  $handler->display->display_options['fields']['field_researcher_research_gate']['ui_name'] = 'Contact Research gate';
  $handler->display->display_options['fields']['field_researcher_research_gate']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_research_gate']['hide_empty'] = TRUE;
  /* Field: Contact LinkedIn */
  $handler->display->display_options['fields']['field_researcher_linkedin']['id'] = 'field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['table'] = 'field_data_field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['field'] = 'field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['ui_name'] = 'Contact LinkedIn';
  $handler->display->display_options['fields']['field_researcher_linkedin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_linkedin']['hide_empty'] = TRUE;
  /* Field: Contact Twitter */
  $handler->display->display_options['fields']['field_researcher_twitter']['id'] = 'field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['table'] = 'field_data_field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['field'] = 'field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['ui_name'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_twitter']['hide_empty'] = TRUE;
  /* Field: Contact Xing */
  $handler->display->display_options['fields']['field_researcher_xing']['id'] = 'field_researcher_xing';
  $handler->display->display_options['fields']['field_researcher_xing']['table'] = 'field_data_field_researcher_xing';
  $handler->display->display_options['fields']['field_researcher_xing']['field'] = 'field_researcher_xing';
  $handler->display->display_options['fields']['field_researcher_xing']['ui_name'] = 'Contact Xing';
  $handler->display->display_options['fields']['field_researcher_xing']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_xing']['hide_empty'] = TRUE;
  /* Field: Research Focus */
  $handler->display->display_options['fields']['field_researcher_focus']['id'] = 'field_researcher_focus';
  $handler->display->display_options['fields']['field_researcher_focus']['table'] = 'field_data_field_researcher_focus';
  $handler->display->display_options['fields']['field_researcher_focus']['field'] = 'field_researcher_focus';
  $handler->display->display_options['fields']['field_researcher_focus']['ui_name'] = 'Research Focus';
  $handler->display->display_options['fields']['field_researcher_focus']['hide_empty'] = TRUE;
  /* Field: Research NeFo */
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['id'] = 'field_researcher_nefo_topics';
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['table'] = 'field_data_field_researcher_nefo_topics';
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['field'] = 'field_researcher_nefo_topics';
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['ui_name'] = 'Research NeFo';
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['hide_empty'] = TRUE;
  /* Field: Institution Name */
  $handler->display->display_options['fields']['field_researcher_institutio_name']['id'] = 'field_researcher_institutio_name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['table'] = 'field_data_field_researcher_institutio_name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['field'] = 'field_researcher_institutio_name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['ui_name'] = 'Institution Name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['hide_empty'] = TRUE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Contextual filter: Profile ID */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'profile';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['ui_name'] = 'Profile ID';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['pid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['pid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['pid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['pid']['validate']['type'] = 'numeric';
  /* Filter criterion: Profil: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'researcher' => 'researcher',
  );

  /* Display: Team */
  $handler = $view->new_display('block', 'Team', 'team');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_researcher_institutio_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'nefo-block-team-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profil: Profil ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['pid']['separator'] = '';
  /* Field: Institution Name */
  $handler->display->display_options['fields']['field_researcher_institutio_name']['id'] = 'field_researcher_institutio_name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['table'] = 'field_data_field_researcher_institutio_name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['field'] = 'field_researcher_institutio_name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['ui_name'] = 'Institution Name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_institutio_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_institutio_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_institutio_name']['hide_empty'] = TRUE;
  /* Field: Picture */
  $handler->display->display_options['fields']['field_researcher_picture']['id'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['table'] = 'field_data_field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['field'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['ui_name'] = 'Picture';
  $handler->display->display_options['fields']['field_researcher_picture']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_picture']['alter']['path'] = 'nefo/wer-wir-sind/[pid]';
  $handler->display->display_options['fields']['field_researcher_picture']['alter']['link_class'] = 'colorbox-node';
  $handler->display->display_options['fields']['field_researcher_picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_researcher_picture']['element_class'] = 'nefo-block-team-image';
  $handler->display->display_options['fields']['field_researcher_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_researcher_picture']['settings'] = array(
    'image_style' => 'img_style_researcher',
    'image_link' => '',
  );
  /* Field: Name */
  $handler->display->display_options['fields']['field_researcher_name']['id'] = 'field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['table'] = 'field_data_field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['field'] = 'field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['ui_name'] = 'Name';
  $handler->display->display_options['fields']['field_researcher_name']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_name']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_researcher_name']['element_class'] = 'nefo-block-team-name';
  $handler->display->display_options['fields']['field_researcher_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'nefo_block_team:sortteam';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profil: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'researcher' => 'researcher',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'user';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );

  /* Display: Sort Team Page */
  $handler = $view->new_display('page', 'Sort Team Page', 'sortteam');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
    'field_researcher_name' => 'field_researcher_name',
    'field_researcher_picture' => 'field_researcher_picture',
    'field_researcher_phone' => 'field_researcher_phone',
    'field_researcher_email' => 'field_researcher_email',
    'field_researcher_personal_www' => 'field_researcher_personal_www',
    'field_researcher_research_gate' => 'field_researcher_research_gate',
    'field_researcher_linkedin' => 'field_researcher_linkedin',
    'field_researcher_twitter' => 'field_researcher_twitter',
    'field_researcher_xing' => 'field_researcher_xing',
    'field_researcher_focus' => 'field_researcher_focus',
    'field_researcher_nefo_topics' => 'field_researcher_nefo_topics',
    'field_researcher_institutio_name' => 'field_researcher_institutio_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'pid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_researcher_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_researcher_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_researcher_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_researcher_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_researcher_personal_www' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_researcher_research_gate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_researcher_linkedin' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_researcher_twitter' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_researcher_xing' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_researcher_focus' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_researcher_nefo_topics' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_researcher_institutio_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profil: Profil ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['pid']['separator'] = '';
  /* Field: Draggableviews: Profil */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'profile';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Picture */
  $handler->display->display_options['fields']['field_researcher_picture']['id'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['table'] = 'field_data_field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['field'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['ui_name'] = 'Picture';
  $handler->display->display_options['fields']['field_researcher_picture']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_researcher_picture']['settings'] = array(
    'image_style' => 'img_style_researcher',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'nefo_block_team:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profil: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'researcher' => 'researcher',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'user';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['path'] = 'admin/content/sort/team';

  /* Display: Team Profile */
  $handler = $view->new_display('page', 'Team Profile', 'teamprofile');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-team-profile-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profil: Profil ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['pid']['separator'] = '';
  /* Field: Name */
  $handler->display->display_options['fields']['field_researcher_name']['id'] = 'field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['table'] = 'field_data_field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['field'] = 'field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['ui_name'] = 'Name';
  $handler->display->display_options['fields']['field_researcher_name']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_name']['element_type'] = 'h1';
  $handler->display->display_options['fields']['field_researcher_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_name']['type'] = 'text_plain';
  /* Field: Picture */
  $handler->display->display_options['fields']['field_researcher_picture']['id'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['table'] = 'field_data_field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['field'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['ui_name'] = 'Picture';
  $handler->display->display_options['fields']['field_researcher_picture']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_researcher_picture']['settings'] = array(
    'image_style' => 'img_style_researcher',
    'image_link' => '',
  );
  /* Field: Institution Name */
  $handler->display->display_options['fields']['field_researcher_institutio_name']['id'] = 'field_researcher_institutio_name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['table'] = 'field_data_field_researcher_institutio_name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['field'] = 'field_researcher_institutio_name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['ui_name'] = 'Institution Name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_institutio_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['hide_empty'] = TRUE;
  /* Field: Contact Email */
  $handler->display->display_options['fields']['field_researcher_email']['id'] = 'field_researcher_email';
  $handler->display->display_options['fields']['field_researcher_email']['table'] = 'field_data_field_researcher_email';
  $handler->display->display_options['fields']['field_researcher_email']['field'] = 'field_researcher_email';
  $handler->display->display_options['fields']['field_researcher_email']['ui_name'] = 'Contact Email';
  $handler->display->display_options['fields']['field_researcher_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_email']['alter']['text'] = '				<div class="nefo-team-profile-nefo-email">
					<span class="nefo-team-profile-field-label">E-Mail: </span>
					<span class="nefo-team-profile-field-content">
						[field_researcher_email]
					</span>
				</div>';
  $handler->display->display_options['fields']['field_researcher_email']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_email']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_email']['type'] = 'email_plain';
  /* Field: Contact Phone */
  $handler->display->display_options['fields']['field_researcher_phone']['id'] = 'field_researcher_phone';
  $handler->display->display_options['fields']['field_researcher_phone']['table'] = 'field_data_field_researcher_phone';
  $handler->display->display_options['fields']['field_researcher_phone']['field'] = 'field_researcher_phone';
  $handler->display->display_options['fields']['field_researcher_phone']['ui_name'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_researcher_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_phone']['alter']['text'] = '				<div class="nefo-team-profile-nefo-phone">
					<span class="nefo-team-profile-field-label">Telefon: </span>
					<span class="nefo-team-profile-field-content">
						[field_researcher_phone]
					</span>
				</div>';
  $handler->display->display_options['fields']['field_researcher_phone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_phone']['hide_empty'] = TRUE;
  /* Field: Contact Website */
  $handler->display->display_options['fields']['field_researcher_personal_www']['id'] = 'field_researcher_personal_www';
  $handler->display->display_options['fields']['field_researcher_personal_www']['table'] = 'field_data_field_researcher_personal_www';
  $handler->display->display_options['fields']['field_researcher_personal_www']['field'] = 'field_researcher_personal_www';
  $handler->display->display_options['fields']['field_researcher_personal_www']['ui_name'] = 'Contact Website';
  $handler->display->display_options['fields']['field_researcher_personal_www']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_personal_www']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_personal_www']['alter']['text'] = '				<div class="nefo-team-profile-nefo-website">
					<span class="nefo-team-profile-field-label">Website: </span>
					<span class="nefo-team-profile-field-content">
						[field_researcher_personal_www]
					</span>
				</div>';
  $handler->display->display_options['fields']['field_researcher_personal_www']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_personal_www']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_personal_www']['click_sort_column'] = 'url';
  /* Field: Contact Research gate */
  $handler->display->display_options['fields']['field_researcher_research_gate']['id'] = 'field_researcher_research_gate';
  $handler->display->display_options['fields']['field_researcher_research_gate']['table'] = 'field_data_field_researcher_research_gate';
  $handler->display->display_options['fields']['field_researcher_research_gate']['field'] = 'field_researcher_research_gate';
  $handler->display->display_options['fields']['field_researcher_research_gate']['ui_name'] = 'Contact Research gate';
  $handler->display->display_options['fields']['field_researcher_research_gate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_research_gate']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_research_gate']['alter']['text'] = '					<div class="nefo-team-profile-social-icon">
						<a href="[field_researcher_research_gate-url]" title="Research Gate"><span class="fa fa-globe fa-lg"></span></a>
					</div>';
  $handler->display->display_options['fields']['field_researcher_research_gate']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_research_gate']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_research_gate']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_researcher_research_gate']['group_column'] = 'value';
  /* Field: Contact LinkedIn */
  $handler->display->display_options['fields']['field_researcher_linkedin']['id'] = 'field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['table'] = 'field_data_field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['field'] = 'field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['ui_name'] = 'Contact LinkedIn';
  $handler->display->display_options['fields']['field_researcher_linkedin']['label'] = 'Linked In';
  $handler->display->display_options['fields']['field_researcher_linkedin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_linkedin']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_linkedin']['alter']['text'] = '					<div class="nefo-team-profile-social-icon">
						<a href="[field_researcher_linkedin-url]" title="LinkedIn"><span class="fa fa-linkedin fa-lg"></span></a>
					</div>	';
  $handler->display->display_options['fields']['field_researcher_linkedin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_linkedin']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_linkedin']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_researcher_linkedin']['group_column'] = 'value';
  /* Field: Contact Twitter */
  $handler->display->display_options['fields']['field_researcher_twitter']['id'] = 'field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['table'] = 'field_data_field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['field'] = 'field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['ui_name'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_twitter']['alter']['text'] = '					<div class="nefo-team-profile-social-icon" title="Twitter">
						<a href="[field_researcher_twitter-url]"><span class="fa fa-twitter fa-lg"></span></a>
					</div>';
  $handler->display->display_options['fields']['field_researcher_twitter']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_twitter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_twitter']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_researcher_twitter']['group_column'] = 'value';
  /* Field: Contact Xing */
  $handler->display->display_options['fields']['field_researcher_xing']['id'] = 'field_researcher_xing';
  $handler->display->display_options['fields']['field_researcher_xing']['table'] = 'field_data_field_researcher_xing';
  $handler->display->display_options['fields']['field_researcher_xing']['field'] = 'field_researcher_xing';
  $handler->display->display_options['fields']['field_researcher_xing']['ui_name'] = 'Contact Xing';
  $handler->display->display_options['fields']['field_researcher_xing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_xing']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_xing']['alter']['text'] = '					<div class="nefo-team-profile-social-icon" title="Xing">
						<a href="[field_researcher_xing-url]"><span class="fa fa-xing fa-lg"></span></a>
					</div>';
  $handler->display->display_options['fields']['field_researcher_xing']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_xing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_xing']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_researcher_xing']['group_column'] = 'value';
  /* Field: Research Focus */
  $handler->display->display_options['fields']['field_researcher_focus']['id'] = 'field_researcher_focus';
  $handler->display->display_options['fields']['field_researcher_focus']['table'] = 'field_data_field_researcher_focus';
  $handler->display->display_options['fields']['field_researcher_focus']['field'] = 'field_researcher_focus';
  $handler->display->display_options['fields']['field_researcher_focus']['ui_name'] = 'Research Focus';
  $handler->display->display_options['fields']['field_researcher_focus']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_focus']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_focus']['alter']['text'] = '				<div class="nefo-team-profile-focus">
					<span class="nefo-team-profile-field-label">Wissenschaftliche Schwerpunkte: </span>
					<div class="nefo-team-profile-field-content">
						[field_researcher_focus]
					</div>
				</div>';
  $handler->display->display_options['fields']['field_researcher_focus']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_focus']['hide_empty'] = TRUE;
  /* Field: Research NeFo */
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['id'] = 'field_researcher_nefo_topics';
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['table'] = 'field_data_field_researcher_nefo_topics';
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['field'] = 'field_researcher_nefo_topics';
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['ui_name'] = 'Research NeFo';
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['alter']['text'] = '				<div class="nefo-team-profile-nefo-topics">
					<span class="nefo-team-profile-field-label">Wissenschaftliche Schwerpunkte: </span>
					<div class="nefo-team-profile-field-content">
						[field_researcher_nefo_topics]
					</div>
				</div>	';
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['hide_empty'] = TRUE;
  /* Field: Wrapper */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Wrapper';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<article class="nefo-team-profile-teaser-popup-layout">
	<header class="nefo-team-profile-teaser-header-container">
		<h2 class="nefo-team-profile-teaser-title-smaller">
			[field_researcher_name]
		</h2>
	</header>
	<div class="nefo-team-profile-teaser-wrapper">
		<figure class="nefo-team-profile-teaser-image-container">
			[field_researcher_picture]
			<div class="nefo-team-profile-teaser-image-meta">
				[field_researcher_institutio_name]
			</div>
		</figure>
		<div class="nefo-team-profile-teaser-content-container">
			<div class="nefo-team-profile-teaser-synopsis">
				[field_researcher_email]
				[field_researcher_phone]
				[field_researcher_personal_www]
				<div class="nefo-team-profile-social">
					[field_researcher_research_gate]
                    [field_researcher_linkedin]
                    [field_researcher_twitter]
                    [field_researcher_xing]
				</div>
				[field_researcher_focus]
				[field_researcher_nefo_topics]
			</div>
		</div>
	</div>
</article>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Profile ID */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'profile';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['ui_name'] = 'Profile ID';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['pid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['pid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['pid']['validate']['type'] = 'numeric';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profil: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'researcher' => 'researcher',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'user';
  $handler->display->display_options['filters']['rid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['path'] = 'nefo/wer-wir-sind/%';
  $export['nefo_block_team'] = $view;

  $view = new view();
  $view->name = 'nefo_researcher_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'NeFo-Forscherprofil';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-researcher-profile-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Profil: Profil ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['pid']['separator'] = '';
  /* Field: Name */
  $handler->display->display_options['fields']['field_researcher_name']['id'] = 'field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['table'] = 'field_data_field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['field'] = 'field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['ui_name'] = 'Name';
  $handler->display->display_options['fields']['field_researcher_name']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_name']['element_type'] = 'h1';
  $handler->display->display_options['fields']['field_researcher_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_name']['element_default_classes'] = FALSE;
  /* Field: Picture */
  $handler->display->display_options['fields']['field_researcher_picture']['id'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['table'] = 'field_data_field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['field'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['ui_name'] = 'Picture';
  $handler->display->display_options['fields']['field_researcher_picture']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_researcher_picture']['settings'] = array(
    'image_style' => 'img_style_researcher',
    'image_link' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Kontaktdaten';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_researcher_phone',
    1 => 'field_researcher_email',
    2 => 'field_researcher_personal_www',
    3 => 'field_researcher_research_gate',
    4 => 'field_researcher_linkedin',
    5 => 'field_researcher_twitter',
    6 => 'field_researcher_xing',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'nefo-researcher-profile-contact-details-group';
  $handler->display->display_options['fields']['fieldset']['fieldset']['collapsible'] = 1;
  /* Field: Contact Phone */
  $handler->display->display_options['fields']['field_researcher_phone']['id'] = 'field_researcher_phone';
  $handler->display->display_options['fields']['field_researcher_phone']['table'] = 'field_data_field_researcher_phone';
  $handler->display->display_options['fields']['field_researcher_phone']['field'] = 'field_researcher_phone';
  $handler->display->display_options['fields']['field_researcher_phone']['ui_name'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_researcher_phone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_phone']['hide_empty'] = TRUE;
  /* Field: Contact Email */
  $handler->display->display_options['fields']['field_researcher_email']['id'] = 'field_researcher_email';
  $handler->display->display_options['fields']['field_researcher_email']['table'] = 'field_data_field_researcher_email';
  $handler->display->display_options['fields']['field_researcher_email']['field'] = 'field_researcher_email';
  $handler->display->display_options['fields']['field_researcher_email']['ui_name'] = 'Contact Email';
  $handler->display->display_options['fields']['field_researcher_email']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_email']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_email']['type'] = 'email_plain';
  /* Field: Contact Website */
  $handler->display->display_options['fields']['field_researcher_personal_www']['id'] = 'field_researcher_personal_www';
  $handler->display->display_options['fields']['field_researcher_personal_www']['table'] = 'field_data_field_researcher_personal_www';
  $handler->display->display_options['fields']['field_researcher_personal_www']['field'] = 'field_researcher_personal_www';
  $handler->display->display_options['fields']['field_researcher_personal_www']['ui_name'] = 'Contact Website';
  $handler->display->display_options['fields']['field_researcher_personal_www']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_personal_www']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_personal_www']['click_sort_column'] = 'url';
  /* Field: Contact Research gate */
  $handler->display->display_options['fields']['field_researcher_research_gate']['id'] = 'field_researcher_research_gate';
  $handler->display->display_options['fields']['field_researcher_research_gate']['table'] = 'field_data_field_researcher_research_gate';
  $handler->display->display_options['fields']['field_researcher_research_gate']['field'] = 'field_researcher_research_gate';
  $handler->display->display_options['fields']['field_researcher_research_gate']['ui_name'] = 'Contact Research gate';
  $handler->display->display_options['fields']['field_researcher_research_gate']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_research_gate']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_research_gate']['click_sort_column'] = 'url';
  /* Field: Contact LinkedIn */
  $handler->display->display_options['fields']['field_researcher_linkedin']['id'] = 'field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['table'] = 'field_data_field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['field'] = 'field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['ui_name'] = 'Contact LinkedIn';
  $handler->display->display_options['fields']['field_researcher_linkedin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_linkedin']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_linkedin']['click_sort_column'] = 'url';
  /* Field: Contact Twitter */
  $handler->display->display_options['fields']['field_researcher_twitter']['id'] = 'field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['table'] = 'field_data_field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['field'] = 'field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['ui_name'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_twitter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_twitter']['click_sort_column'] = 'url';
  /* Field: Contact Xing */
  $handler->display->display_options['fields']['field_researcher_xing']['id'] = 'field_researcher_xing';
  $handler->display->display_options['fields']['field_researcher_xing']['table'] = 'field_data_field_researcher_xing';
  $handler->display->display_options['fields']['field_researcher_xing']['field'] = 'field_researcher_xing';
  $handler->display->display_options['fields']['field_researcher_xing']['ui_name'] = 'Contact Xing';
  $handler->display->display_options['fields']['field_researcher_xing']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_xing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_xing']['click_sort_column'] = 'url';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Forschung';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_researcher_focus',
    1 => 'field_researcher_nefo_topics',
    2 => 'field_researcher_publications',
    3 => 'field_researcher_projects',
    4 => 'field_researcher_completed',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'nefo-researcher-profile-research-topics-group';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['collapsible'] = 1;
  /* Field: Research Focus */
  $handler->display->display_options['fields']['field_researcher_focus']['id'] = 'field_researcher_focus';
  $handler->display->display_options['fields']['field_researcher_focus']['table'] = 'field_data_field_researcher_focus';
  $handler->display->display_options['fields']['field_researcher_focus']['field'] = 'field_researcher_focus';
  $handler->display->display_options['fields']['field_researcher_focus']['ui_name'] = 'Research Focus';
  $handler->display->display_options['fields']['field_researcher_focus']['hide_empty'] = TRUE;
  /* Field: Research NeFo */
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['id'] = 'field_researcher_nefo_topics';
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['table'] = 'field_data_field_researcher_nefo_topics';
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['field'] = 'field_researcher_nefo_topics';
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['ui_name'] = 'Research NeFo';
  $handler->display->display_options['fields']['field_researcher_nefo_topics']['hide_empty'] = TRUE;
  /* Field: Research Recent Publications */
  $handler->display->display_options['fields']['field_researcher_publications']['id'] = 'field_researcher_publications';
  $handler->display->display_options['fields']['field_researcher_publications']['table'] = 'field_data_field_researcher_publications';
  $handler->display->display_options['fields']['field_researcher_publications']['field'] = 'field_researcher_publications';
  $handler->display->display_options['fields']['field_researcher_publications']['ui_name'] = 'Research Recent Publications';
  $handler->display->display_options['fields']['field_researcher_publications']['label'] = 'Aktuelle Publikationen';
  $handler->display->display_options['fields']['field_researcher_publications']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_publications']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_researcher_publications']['multi_type'] = 'ul';
  /* Field: Research Current Projects */
  $handler->display->display_options['fields']['field_researcher_projects']['id'] = 'field_researcher_projects';
  $handler->display->display_options['fields']['field_researcher_projects']['table'] = 'field_data_field_researcher_projects';
  $handler->display->display_options['fields']['field_researcher_projects']['field'] = 'field_researcher_projects';
  $handler->display->display_options['fields']['field_researcher_projects']['ui_name'] = 'Research Current Projects';
  $handler->display->display_options['fields']['field_researcher_projects']['label'] = 'Laufende Projekte';
  $handler->display->display_options['fields']['field_researcher_projects']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_projects']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_researcher_projects']['multi_type'] = 'ul';
  /* Field: Research Completed Projects */
  $handler->display->display_options['fields']['field_researcher_completed']['id'] = 'field_researcher_completed';
  $handler->display->display_options['fields']['field_researcher_completed']['table'] = 'field_data_field_researcher_completed';
  $handler->display->display_options['fields']['field_researcher_completed']['field'] = 'field_researcher_completed';
  $handler->display->display_options['fields']['field_researcher_completed']['ui_name'] = 'Research Completed Projects';
  $handler->display->display_options['fields']['field_researcher_completed']['label'] = 'Abgeschlossene Projekte';
  $handler->display->display_options['fields']['field_researcher_completed']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_completed']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_researcher_completed']['multi_type'] = 'ul';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Institution';
  $handler->display->display_options['fields']['fieldset_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'field_researcher_institutio_name',
    1 => 'field_researcher_www',
    2 => 'field_researcher_address',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'nefo-researcher-profile-institution-group';
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['collapsible'] = 1;
  /* Field: Institution Name */
  $handler->display->display_options['fields']['field_researcher_institutio_name']['id'] = 'field_researcher_institutio_name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['table'] = 'field_data_field_researcher_institutio_name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['field'] = 'field_researcher_institutio_name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['ui_name'] = 'Institution Name';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_institutio_name']['hide_empty'] = TRUE;
  /* Field: Institution Website */
  $handler->display->display_options['fields']['field_researcher_www']['id'] = 'field_researcher_www';
  $handler->display->display_options['fields']['field_researcher_www']['table'] = 'field_data_field_researcher_www';
  $handler->display->display_options['fields']['field_researcher_www']['field'] = 'field_researcher_www';
  $handler->display->display_options['fields']['field_researcher_www']['ui_name'] = 'Institution Website';
  $handler->display->display_options['fields']['field_researcher_www']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_www']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_www']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_www']['click_sort_column'] = 'url';
  /* Field: Institution Address */
  $handler->display->display_options['fields']['field_researcher_address']['id'] = 'field_researcher_address';
  $handler->display->display_options['fields']['field_researcher_address']['table'] = 'field_data_field_researcher_address';
  $handler->display->display_options['fields']['field_researcher_address']['field'] = 'field_researcher_address';
  $handler->display->display_options['fields']['field_researcher_address']['ui_name'] = 'Institution Address';
  $handler->display->display_options['fields']['field_researcher_address']['label'] = 'Adresse';
  $handler->display->display_options['fields']['field_researcher_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_address']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_researcher_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'Statements';
  $handler->display->display_options['fields']['fieldset_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_researcher_statements',
    1 => 'field_researcher_fascinated',
    2 => 'field_researcher_important',
    3 => 'field_researcher_deficit',
    4 => 'field_researcher_interdiscipline',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['classes'] = 'nefo-researcher-profile-statements-group';
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['collapsible'] = 1;
  /* Field: Statements Statement */
  $handler->display->display_options['fields']['field_researcher_statements']['id'] = 'field_researcher_statements';
  $handler->display->display_options['fields']['field_researcher_statements']['table'] = 'field_data_field_researcher_statements';
  $handler->display->display_options['fields']['field_researcher_statements']['field'] = 'field_researcher_statements';
  $handler->display->display_options['fields']['field_researcher_statements']['ui_name'] = 'Statements Statement';
  $handler->display->display_options['fields']['field_researcher_statements']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_statements']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_researcher_statements']['multi_type'] = 'ul';
  /* Field: Statements Fascinated */
  $handler->display->display_options['fields']['field_researcher_fascinated']['id'] = 'field_researcher_fascinated';
  $handler->display->display_options['fields']['field_researcher_fascinated']['table'] = 'field_data_field_researcher_fascinated';
  $handler->display->display_options['fields']['field_researcher_fascinated']['field'] = 'field_researcher_fascinated';
  $handler->display->display_options['fields']['field_researcher_fascinated']['ui_name'] = 'Statements Fascinated';
  $handler->display->display_options['fields']['field_researcher_fascinated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_fascinated']['hide_empty'] = TRUE;
  /* Field: Statements Important */
  $handler->display->display_options['fields']['field_researcher_important']['id'] = 'field_researcher_important';
  $handler->display->display_options['fields']['field_researcher_important']['table'] = 'field_data_field_researcher_important';
  $handler->display->display_options['fields']['field_researcher_important']['field'] = 'field_researcher_important';
  $handler->display->display_options['fields']['field_researcher_important']['ui_name'] = 'Statements Important';
  $handler->display->display_options['fields']['field_researcher_important']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_important']['hide_empty'] = TRUE;
  /* Field: Statements Interdiscipline */
  $handler->display->display_options['fields']['field_researcher_deficit']['id'] = 'field_researcher_deficit';
  $handler->display->display_options['fields']['field_researcher_deficit']['table'] = 'field_data_field_researcher_deficit';
  $handler->display->display_options['fields']['field_researcher_deficit']['field'] = 'field_researcher_deficit';
  $handler->display->display_options['fields']['field_researcher_deficit']['ui_name'] = 'Statements Interdiscipline';
  $handler->display->display_options['fields']['field_researcher_deficit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_deficit']['hide_empty'] = TRUE;
  /* Field: Statements Deficit */
  $handler->display->display_options['fields']['field_researcher_interdiscipline']['id'] = 'field_researcher_interdiscipline';
  $handler->display->display_options['fields']['field_researcher_interdiscipline']['table'] = 'field_data_field_researcher_interdiscipline';
  $handler->display->display_options['fields']['field_researcher_interdiscipline']['field'] = 'field_researcher_interdiscipline';
  $handler->display->display_options['fields']['field_researcher_interdiscipline']['ui_name'] = 'Statements Deficit';
  $handler->display->display_options['fields']['field_researcher_interdiscipline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_interdiscipline']['hide_empty'] = TRUE;
  /* Contextual filter: Profile ID */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'profile';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['ui_name'] = 'Profile ID';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['pid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['pid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['pid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['pid']['validate']['type'] = 'numeric';
  /* Filter criterion: Profil: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'researcher' => 'researcher',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'forschung/forschungsakteure/personen/%';
  $export['nefo_researcher_profile'] = $view;

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
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'A-Z';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Z-A';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Wählen Sie eine beliebige Filter und klicken Sie auf Anwenden, um Ergebnisse zu sehen',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Erweiterte Optionen',
      'secondary_collapse_override' => '0',
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
        'autosubmit' => 0,
      ),
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
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
  /* Field: Profil: Profil ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['pid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['pid']['separator'] = '';
  /* Field: Profil: Name */
  $handler->display->display_options['fields']['field_researcher_name']['id'] = 'field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['table'] = 'field_data_field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['field'] = 'field_researcher_name';
  $handler->display->display_options['fields']['field_researcher_name']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_name']['alter']['path'] = 'forschung/forschungsakteure/personen/[pid]';
  $handler->display->display_options['fields']['field_researcher_name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_researcher_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_researcher_name']['element_label_colon'] = FALSE;
  /* Field: Profil: Picture */
  $handler->display->display_options['fields']['field_researcher_picture']['id'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['table'] = 'field_data_field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['field'] = 'field_researcher_picture';
  $handler->display->display_options['fields']['field_researcher_picture']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_picture']['alter']['path'] = 'forschung/forschungsakteure/personen/[pid]';
  $handler->display->display_options['fields']['field_researcher_picture']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_researcher_picture']['element_class'] = 'researcher-img';
  $handler->display->display_options['fields']['field_researcher_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_researcher_picture']['settings'] = array(
    'image_style' => 'img_style_researcher',
    'image_link' => '',
  );
  /* Field: Profil: Website */
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
  /* Field: Profil: Twitter */
  $handler->display->display_options['fields']['field_researcher_twitter']['id'] = 'field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['table'] = 'field_data_field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['field'] = 'field_researcher_twitter';
  $handler->display->display_options['fields']['field_researcher_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_twitter']['alter']['text'] = '<a href="[field_researcher_twitter-url]"><span class="fa fa-twitter fa-lg"></span></a>';
  $handler->display->display_options['fields']['field_researcher_twitter']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_twitter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_twitter']['click_sort_column'] = 'url';
  /* Field: Profil: LinkedIn */
  $handler->display->display_options['fields']['field_researcher_linkedin']['id'] = 'field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['table'] = 'field_data_field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['field'] = 'field_researcher_linkedin';
  $handler->display->display_options['fields']['field_researcher_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_linkedin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_linkedin']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_linkedin']['alter']['text'] = '<a href="[field_researcher_linkedin-url]"><span class="fa fa-linkedin fa-lg"></span></a>';
  $handler->display->display_options['fields']['field_researcher_linkedin']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_linkedin']['click_sort_column'] = 'url';
  /* Field: Profil: Xing */
  $handler->display->display_options['fields']['field_researcher_xing']['id'] = 'field_researcher_xing';
  $handler->display->display_options['fields']['field_researcher_xing']['table'] = 'field_data_field_researcher_xing';
  $handler->display->display_options['fields']['field_researcher_xing']['field'] = 'field_researcher_xing';
  $handler->display->display_options['fields']['field_researcher_xing']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_xing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_xing']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_xing']['alter']['text'] = '<a href="[field_researcher_xing-url]"><span class="fa fa-xing fa-lg"></span></a>';
  $handler->display->display_options['fields']['field_researcher_xing']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_xing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_xing']['click_sort_column'] = 'url';
  /* Field: Left Wrapper */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Left Wrapper';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="researcher-col1">
<div class="field-researcher-picture">[field_researcher_picture]</div>
<div class="field-researcher-www">[field_researcher_www]</div>
<div class="field-researcher-twitter">[field_researcher_twitter]</div>
<div class="field-researcher-linkedin">[field_researcher_linkedin]</div>
<div class="field-researcher-xing">[field_researcher_xing]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Profil: Biodiversität fasziniert mich, ... */
  $handler->display->display_options['fields']['field_researcher_fascinated']['id'] = 'field_researcher_fascinated';
  $handler->display->display_options['fields']['field_researcher_fascinated']['table'] = 'field_data_field_researcher_fascinated';
  $handler->display->display_options['fields']['field_researcher_fascinated']['field'] = 'field_researcher_fascinated';
  $handler->display->display_options['fields']['field_researcher_fascinated']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_fascinated']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_fascinated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_fascinated']['element_wrapper_type'] = 'div';
  /* Field: Profil: Biodiversität ist wichtig, ... */
  $handler->display->display_options['fields']['field_researcher_important']['id'] = 'field_researcher_important';
  $handler->display->display_options['fields']['field_researcher_important']['table'] = 'field_data_field_researcher_important';
  $handler->display->display_options['fields']['field_researcher_important']['field'] = 'field_researcher_important';
  $handler->display->display_options['fields']['field_researcher_important']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_important']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_important']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_important']['element_wrapper_type'] = 'div';
  /* Field: Profil: Defizit in der Biodiversitätspolitik */
  $handler->display->display_options['fields']['field_researcher_deficit']['id'] = 'field_researcher_deficit';
  $handler->display->display_options['fields']['field_researcher_deficit']['table'] = 'field_data_field_researcher_deficit';
  $handler->display->display_options['fields']['field_researcher_deficit']['field'] = 'field_researcher_deficit';
  $handler->display->display_options['fields']['field_researcher_deficit']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_deficit']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_researcher_deficit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_deficit']['element_wrapper_type'] = 'div';
  /* Sort criterion: Profil: Name (field_researcher_name) */
  $handler->display->display_options['sorts']['field_researcher_name_value']['id'] = 'field_researcher_name_value';
  $handler->display->display_options['sorts']['field_researcher_name_value']['table'] = 'field_data_field_researcher_name';
  $handler->display->display_options['sorts']['field_researcher_name_value']['field'] = 'field_researcher_name_value';
  $handler->display->display_options['sorts']['field_researcher_name_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_researcher_name_value']['expose']['label'] = 'Sortieren';
  /* Filter criterion: Profil: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'researcher' => 'researcher',
  );
  /* Filter criterion: Global: Combine fields filter */
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
    8 => 0,
    6 => 0,
    7 => 0,
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
  $handler->display->display_options['views_ef_fieldset']['options'] = array(
    'sort' => array(
      'root' => array(
        'weight' => '0',
        'type' => 'container',
        'id' => 'root',
        'pid' => '',
        'depth' => 0,
        'container_type' => 'fieldset',
        'title' => 'Filterkriterien',
        'description' => '',
        'collapsible' => 1,
        'collapsed' => 1,
        'collapsed_if_no_exposed_input' => 0,
      ),
      'combine' => array(
        'weight' => '-7',
        'type' => 'filter',
        'id' => 'combine',
        'pid' => 'root',
        'depth' => 1,
      ),
      'sort_by' => array(
        'weight' => '-6',
        'type' => 'sort',
        'id' => 'sort_by',
        'pid' => 'root',
        'depth' => 1,
      ),
      'reset' => array(
        'weight' => '-5',
        'type' => 'buttons',
        'id' => 'reset',
        'pid' => 'root',
        'depth' => 1,
      ),
      'sort_order' => array(
        'weight' => '-5',
        'type' => 'sort',
        'id' => 'sort_order',
        'pid' => 'root',
        'depth' => 1,
      ),
      'submit' => array(
        'weight' => '-4',
        'type' => 'buttons',
        'id' => 'submit',
        'pid' => 'root',
        'depth' => 1,
      ),
      'container-1' => array(
        'weight' => '1',
        'type' => 'container',
        'id' => 'container-1',
        'pid' => 'root',
        'depth' => 1,
        'container_type' => 'fieldset',
        'title' => 'Container 1',
        'description' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'collapsed_if_no_exposed_input' => 0,
      ),
      'container-2' => array(
        'weight' => '2',
        'type' => 'container',
        'id' => 'container-2',
        'pid' => 'root',
        'depth' => 1,
        'container_type' => 'fieldset',
        'title' => 'Container 2',
        'description' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'collapsed_if_no_exposed_input' => 0,
      ),
      'container-3' => array(
        'weight' => '3',
        'type' => 'container',
        'id' => 'container-3',
        'pid' => 'root',
        'depth' => 1,
        'container_type' => 'fieldset',
        'title' => 'Container 3',
        'description' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'collapsed_if_no_exposed_input' => 0,
      ),
      'container-4' => array(
        'weight' => '4',
        'type' => 'container',
        'id' => 'container-4',
        'pid' => 'root',
        'depth' => 1,
        'container_type' => 'fieldset',
        'title' => 'Container 4',
        'description' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'collapsed_if_no_exposed_input' => 0,
      ),
      'container-5' => array(
        'weight' => '5',
        'type' => 'container',
        'id' => 'container-5',
        'pid' => 'root',
        'depth' => 1,
        'container_type' => 'fieldset',
        'title' => 'Container 5',
        'description' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'collapsed_if_no_exposed_input' => 0,
      ),
    ),
  );
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
