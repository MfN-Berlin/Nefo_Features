<?php
/**
 * @file
 * nefo_struktur.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nefo_struktur_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nefo_block_current_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block Current Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aktuelle Produkte';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-block-current-products-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Beitrag: Kategorie (field_nefo_taxonomy_document) */
  $handler->display->display_options['relationships']['field_nefo_taxonomy_document_tid']['id'] = 'field_nefo_taxonomy_document_tid';
  $handler->display->display_options['relationships']['field_nefo_taxonomy_document_tid']['table'] = 'field_data_field_nefo_taxonomy_document';
  $handler->display->display_options['relationships']['field_nefo_taxonomy_document_tid']['field'] = 'field_nefo_taxonomy_document_tid';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_nefo_taxonomy_document_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'nefo-block-current-products-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: NeFo-Artikel: Titelbild */
  $handler->display->display_options['fields']['field_nefo_article_img']['id'] = 'field_nefo_article_img';
  $handler->display->display_options['fields']['field_nefo_article_img']['table'] = 'field_data_field_nefo_article_img';
  $handler->display->display_options['fields']['field_nefo_article_img']['field'] = 'field_nefo_article_img';
  $handler->display->display_options['fields']['field_nefo_article_img']['ui_name'] = 'NeFo-Artikel: Titelbild';
  $handler->display->display_options['fields']['field_nefo_article_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_article_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_article_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_article_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_article_img']['settings'] = array(
    'image_style' => 'image_style_nefo_frontpage_block',
    'image_link' => 'content',
  );
  /* Field: NeFo-Dokument: Titelbild */
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['id'] = 'field_nefo_slide_product_img';
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['table'] = 'field_data_field_nefo_slide_product_img';
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['field'] = 'field_nefo_slide_product_img';
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['ui_name'] = 'NeFo-Dokument: Titelbild';
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['element_class'] = 'nefo-block-current-products-img';
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['empty'] = '[field_nefo_article_img]';
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['settings'] = array(
    'image_style' => 'image_style_nefo_frontpage_block',
    'image_link' => 'content',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_type'] = 'div';
  $handler->display->display_options['fields']['type']['element_class'] = 'nefo-block-current-products-link-all';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_document' => 'nefo_product_document',
    'nefo_product_article' => 'nefo_product_article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_block_current_products'] = $view;

  $view = new view();
  $view->name = 'nefo_block_literaturtipps';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block Literaturtipps';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Literaturtipp';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'nefo-view-block-literaturtipp-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Beitrag: Bild */
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['id'] = 'field_nefo_literature_tip_img';
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['table'] = 'field_data_field_nefo_literature_tip_img';
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['field'] = 'field_nefo_literature_tip_img';
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['element_class'] = 'nefo-view-block-literaturtipp-img';
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['settings'] = array(
    'image_style' => 'image_style_nefo_literature_tip_thumbnail',
    'image_link' => 'content',
  );
  /* Field: alle Literaturtipps | Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'alle Literaturtipps | Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'alle Literaturtipps';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'schnittstellen/produkte/literaturtipps';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'nefo-view-block-literaturtipp-more-link';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_literature_tip' => 'nefo_product_literature_tip',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_block_literaturtipps'] = $view;

  $view = new view();
  $view->name = 'nefo_entityreference_node_composite_title';
  $view->description = 'NeFo node entity reference using composite titles';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo Entity Reference Composite Title';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Entity Reference View Widget Checkbox: Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'node';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['label'] = 'Inhalt';
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Aktualisierungszeitpunkt';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'blog' => 'blog',
    'page' => 'page',
    'nefo_product_document' => 'nefo_product_document',
    'nefo_product_article' => 'nefo_product_article',
    'nefo_product_interview' => 'nefo_product_interview',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Weitere NeFo-Beiträge zum Thema';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityreference_view_widget' => 'entityreference_view_widget',
    'title' => 'title',
    'changed' => 'changed',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityreference_view_widget' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['nefo_entityreference_node_composite_title'] = $view;

  $view = new view();
  $view->name = 'nefo_entityreference_products';
  $view->description = 'NeFo node entity reference using composite titles';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo Entity Reference Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Entity Reference View Widget Checkbox: Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'node';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['label'] = 'Inhalt';
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'nefo_product_document' => 'nefo_product_document',
    'nefo_product_workshop' => 'nefo_product_workshop',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Typ';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_products_view_widget');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gehört zu';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityreference_view_widget' => 'entityreference_view_widget',
    'title' => 'title',
    'changed' => 'changed',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityreference_view_widget' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['nefo_entityreference_products'] = $view;

  $view = new view();
  $view->name = 'nefo_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nefo Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Beitrag: Bild (field_nefo_slideshow_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_slideshow_img_fid']['id'] = 'field_nefo_slideshow_img_fid';
  $handler->display->display_options['relationships']['field_nefo_slideshow_img_fid']['table'] = 'field_data_field_nefo_slideshow_img';
  $handler->display->display_options['relationships']['field_nefo_slideshow_img_fid']['field'] = 'field_nefo_slideshow_img_fid';
  /* Field: Beitrag: Ziel-URL */
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['id'] = 'field_nefo_slideshow_target_url_1';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['table'] = 'field_data_field_nefo_slideshow_target_url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['field'] = 'field_nefo_slideshow_target_url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['type'] = 'link_absolute';
  /* Field: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_slideshow_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = 'Credit';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Beitrag: Bild */
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['id'] = 'field_nefo_slideshow_img';
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['table'] = 'field_data_field_nefo_slideshow_img';
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['field'] = 'field_nefo_slideshow_img';
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['alter']['text'] = '[field_nefo_slideshow_img]
[field_file_image_credit_text]
';
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['alter']['path'] = '[field_nefo_slideshow_target_url_1]';
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['settings'] = array(
    'image_style' => 'image_style_nefo_main_slideshow',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="slider-content-left">
  [field_nefo_slideshow_img]
  <div class="slider-img-credit">
    [field_file_image_credit_text]
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Beitrag: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['id'] = 'field_nefo_slideshow_desc';
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['table'] = 'field_data_field_nefo_slideshow_desc';
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['field'] = 'field_nefo_slideshow_desc';
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['element_label_colon'] = FALSE;
  /* Field: Beitrag: Ziel-URL */
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url']['id'] = 'field_nefo_slideshow_target_url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url']['table'] = 'field_data_field_nefo_slideshow_target_url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url']['field'] = 'field_nefo_slideshow_target_url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slider-content-right">
<h2>[title]</h2>
<div class="nefo-slideshow-desc">[field_nefo_slideshow_desc]</div>
<div class="nefo-slideshow-url nefo-button">[field_nefo_slideshow_target_url]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_slideshow' => 'nefo_slideshow',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_slider'] = $view;

  $view = new view();
  $view->name = 'nefo_view_block_entityreference_composite_name';
  $view->description = 'Block für weitere NeFo-Beiträge zum Thema';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block Weitere NeFo-Beiträge';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'nefo-view-block-further-topics';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
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
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-block-further-topics-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Weitere NeFo-Beiträge zum Thema:';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_internal_link_target_id']['id'] = 'field_internal_link_target_id';
  $handler->display->display_options['relationships']['field_internal_link_target_id']['table'] = 'field_data_field_internal_link';
  $handler->display->display_options['relationships']['field_internal_link_target_id']['field'] = 'field_internal_link_target_id';
  $handler->display->display_options['relationships']['field_internal_link_target_id']['required'] = TRUE;
  /* Field: Beitrag: Weitere NeFo-Beiträge zum Thema */
  $handler->display->display_options['fields']['field_internal_link']['id'] = 'field_internal_link';
  $handler->display->display_options['fields']['field_internal_link']['table'] = 'field_data_field_internal_link';
  $handler->display->display_options['fields']['field_internal_link']['field'] = 'field_internal_link';
  $handler->display->display_options['fields']['field_internal_link']['label'] = '';
  $handler->display->display_options['fields']['field_internal_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_internal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_internal_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_internal_link']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_internal_link']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_internal_link_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_internal_link_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Field: Beitrag: Thema (Zitat) */
  $handler->display->display_options['fields']['field_nefo_interview_thema']['id'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['table'] = 'field_data_field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['field'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['relationship'] = 'field_internal_link_target_id';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['type'] = 'text_plain';
  /* Field: Beitrag: Im NeFo-Interview */
  $handler->display->display_options['fields']['field_nefo_interview_with']['id'] = 'field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['table'] = 'field_data_field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['field'] = 'field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['relationship'] = 'field_internal_link_target_id';
  $handler->display->display_options['fields']['field_nefo_interview_with']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_with']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['alter']['text'] = '[field_nefo_interview_thema] - Interview mit [field_nefo_interview_with]';
  $handler->display->display_options['fields']['field_nefo_interview_with']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['empty'] = '[title]';
  $handler->display->display_options['fields']['field_nefo_interview_with']['type'] = 'text_plain';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'entityreference_composite_title_block');
  $export['nefo_view_block_entityreference_composite_name'] = $view;

  $view = new view();
  $view->name = 'nefo_view_block_interview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block Interview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aktuelles Interview';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-block-interview-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Beitrag: Bild (field_nefo_interview_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['id'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['table'] = 'field_data_field_nefo_interview_img';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['field'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'nefo-view-block-interview-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Beitrag: Thema (Zitat) */
  $handler->display->display_options['fields']['field_nefo_interview_thema']['id'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['table'] = 'field_data_field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['field'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_default_classes'] = FALSE;
  /* Field: Beitrag: Bild */
  $handler->display->display_options['fields']['field_nefo_interview_img']['id'] = 'field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['table'] = 'field_data_field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['field'] = 'field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_img']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_interview_img']['element_class'] = 'nefo-view-block-interview-img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_interview_img']['settings'] = array(
    'image_style' => 'image_style_nefo_interview_slide',
    'image_link' => 'content',
  );
  /* Field: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_class'] = 'nefo-view-block-interview-img-credit';
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Beitrag: Im NeFo-Interview */
  $handler->display->display_options['fields']['field_nefo_interview_with']['id'] = 'field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['table'] = 'field_data_field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['field'] = 'field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_with']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['alter']['text'] = 'Interview mit [field_nefo_interview_with]';
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_class'] = 'nefo-view-block-interview-with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['hide_empty'] = TRUE;
  /* Field: Alle Interviews Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Alle Interviews Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'alle Interviews';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'schnittstellen/produkte/interviews';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'nefo-view-block-interview-link-all';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_interview' => 'nefo_product_interview',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_view_block_interview'] = $view;

  $view = new view();
  $view->name = 'nefo_view_block_interview_small';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block Interview Small';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aktuelles NeFo-Interview';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-block-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Beitrag: Bild (field_nefo_interview_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['id'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['table'] = 'field_data_field_nefo_interview_img';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['field'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Beitrag: Bild */
  $handler->display->display_options['fields']['field_nefo_interview_img']['id'] = 'field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['table'] = 'field_data_field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['field'] = 'field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_interview_img']['settings'] = array(
    'image_style' => 'image_style_nefo_interview_slide',
    'image_link' => 'content',
  );
  /* Field: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Beitrag: Thema (Zitat) */
  $handler->display->display_options['fields']['field_nefo_interview_thema']['id'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['table'] = 'field_data_field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['field'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_class'] = 'nefo-view-block-recent-quotation';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_default_classes'] = FALSE;
  /* Field: Beitrag: Im NeFo-Interview */
  $handler->display->display_options['fields']['field_nefo_interview_with']['id'] = 'field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['table'] = 'field_data_field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['field'] = 'field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_with']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = 'Interview mit [field_nefo_interview_with]';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  /* Field: Alle Interviews Link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Alle Interviews Link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'alle Interviews';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'schnittstellen/produkte/interviews';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Wrapper Col */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Wrapper Col';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="nefo-view-block-image-thumbnail">[field_nefo_interview_img]</div>
<div class="nefo-view-block-image-credit">[field_file_image_credit_text]</div>
<p>[field_nefo_interview_thema]</p>
<p>[view_node]</p>
<div class="nefo-view-block-link-all">[nothing_1]</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_interview' => 'nefo_product_interview',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_view_block_interview_small'] = $view;

  $view = new view();
  $view->name = 'nefo_view_block_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aktuelle Nachrichten';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-block-news-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="view-block-news-link-all">[nothing]</div>';
  $handler->display->display_options['footer']['area_text_custom']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-block-news-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Beitrag: Bild */
  $handler->display->display_options['fields']['field_nefo_news_img']['id'] = 'field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['table'] = 'field_data_field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['field'] = 'field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_news_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_news_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_news_img']['settings'] = array(
    'image_style' => 'image_style_nefo_frontpage_block',
    'image_link' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[field_nefo_news_img]';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'nefo-view-block-news-img';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'alle Nachrichten';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'news';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_news' => 'nefo_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_view_block_news'] = $view;

  $view = new view();
  $view->name = 'nefo_view_block_video';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block Video';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aktuelles NeFo-Video';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-block-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Beitrag: Video */
  $handler->display->display_options['fields']['field_nefo_video_link']['id'] = 'field_nefo_video_link';
  $handler->display->display_options['fields']['field_nefo_video_link']['table'] = 'field_data_field_nefo_video_link';
  $handler->display->display_options['fields']['field_nefo_video_link']['field'] = 'field_nefo_video_link';
  $handler->display->display_options['fields']['field_nefo_video_link']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_video_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_video_link']['alter']['text'] = '[path]|:|[field_nefo_video_link]';
  $handler->display->display_options['fields']['field_nefo_video_link']['alter']['path'] = 'http://www.biodiversity.de';
  $handler->display->display_options['fields']['field_nefo_video_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_video_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_video_link']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_video_link']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_nefo_video_link']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  /* Field: Beitrag: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: alle Videos | Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'alle Videos | Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'alle Videos';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'videos';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'nefo-view-block-link-all';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_video' => 'nefo_video',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_view_block_video'] = $view;

  $view = new view();
  $view->name = 'nefo_view_list_article';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle Artikel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Artikel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-article-teaser-list-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Beitrag: Bild (field_nefo_article_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['id'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['table'] = 'field_data_field_nefo_article_img';
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['field'] = 'field_nefo_article_img_fid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Erstellt am [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'nefo_date_type_din5008';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Beitrag: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Weiterlesen';
  /* Field: Beitrag: Bild */
  $handler->display->display_options['fields']['field_nefo_article_img']['id'] = 'field_nefo_article_img';
  $handler->display->display_options['fields']['field_nefo_article_img']['table'] = 'field_data_field_nefo_article_img';
  $handler->display->display_options['fields']['field_nefo_article_img']['field'] = 'field_nefo_article_img';
  $handler->display->display_options['fields']['field_nefo_article_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_article_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_article_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_article_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_article_img']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_nefo_article_img']['settings'] = array(
    'colorbox_node_style' => 'image_style_nefo_cover_photo',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'image_style_nefo_big',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'custom',
    'colorbox_caption_custom' => '[file:field-image-caption-text], [file:field-file-image-credit-text]',
  );
  /* Field: Datei: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['alter']['text'] = '<p class="nefo-article-teaser-image-caption">[field_image_caption_text]	</p>';
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_default_classes'] = FALSE;
  /* Field: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['alter']['text'] = '<p class="nefo-article-teaser-image-credit">	[field_file_image_credit_text]</p>';
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Wrapper */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Wrapper';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<article class="nefo-article-teaser-horizontal-layout">
	<header class="nefo-article-teaser-header-container">
		<p class="nefo-article-teaser-date">
			[created]
		</p>		
		<h2 class="nefo-article-teaser-title-smaller">
			[title]
		</h2>
	</header>
	<div class="nefo-article-teaser-wrapper">
		<figure class="nefo-article-teaser-image-container">
			[field_nefo_article_img]
			<div class="nefo-article-teaser-image-meta">
				[field_image_caption_text]
				[field_file_image_credit_text]
			</div>
		</figure>
		<div class="nefo-article-teaser-content-container">
			<div class="nefo-article-teaser-synopsis">
				[body]
			</div>
			<p class="nefo-article-teaser-target-link">
				[view_node]
			</p>
		</div>
	</div>
</article>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'nefo-view-list-article-content';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'nefo_product_article' => 'nefo_product_article',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'schnittstellen/produkte/artikel';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Artikel';
  $handler->display->display_options['menu']['description'] = 'Artikel';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_view_list_article'] = $view;

  $view = new view();
  $view->name = 'nefo_view_list_interview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle Interviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Interviews';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-article-teaser-list-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Beitrag: Bild (field_nefo_interview_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['id'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['table'] = 'field_data_field_nefo_interview_img';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['field'] = 'field_nefo_interview_img_fid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Erstellt am [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'nefo_date_type_din5008';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Beitrag: Thema (Zitat) */
  $handler->display->display_options['fields']['field_nefo_interview_thema']['id'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['table'] = 'field_data_field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['field'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['type'] = 'text_plain';
  /* Field: Beitrag: Im NeFo-Interview */
  $handler->display->display_options['fields']['field_nefo_interview_with']['id'] = 'field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['table'] = 'field_data_field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['field'] = 'field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_with']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['alter']['text'] = 'Interview mit [field_nefo_interview_with]';
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['type'] = 'text_plain';
  /* Field: Beitrag: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Weiterlesen';
  /* Field: Beitrag: Bild */
  $handler->display->display_options['fields']['field_nefo_interview_img']['id'] = 'field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['table'] = 'field_data_field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['field'] = 'field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_interview_img']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_nefo_interview_img']['settings'] = array(
    'colorbox_node_style' => 'image_style_nefo_cover_photo',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'image_style_nefo_big',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'custom',
    'colorbox_caption_custom' => '[file:field-image-caption-text], [file:field-file-image-credit-text]',
  );
  /* Field: Datei: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['alter']['text'] = '<p class="nefo-article-teaser-image-caption">[field_image_caption_text]	</p>';
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_default_classes'] = FALSE;
  /* Field: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['alter']['text'] = '<p class="nefo-article-teaser-image-credit">	[field_file_image_credit_text]</p>';
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Wrapper */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Wrapper';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<article class="nefo-article-teaser-horizontal-layout">
	<header class="nefo-article-teaser-header-container">
		<p class="nefo-article-teaser-date">
			[created]
		</p>
		<h3>
			[title]
		</h3>
		<h2 class="nefo-article-teaser-title-bold">
			[field_nefo_interview_thema]
		</h2>
		<p class="nefo-article-teaser-title-meta">
			[field_nefo_interview_with]
		</p>
	</header>
	<div class="nefo-article-teaser-wrapper">
		<figure class="nefo-article-teaser-image-container">
			[field_nefo_interview_img]
			<div class="nefo-article-teaser-image-meta">
				[field_image_caption_text]
				[field_file_image_credit_text]
			</div>
		</figure>
		<div class="nefo-article-teaser-content-container">
			<div class="nefo-article-teaser-synopsis">
				[body]
			</div>
			<p class="nefo-article-teaser-target-link">
				[view_node]
			</p>
		</div>
	</div>
</article>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'nefo-view-list-interview-content';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit' => 'edit',
    'edit_node' => 'edit_node',
    'field_nefo_interview_month' => 0,
    'title' => 0,
    'body' => 0,
    'field_nefo_interview_img' => 0,
    'field_image_caption_text' => 0,
    'field_file_image_credit_text' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
    'field_nefo_interview_category' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_interview' => 'nefo_product_interview',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'schnittstellen/produkte/interviews';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Interviews';
  $handler->display->display_options['menu']['description'] = 'Interviews';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_view_list_interview'] = $view;

  $view = new view();
  $view->name = 'nefo_view_list_literature_tip';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle Literaturtipps';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Literaturtipps';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-literature-tip-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Erstellt am';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'nefo-view-list-literature-tip-date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'nefo_date_type_din5008';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Beitrag: Bild */
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['id'] = 'field_nefo_literature_tip_img';
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['table'] = 'field_data_field_nefo_literature_tip_img';
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['field'] = 'field_nefo_literature_tip_img';
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['element_wrapper_class'] = 'nefo-view-list-literature-tip-img';
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_literature_tip_img']['settings'] = array(
    'image_style' => 'image_style_nefo_literature_tip_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-list-literature-tip-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Beitrag: Ziel-URL */
  $handler->display->display_options['fields']['field_nefo_target_url']['id'] = 'field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['table'] = 'field_data_field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['field'] = 'field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_target_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_target_url']['alter']['text'] = 'Mehr';
  $handler->display->display_options['fields']['field_nefo_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['click_sort_column'] = 'url';
  /* Field: Beitrag: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_description']['id'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['table'] = 'field_data_field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['field'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_description']['element_default_classes'] = FALSE;
  /* Field: Wrapper Col1 */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Wrapper Col1';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="nefo-view-list-literature-tip-img">[field_nefo_literature_tip_img]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'nefo-view-list-literature-tip-col1';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Wrapper Col2 */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Wrapper Col2';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="nefo-view-list-literature-tip-title"><h2>[title]</h2></div>
<div class="nefo-view-list-literature-tip-desc">[field_nefo_description]</div>
<div class="nefo-view-list-literature-tip-link">[field_nefo_target_url]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'nefo-view-list-literature-tip-col2';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'created' => 0,
    'field_nefo_literature_tip_img' => 0,
    'title' => 0,
    'field_nefo_target_url' => 0,
    'field_nefo_description' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_literature_tip' => 'nefo_product_literature_tip',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'schnittstellen/produkte/literaturtipps';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Literaturtipps';
  $handler->display->display_options['menu']['description'] = 'Literaturtipps';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_view_list_literature_tip'] = $view;

  $view = new view();
  $view->name = 'nefo_view_list_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-article-teaser-list-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Beitrag: Bild (field_nefo_news_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['id'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['table'] = 'field_data_field_nefo_news_img';
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['field'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['label'] = 'Bild von field_nefo_news_img';
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
  /* Field: Inhalt: Full Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['ui_name'] = 'Inhalt: Full Body';
  $handler->display->display_options['fields']['body_1']['label'] = 'Unsere Themen';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['element_default_classes'] = FALSE;
  /* Field: Beitrag: Kategorie */
  $handler->display->display_options['fields']['field_nefo_news_category']['id'] = 'field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['table'] = 'field_data_field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['field'] = 'field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_news_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_news_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_category']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_news_category']['element_wrapper_class'] = 'nefo-view-list-news-category';
  $handler->display->display_options['fields']['field_nefo_news_category']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Erstellt am [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'nefo_date_type_din5008';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Weiterlesen';
  /* Field: Beitrag: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Beitrag: Ziel-URL */
  $handler->display->display_options['fields']['field_nefo_target_url']['id'] = 'field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['table'] = 'field_data_field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['field'] = 'field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_target_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['empty'] = '[view_node]';
  $handler->display->display_options['fields']['field_nefo_target_url']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['click_sort_column'] = 'url';
  /* Field: Bild-News */
  $handler->display->display_options['fields']['field_nefo_news_img']['id'] = 'field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['table'] = 'field_data_field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['field'] = 'field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['ui_name'] = 'Bild-News';
  $handler->display->display_options['fields']['field_nefo_news_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_news_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_news_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_news_img']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_nefo_news_img']['settings'] = array(
    'colorbox_node_style' => 'image_style_nefo_cover_photo',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'image_style_nefo_big',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'custom',
    'colorbox_caption_custom' => '[file:field-image-caption-text], [file:field-file-image-credit-text]',
  );
  /* Field: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['ui_name'] = 'Bildunterschrift';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['alter']['text'] = '<p class="nefo-article-teaser-image-caption">[field_image_caption_text]	</p>';
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_default_classes'] = FALSE;
  /* Field: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['ui_name'] = 'Image Credit';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['alter']['text'] = '<p class="nefo-article-teaser-image-credit">	[field_file_image_credit_text]</p>';
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Wrapper */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Wrapper';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<article class="nefo-article-teaser-horizontal-layout">
	<header class="nefo-article-teaser-header-container nefo-article-teaser-with-category">
		<p class="nefo-article-teaser-category">
			[field_nefo_news_category]
		</p>
		<p class="nefo-article-teaser-date">
			[created]
		</p>		
		<h2 class="nefo-article-teaser-title-smaller">
			[title]
		</h2>
	</header>
	<div class="nefo-article-teaser-wrapper">
		<figure class="nefo-article-teaser-image-container">
			[field_nefo_news_img]
			<div class="nefo-article-teaser-image-meta">
				[field_image_caption_text]
				[field_file_image_credit_text]
			</div>
		</figure>
		<div class="nefo-article-teaser-content-container">
			<div class="nefo-article-teaser-synopsis">
				[body]
			</div>
			<p class="nefo-article-teaser-target-link">
				[field_nefo_target_url]
			</p>
		</div>
	</div>
</article>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['fields']['contextual_links']['check_access'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_news' => 'nefo_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: News Category */
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['id'] = 'field_nefo_news_category_tid';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['table'] = 'field_data_field_nefo_news_category';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['field'] = 'field_nefo_news_category_tid';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['ui_name'] = 'News Category';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['expose']['operator_id'] = 'field_nefo_news_category_tid_op';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['expose']['operator'] = 'field_nefo_news_category_tid_op';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['expose']['identifier'] = 'ctg';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['vocabulary'] = 'nefo_taxonomy_news';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['hierarchy'] = 1;
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
    'body_1' => 'body_1',
    'title' => 'title',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
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
        'weight' => '2',
        'type' => 'container',
        'id' => 'container-2',
        'pid' => 'root',
        'depth' => 1,
        'container_type' => 'fieldset',
        'title' => 'Kategorie',
        'description' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'collapsed_if_no_exposed_input' => 0,
      ),
      'field_nefo_news_category_tid' => array(
        'weight' => '-11',
        'type' => 'filter',
        'id' => 'field_nefo_news_category_tid',
        'pid' => 'container-2',
        'depth' => 2,
      ),
      'container-3' => array(
        'weight' => '3',
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
        'weight' => '4',
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
        'weight' => '5',
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
        'weight' => '6',
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
  $handler->display->display_options['path'] = 'news';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['description'] = 'News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_view_list_news'] = $view;

  $view = new view();
  $view->name = 'nefo_view_list_news_by_term';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle News per Begriff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-article-teaser-list-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Beitrag: Bild (field_nefo_news_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['id'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['table'] = 'field_data_field_nefo_news_img';
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['field'] = 'field_nefo_news_img_fid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Erstellt am [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'nefo_date_type_din5008';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Beitrag: Kategorie */
  $handler->display->display_options['fields']['field_nefo_news_category']['id'] = 'field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['table'] = 'field_data_field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['field'] = 'field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_news_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_news_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_category']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_news_category']['element_wrapper_class'] = 'nefo-view-list-news-category';
  $handler->display->display_options['fields']['field_nefo_news_category']['element_default_classes'] = FALSE;
  /* Field: Beitrag: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Weiterlesen';
  /* Field: Beitrag: Ziel-URL */
  $handler->display->display_options['fields']['field_nefo_target_url']['id'] = 'field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['table'] = 'field_data_field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['field'] = 'field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_target_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['empty'] = '[view_node]';
  $handler->display->display_options['fields']['field_nefo_target_url']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['click_sort_column'] = 'url';
  /* Field: Datei: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['alter']['text'] = '<p class="nefo-article-teaser-image-caption">[field_image_caption_text]	</p>';
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_default_classes'] = FALSE;
  /* Field: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['alter']['text'] = '<p class="nefo-article-teaser-image-credit">	[field_file_image_credit_text]</p>';
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Beitrag: Bild */
  $handler->display->display_options['fields']['field_nefo_news_img']['id'] = 'field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['table'] = 'field_data_field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['field'] = 'field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_news_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_news_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_news_img']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_nefo_news_img']['settings'] = array(
    'colorbox_node_style' => 'image_style_nefo_cover_photo',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'image_style_nefo_big',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'custom',
    'colorbox_caption_custom' => '[file:field-image-caption-text], [file:field-file-image-credit-text]',
  );
  /* Field: Wrapper */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Wrapper';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<article class="nefo-article-teaser-horizontal-layout">
	<header class="nefo-article-teaser-header-container">
		<p class="nefo-article-teaser-date">
			[created]
		</p>		
		<h2 class="nefo-article-teaser-title-smaller">
			[title]
		</h2>
	</header>
	<div class="nefo-article-teaser-wrapper">
		<figure class="nefo-article-teaser-image-container">
			[field_nefo_news_img]
			<div class="nefo-article-teaser-image-meta">
				[field_image_caption_text]
				[field_file_image_credit_text]
			</div>
		</figure>
		<div class="nefo-article-teaser-content-container">
			<div class="nefo-article-teaser-synopsis">
				[body]
			</div>
			<p class="nefo-article-teaser-target-link">
				[field_nefo_target_url]
			</p>
		</div>
	</div>
</article>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['fields']['contextual_links']['check_access'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'nefo_taxonomy_news' => 'nefo_taxonomy_news',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_news' => 'nefo_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news/%';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_view_list_news_by_term'] = $view;

  $view = new view();
  $view->name = 'nefo_view_list_product_document_by_term';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle Dokumente per Begriff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-document-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Beitrag: Bild (field_nefo_product_icon:fid) */
  $handler->display->display_options['relationships']['field_nefo_product_icon_fid']['id'] = 'field_nefo_product_icon_fid';
  $handler->display->display_options['relationships']['field_nefo_product_icon_fid']['table'] = 'field_data_field_nefo_product_icon';
  $handler->display->display_options['relationships']['field_nefo_product_icon_fid']['field'] = 'field_nefo_product_icon_fid';
  /* Field: Beitrag: Kategorie */
  $handler->display->display_options['fields']['field_nefo_taxonomy_document']['id'] = 'field_nefo_taxonomy_document';
  $handler->display->display_options['fields']['field_nefo_taxonomy_document']['table'] = 'field_data_field_nefo_taxonomy_document';
  $handler->display->display_options['fields']['field_nefo_taxonomy_document']['field'] = 'field_nefo_taxonomy_document';
  $handler->display->display_options['fields']['field_nefo_taxonomy_document']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_taxonomy_document']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_taxonomy_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_taxonomy_document']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_taxonomy_document']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Beitrag: Typ */
  $handler->display->display_options['fields']['field_nefo_product_field_type']['id'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['table'] = 'field_data_field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['field'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_field_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_field_type']['element_default_classes'] = FALSE;
  /* Field: Beitrag: URL */
  $handler->display->display_options['fields']['field_nefo_product_link']['id'] = 'field_nefo_product_link';
  $handler->display->display_options['fields']['field_nefo_product_link']['table'] = 'field_data_field_nefo_product_link';
  $handler->display->display_options['fields']['field_nefo_product_link']['field'] = 'field_nefo_product_link';
  $handler->display->display_options['fields']['field_nefo_product_link']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nefo_product_link']['type'] = 'link_absolute';
  /* Field: Beitrag: Dokument */
  $handler->display->display_options['fields']['field_nefo_product_document']['id'] = 'field_nefo_product_document';
  $handler->display->display_options['fields']['field_nefo_product_document']['table'] = 'field_data_field_nefo_product_document';
  $handler->display->display_options['fields']['field_nefo_product_document']['field'] = 'field_nefo_product_document';
  $handler->display->display_options['fields']['field_nefo_product_document']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_document']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_document']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_document']['empty'] = '[field_nefo_product_link]';
  $handler->display->display_options['fields']['field_nefo_product_document']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_document']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_product_document']['type'] = 'file_url_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_nefo_product_document]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Beitrag: Bild */
  $handler->display->display_options['fields']['field_nefo_product_icon']['id'] = 'field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['table'] = 'field_data_field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['field'] = 'field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['path'] = '[field_nefo_product_document]';
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_nefo_product_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_product_icon']['settings'] = array(
    'image_style' => 'image_style_nefo_product_thumbnail',
    'image_link' => '',
  );
  /* Field: Beitrag: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_description']['id'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['table'] = 'field_data_field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['field'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_description']['element_default_classes'] = FALSE;
  /* Field: Wrapper Col1 */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Wrapper Col1';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="nefo-view-list-document-icon">[field_nefo_product_icon]</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'nefo-view-list-document-col1';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Wrapper Col2 */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Wrapper Col2';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<h2>[title]</h2>
<p>[field_nefo_description]</p>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'nefo-view-list-document-col2';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['fields']['contextual_links']['check_access'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'nefo_taxonomy_document' => 'nefo_taxonomy_document',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_document' => 'nefo_product_document',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'produkte/%';
  $export['nefo_view_list_product_document_by_term'] = $view;

  $view = new view();
  $view->name = 'nefo_view_list_products_by_term';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle Produkte per Begriff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-product-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: NeFo-Dokument: Kategorie */
  $handler->display->display_options['relationships']['field_nefo_taxonomy_document_tid']['id'] = 'field_nefo_taxonomy_document_tid';
  $handler->display->display_options['relationships']['field_nefo_taxonomy_document_tid']['table'] = 'field_data_field_nefo_taxonomy_document';
  $handler->display->display_options['relationships']['field_nefo_taxonomy_document_tid']['field'] = 'field_nefo_taxonomy_document_tid';
  $handler->display->display_options['relationships']['field_nefo_taxonomy_document_tid']['ui_name'] = 'NeFo-Dokument: Kategorie';
  $handler->display->display_options['relationships']['field_nefo_taxonomy_document_tid']['label'] = 'nefo_document_category';
  /* Field: NeFo-Dokument: Kategorie: TermID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_nefo_taxonomy_document_tid';
  $handler->display->display_options['fields']['tid']['ui_name'] = 'NeFo-Dokument: Kategorie: TermID';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['text'] = '[type]|:|[tid]';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['type']['empty'] = '[tid]';
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Erstellt am';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'nefo-view-list-product-date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'nefo_date_type_din5008';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content Type Place Holder */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['ui_name'] = 'Content Type Place Holder';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['type_1']['machine_name'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-list-product-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'nefo_taxonomy_tags' => 'nefo_taxonomy_tags',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_document' => 'nefo_product_document',
    'nefo_news' => 'nefo_news',
    'nefo_product_article' => 'nefo_product_article',
    'nefo_product_interview' => 'nefo_product_interview',
    'nefo_product_workshop' => 'nefo_product_workshop',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'themen/%';
  $handler->display->display_options['menu']['title'] = 'Interviews';
  $handler->display->display_options['menu']['description'] = 'Interviews';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_view_list_products_by_term'] = $view;

  $view = new view();
  $view->name = 'nefo_view_list_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Videos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-article-teaser-list-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Beitrag: Video */
  $handler->display->display_options['fields']['field_nefo_video_link']['id'] = 'field_nefo_video_link';
  $handler->display->display_options['fields']['field_nefo_video_link']['table'] = 'field_data_field_nefo_video_link';
  $handler->display->display_options['fields']['field_nefo_video_link']['field'] = 'field_nefo_video_link';
  $handler->display->display_options['fields']['field_nefo_video_link']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_video_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_video_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_video_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_video_link']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_video_link']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_nefo_video_link']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Beitrag: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Wrapper */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Wrapper';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<article class="nefo-article-teaser-horizontal-layout">
	<header class="nefo-article-teaser-header-container">
		<h2 class="nefo-article-teaser-title-smaller">
			[title]
		</h2>
	</header>
	<div class="nefo-article-teaser-wrapper nefo-article-teaser-video-wrapper">
		<div class="nefo-article-teaser-video-container">
			[field_nefo_video_link]
		</div>
		<div class="nefo-article-teaser-content-container">
			<div class="nefo-article-teaser-synopsis">
				[body]
			</div>
		</div>
	</div>
</article>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_video' => 'nefo_video',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'videos';
  $export['nefo_view_list_videos'] = $view;

  $view = new view();
  $view->name = 'nefo_view_list_workshop';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle Workshops ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Workshops ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-workshop-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Beitrag: Typ */
  $handler->display->display_options['fields']['field_nefo_product_field_type']['id'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['table'] = 'field_data_field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['field'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_field_type']['element_label_colon'] = FALSE;
  /* Field: Beitrag: URL */
  $handler->display->display_options['fields']['field_nefo_workshop_url']['id'] = 'field_nefo_workshop_url';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['table'] = 'field_data_field_nefo_workshop_url';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['field'] = 'field_nefo_workshop_url';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_workshop_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_workshop_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['type'] = 'link_absolute';
  /* Field: Beitrag: Dokument */
  $handler->display->display_options['fields']['field_nefo_workshop_file']['id'] = 'field_nefo_workshop_file';
  $handler->display->display_options['fields']['field_nefo_workshop_file']['table'] = 'field_data_field_nefo_workshop_file';
  $handler->display->display_options['fields']['field_nefo_workshop_file']['field'] = 'field_nefo_workshop_file';
  $handler->display->display_options['fields']['field_nefo_workshop_file']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_workshop_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_workshop_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_workshop_file']['empty'] = '[field_nefo_workshop_url]';
  $handler->display->display_options['fields']['field_nefo_workshop_file']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_workshop_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_workshop_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_nefo_workshop_file']['settings'] = array(
    'text' => 'Download [file:name]',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_nefo_workshop_file]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-list-workshop-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Beitrag: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_description']['id'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['table'] = 'field_data_field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['field'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_description']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_description']['element_wrapper_class'] = 'nefo-view-list-workshop-desc';
  $handler->display->display_options['fields']['field_nefo_description']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'field_nefo_product_field_type' => 0,
    'field_nefo_workshop_url' => 0,
    'field_nefo_workshop_file' => 0,
    'title' => 0,
    'field_nefo_description' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_workshop' => 'nefo_product_workshop',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'schnittstellen/produkte/workshops';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Workshops';
  $handler->display->display_options['menu']['description'] = 'Workshops';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_view_list_workshop'] = $view;

  $view = new view();
  $view->name = 'nefo_view_vote_results';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Abstimmungsergebnisse';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'NeFo-Abstimmungsergebnisse';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'value_1' => 'value_1',
    'value_2' => 'value_2',
    'value_5' => 'value_5',
    'value' => 'value',
    'value_3' => 'value_3',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Stimmenanzahl */
  $handler->display->display_options['relationships']['votingapi_cache_4']['id'] = 'votingapi_cache_4';
  $handler->display->display_options['relationships']['votingapi_cache_4']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_4']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache_4']['ui_name'] = 'Stimmenanzahl';
  $handler->display->display_options['relationships']['votingapi_cache_4']['label'] = 'Stimmenanzahl';
  $handler->display->display_options['relationships']['votingapi_cache_4']['required'] = TRUE;
  $handler->display->display_options['relationships']['votingapi_cache_4']['votingapi'] = array(
    'value_type' => 'points',
    'tag' => 'vote',
    'function' => 'count',
  );
  /* Relationship: Positive Stimmen */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['ui_name'] = 'Positive Stimmen';
  $handler->display->display_options['relationships']['votingapi_cache']['label'] = 'Positive Stimmen';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => 'points',
    'tag' => 'vote',
    'function' => 'positives',
  );
  /* Relationship: Negative Stimmen */
  $handler->display->display_options['relationships']['votingapi_cache_1']['id'] = 'votingapi_cache_1';
  $handler->display->display_options['relationships']['votingapi_cache_1']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_1']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache_1']['ui_name'] = 'Negative Stimmen';
  $handler->display->display_options['relationships']['votingapi_cache_1']['label'] = 'Negative Stimmen';
  $handler->display->display_options['relationships']['votingapi_cache_1']['votingapi'] = array(
    'value_type' => 'points',
    'tag' => 'vote',
    'function' => 'negatives',
  );
  /* Relationship: Gesamtwertung */
  $handler->display->display_options['relationships']['votingapi_cache_5']['id'] = 'votingapi_cache_5';
  $handler->display->display_options['relationships']['votingapi_cache_5']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_5']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache_5']['ui_name'] = 'Gesamtwertung';
  $handler->display->display_options['relationships']['votingapi_cache_5']['label'] = 'Gesamtwertung';
  $handler->display->display_options['relationships']['votingapi_cache_5']['votingapi'] = array(
    'value_type' => 'points',
    'tag' => 'vote',
    'function' => 'sum',
  );
  /* Relationship: Durchschnittliche Bewertung */
  $handler->display->display_options['relationships']['votingapi_cache_2']['id'] = 'votingapi_cache_2';
  $handler->display->display_options['relationships']['votingapi_cache_2']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache_2']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache_2']['ui_name'] = 'Durchschnittliche Bewertung';
  $handler->display->display_options['relationships']['votingapi_cache_2']['label'] = 'Durchschnittliche Bewertung';
  $handler->display->display_options['relationships']['votingapi_cache_2']['votingapi'] = array(
    'value_type' => 'points',
    'tag' => 'vote',
    'function' => 'average',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titel';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_1']['label'] = 'Positive';
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_1']['precision'] = '0';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['relationship'] = 'votingapi_cache_1';
  $handler->display->display_options['fields']['value_2']['label'] = 'Negative';
  $handler->display->display_options['fields']['value_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_2']['precision'] = '0';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['relationship'] = 'votingapi_cache_5';
  $handler->display->display_options['fields']['value_5']['label'] = 'Gesamt';
  $handler->display->display_options['fields']['value_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_5']['precision'] = '0';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache_4';
  $handler->display->display_options['fields']['value']['label'] = 'Stimmenanzahl';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['precision'] = '0';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['relationship'] = 'votingapi_cache_2';
  $handler->display->display_options['fields']['value_3']['label'] = 'Durchschnitt';
  $handler->display->display_options['fields']['value_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_3']['precision'] = '0';
  /* Field: Anteil (+) */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['relationship'] = 'votingapi_cache_4';
  $handler->display->display_options['fields']['value_4']['ui_name'] = 'Anteil (+)';
  $handler->display->display_options['fields']['value_4']['label'] = 'Anteil (+)';
  $handler->display->display_options['fields']['value_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_4']['precision'] = '0';
  /* Field: Anteil (-) */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['relationship'] = 'votingapi_cache_4';
  $handler->display->display_options['fields']['value_6']['ui_name'] = 'Anteil (-)';
  $handler->display->display_options['fields']['value_6']['label'] = 'Anteil (-)';
  $handler->display->display_options['fields']['value_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_6']['precision'] = '0';
  /* Field: Vote results: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['relationship'] = 'votingapi_cache_4';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Zeitstempel';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Abstimmungsergebnisse';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'value_1' => 'value_1',
    'value_2' => 'value_2',
    'value_5' => 'value_5',
    'value' => 'value',
    'value_3' => 'value_3',
    'value_4' => 'value_4',
    'value_6' => 'value_6',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = 'timestamp';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_6' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'allwords';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
  );
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
      'title' => array(
        'weight' => '-3',
        'type' => 'filter',
        'id' => 'title',
        'pid' => 'root',
        'depth' => 1,
      ),
      'submit' => array(
        'weight' => '-2',
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
    ),
  );
  $handler->display->display_options['path'] = 'admin/content/votes';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Abstimmungsergebnisse';
  $handler->display->display_options['menu']['description'] = 'Abstimmungsergebnisse';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titel';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_1']['label'] = 'Positive';
  $handler->display->display_options['fields']['value_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_1']['precision'] = '0';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['relationship'] = 'votingapi_cache_1';
  $handler->display->display_options['fields']['value_2']['label'] = 'Negative';
  $handler->display->display_options['fields']['value_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_2']['precision'] = '0';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['relationship'] = 'votingapi_cache_5';
  $handler->display->display_options['fields']['value_5']['label'] = 'Gesamt';
  $handler->display->display_options['fields']['value_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_5']['precision'] = '0';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache_4';
  $handler->display->display_options['fields']['value']['label'] = 'Stimmenanzahl';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['precision'] = '0';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['relationship'] = 'votingapi_cache_2';
  $handler->display->display_options['fields']['value_3']['label'] = 'Durchschnitt';
  $handler->display->display_options['fields']['value_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_3']['precision'] = '0';
  /* Field: Anteil (+) */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['relationship'] = 'votingapi_cache_4';
  $handler->display->display_options['fields']['value_4']['ui_name'] = 'Anteil (+)';
  $handler->display->display_options['fields']['value_4']['label'] = 'Anteil (+)';
  $handler->display->display_options['fields']['value_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_4']['precision'] = '0';
  /* Field: Anteil (-) */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['relationship'] = 'votingapi_cache_4';
  $handler->display->display_options['fields']['value_6']['ui_name'] = 'Anteil (-)';
  $handler->display->display_options['fields']['value_6']['label'] = 'Anteil (-)';
  $handler->display->display_options['fields']['value_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_6']['precision'] = '0';
  /* Field: Vote results: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['relationship'] = 'votingapi_cache_4';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Zeitstempel';
  $handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['nefo_view_vote_results'] = $view;

  return $export;
}
