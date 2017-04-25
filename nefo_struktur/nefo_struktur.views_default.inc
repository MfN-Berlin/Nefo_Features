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
  $view->name = 'nefo_block_article';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block Artikel';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-block-article-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Bild (field_nefo_article_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['id'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['table'] = 'field_data_field_nefo_article_img';
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['field'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_nefo_article_img']['id'] = 'field_nefo_article_img';
  $handler->display->display_options['fields']['field_nefo_article_img']['table'] = 'field_data_field_nefo_article_img';
  $handler->display->display_options['fields']['field_nefo_article_img']['field'] = 'field_nefo_article_img';
  $handler->display->display_options['fields']['field_nefo_article_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_article_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_article_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_article_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_article_img']['settings'] = array(
    'image_style' => 'image_style_nefo_interview_slide',
    'image_link' => 'content',
  );
  /* Field: File: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
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
  $handler->display->display_options['fields']['view_node']['text'] = 'zum Artikel';
  /* Field: Alle Artikel Link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Alle Artikel Link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'alle Artikel';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'presse';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Wrapper Col1 */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Wrapper Col1';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="nefo-view-block-article-img">[field_nefo_article_img]</div>
<div class="nefo-view-block-article-img-credit">[field_file_image_credit_text]</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'nefo-view-block-article-col1';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Wrapper Col2 */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Wrapper Col2';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<h3 class="nefo-view-block-article-title">[title]</h3>
[body]
<div class="nefo-view-block-article-nav">
<span class="nefo-view-block-article-link">[view_node]</span>
<span class="nefo-view-block-article-link-all">[nothing_1]</span>
</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'nefo-view-block-article-col2';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_block_article'] = $view;

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
  /* Field: Content: Bild */
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
  $view->name = 'nefo_block_press_release';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block Pressemitteilung';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Eigene Pressemitteilung';
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
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-block-press-release-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Bild (field_nefo_press_release_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_press_release_img_fid']['id'] = 'field_nefo_press_release_img_fid';
  $handler->display->display_options['relationships']['field_nefo_press_release_img_fid']['table'] = 'field_data_field_nefo_press_release_img';
  $handler->display->display_options['relationships']['field_nefo_press_release_img_fid']['field'] = 'field_nefo_press_release_img_fid';
  $handler->display->display_options['relationships']['field_nefo_press_release_img_fid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_nefo_press_release_img']['id'] = 'field_nefo_press_release_img';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['table'] = 'field_data_field_nefo_press_release_img';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['field'] = 'field_nefo_press_release_img';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_press_release_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_press_release_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_press_release_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['settings'] = array(
    'image_style' => 'image_style_nefo_interview_slide',
    'image_link' => 'content',
  );
  /* Field: File: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_press_release_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = 'Foto';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
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
  $handler->display->display_options['fields']['view_node']['text'] = 'zur Pressemitteilung';
  /* Field: Alle Pressemitteilungen Link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Alle Pressemitteilungen Link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'alle Pressemitteilungen';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'presse/pressemitteilungen';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Wrapper Col1 */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Wrapper Col1';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="nefo-view-block-press-release-img">[field_nefo_press_release_img]</div>
<div class="nefo-view-block-press-release-img-credit">[field_file_image_credit_text]</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'nefo-view-block-press-release-col1';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Wrapper Col2 */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Wrapper Col2';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<h3 class="nefo-view-block-press-release-title">[title]</h3>
[body]
<div class="nefo-view-block-press-release-nav">
<span class="nefo-view-block-press-release-link">[view_node]</span>
<span class="nefo-view-block-press-release-link-all">[nothing_1]</span>
</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'nefo-view-block-press-release-col2';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
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
    'nefo_product_press_release' => 'nefo_product_press_release',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_block_press_release'] = $view;

  $view = new view();
  $view->name = 'nefo_current_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block Aktuelle Produkte';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-block-current-products-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_nefo_slide_product_refer_target_id']['id'] = 'field_nefo_slide_product_refer_target_id';
  $handler->display->display_options['relationships']['field_nefo_slide_product_refer_target_id']['table'] = 'field_data_field_nefo_slide_product_refer';
  $handler->display->display_options['relationships']['field_nefo_slide_product_refer_target_id']['field'] = 'field_nefo_slide_product_refer_target_id';
  $handler->display->display_options['relationships']['field_nefo_slide_product_refer_target_id']['label'] = 'Gehört zum Produkt';
  $handler->display->display_options['relationships']['field_nefo_slide_product_refer_target_id']['required'] = TRUE;
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
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['id'] = 'field_nefo_slide_product_img';
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['table'] = 'field_data_field_nefo_slide_product_img';
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['field'] = 'field_nefo_slide_product_img';
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_slide_product_img']['settings'] = array(
    'image_style' => 'image_style_nefo_frontpage_block',
    'image_link' => '',
  );
  /* Field: Content: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_slide_product_descr']['id'] = 'field_nefo_slide_product_descr';
  $handler->display->display_options['fields']['field_nefo_slide_product_descr']['table'] = 'field_data_field_nefo_slide_product_descr';
  $handler->display->display_options['fields']['field_nefo_slide_product_descr']['field'] = 'field_nefo_slide_product_descr';
  $handler->display->display_options['fields']['field_nefo_slide_product_descr']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slide_product_descr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slide_product_descr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_product_descr']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_product_descr']['type'] = 'text_plain';
  /* Field: Bild als Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_nefo_slide_product_refer_target_id';
  $handler->display->display_options['fields']['view_node']['ui_name'] = 'Bild als Link';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[field_nefo_slide_product_img] ';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  /* Field: Titel als Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['relationship'] = 'field_nefo_slide_product_refer_target_id';
  $handler->display->display_options['fields']['view_node_1']['ui_name'] = 'Titel als Link';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_1']['element_default_classes'] = FALSE;
  /* Field: Beschreibung als Link */
  $handler->display->display_options['fields']['view_node_2']['id'] = 'view_node_2';
  $handler->display->display_options['fields']['view_node_2']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_2']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_2']['relationship'] = 'field_nefo_slide_product_refer_target_id';
  $handler->display->display_options['fields']['view_node_2']['ui_name'] = 'Beschreibung als Link';
  $handler->display->display_options['fields']['view_node_2']['label'] = '';
  $handler->display->display_options['fields']['view_node_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_2']['alter']['text'] = '[field_nefo_slide_product_descr]';
  $handler->display->display_options['fields']['view_node_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_2']['element_default_classes'] = FALSE;
  /* Field: Linker Fussbereich */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_nefo_slide_product_refer_target_id';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Linker Fussbereich';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Rechter Fussbereich */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_nefo_slide_product_refer_target_id';
  $handler->display->display_options['fields']['path']['ui_name'] = 'Rechter Fussbereich';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Field: Wrapper 1 */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Wrapper 1';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="nefo-view-block-current-products-img">[view_node]</div>
<div class="nefo-view-block-current-products-text">
<div class="nefo-view-block-current-products-title">[view_node_1]</div>
<div class="nefo-view-block-current-products-desc">[view_node_2]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'nefo-view-block-current-products-content';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Wrapper 2 */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Wrapper 2';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[type]';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'nefo-view-block-current-products-type';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Wrapper 3 */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Wrapper 3';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[path]';
  $handler->display->display_options['fields']['nothing_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_class'] = 'nefo-view-block-current-products-nav';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
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
    'nefo_slide_products' => 'nefo_slide_products',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_current_products'] = $view;

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
    'nefo_product_article' => 'nefo_product_article',
    'nefo_product_report' => 'nefo_product_report',
    'nefo_product_factsheet' => 'nefo_product_factsheet',
    'nefo_product_interview' => 'nefo_product_interview',
    'nefo_product_press_release' => 'nefo_product_press_release',
    'nefo_product_opinion' => 'nefo_product_opinion',
    'nefo_product_study' => 'nefo_product_study',
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
    'nefo_product_report' => 'nefo_product_report',
    'nefo_product_factsheet' => 'nefo_product_factsheet',
    'nefo_product_opinion' => 'nefo_product_opinion',
    'nefo_product_study' => 'nefo_product_study',
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
  /* Relationship: Content: Bild (field_nefo_slideshow_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_slideshow_img_fid']['id'] = 'field_nefo_slideshow_img_fid';
  $handler->display->display_options['relationships']['field_nefo_slideshow_img_fid']['table'] = 'field_data_field_nefo_slideshow_img';
  $handler->display->display_options['relationships']['field_nefo_slideshow_img_fid']['field'] = 'field_nefo_slideshow_img_fid';
  /* Field: Content: Ziel-URL */
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['id'] = 'field_nefo_slideshow_target_url_1';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['table'] = 'field_data_field_nefo_slideshow_target_url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['field'] = 'field_nefo_slideshow_target_url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['type'] = 'link_absolute';
  /* Field: File: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_slideshow_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = 'Credit';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Bild */
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
  /* Field: Content: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['id'] = 'field_nefo_slideshow_desc';
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['table'] = 'field_data_field_nefo_slideshow_desc';
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['field'] = 'field_nefo_slideshow_desc';
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['element_label_colon'] = FALSE;
  /* Field: Content: Ziel-URL */
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
  /* Field: Content: Weitere NeFo-Beiträge zum Thema */
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
  /* Field: Content: Thema (Zitat) */
  $handler->display->display_options['fields']['field_nefo_interview_thema']['id'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['table'] = 'field_data_field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['field'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['relationship'] = 'field_internal_link_target_id';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['type'] = 'text_plain';
  /* Field: Content: Im NeFo-Interview */
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
  $handler->display->display_options['title'] = 'Interview';
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
  /* Relationship: Content: Bild (field_nefo_interview_img:fid) */
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
  /* Field: Content: Thema (Zitat) */
  $handler->display->display_options['fields']['field_nefo_interview_thema']['id'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['table'] = 'field_data_field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['field'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_default_classes'] = FALSE;
  /* Field: Content: Im NeFo-Interview */
  $handler->display->display_options['fields']['field_nefo_interview_with']['id'] = 'field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['table'] = 'field_data_field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['field'] = 'field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_with']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['type'] = 'text_plain';
  /* Field: Content: Bild */
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
  /* Field: Content: Body */
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
  $handler->display->display_options['fields']['view_node']['text'] = 'zum Interview';
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
  /* Field: File: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Wrapper Col1 */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Wrapper Col1';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="nefo-view-block-interview-img">[field_nefo_interview_img]</div>
<div class="nefo-view-block-interview-img-credit">[field_file_image_credit_text]</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'nefo-view-block-interview-col1';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Field: Wrapper Col2 */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Wrapper Col2';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<p class="nefo-view-block-interview-quotation">[title]</p>
<h3 class="nefo-view-block-interview-title">[field_nefo_interview_thema]</h3>
<p class="nefo-view-block-interview-with">Interview mit [field_nefo_interview_with]</p>

[body]
<div class="nefo-view-block-interview-nav">
<span class="nefo-view-block-interview-link">[view_node]</span>
<span class="nefo-view-block-interview-link-all">[nothing_1]</span>
</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'nefo-view-block-interview-col2';
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
  $handler->display->display_options['title'] = 'NeFo-Interview';
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
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-small-block-interview';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Bild (field_nefo_interview_img:fid) */
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
  /* Field: Content: Bild */
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
  /* Field: File: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Content: Thema (Zitat) */
  $handler->display->display_options['fields']['field_nefo_interview_thema']['id'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['table'] = 'field_data_field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['field'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_class'] = 'nefo-view-block-recent-quotation';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_default_classes'] = FALSE;
  /* Field: Content: Im NeFo-Interview */
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
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="nefo-view-small-block-interview-content">
	<div class="nefo-view-block-interview-img">[field_nefo_interview_img]</div>
	<div class="nefo-view-block-interview-img-credit">[field_file_image_credit_text]</div>
	<p>[field_nefo_interview_thema]</p>
	<div class="nefo-view-small-block-interview-link">[view_node]</div>
</div>
<div class="nefo-view-small-block-interview-nav">
	<div class="nefo-view-block-interview-link-all">[nothing_1]</div>
</div>';
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
  $handler->display->display_options['title'] = 'Nachrichten';
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
  /* Field: Content: Bild */
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
  $view->name = 'nefo_view_block_newsbiodiv';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block News Bio-Div';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bio-Div Nachrichten';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-block-newsbiodiv-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="view-block-newsbiodiv-link-all">[nothing_1]</div>';
  $handler->display->display_options['footer']['area_text_custom']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-block-newsbiodiv-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Alle Bio-Div Nachrichten Link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Alle Bio-Div Nachrichten Link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'alle Bio-Div Nachrichten';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'news/bio-div';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'view-block-newsbiodiv-link-all';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
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
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '40',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'nefo_taxonomy_news';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_view_block_newsbiodiv'] = $view;

  $view = new view();
  $view->name = 'nefo_view_block_newsipbes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block News IPBES';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'IPBES News';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-block-newsipbes-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="view-block-newsipbes-link-all">[nothing_1]</div>';
  $handler->display->display_options['footer']['area_text_custom']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-block-newsipbes-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'alle IPBES News';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'schnittstellen/ipbes/news';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
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
    'nefo_news' => 'nefo_news',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '41',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'nefo_taxonomy_news';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_view_block_newsipbes'] = $view;

  $view = new view();
  $view->name = 'nefo_view_block_study';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block Studie';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Unsere Studien';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-block-study-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="view-block-study-link-all">[nothing_1]</div>';
  $handler->display->display_options['footer']['area_text_custom']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-block-study-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Alle Studien Link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Alle Studien Link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'alle Studien';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'schnittstellen/produkte/studien';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
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
    'nefo_product_study' => 'nefo_product_study',
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
  $export['nefo_view_block_study'] = $view;

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
  $handler->display->display_options['title'] = 'Presse';
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
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-article-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Bild (field_nefo_article_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['id'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['table'] = 'field_data_field_nefo_article_img';
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['field'] = 'field_nefo_article_img_fid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Erstellt am';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'nefo-view-list-article-date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'nefo_date_type_din5008';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
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
  /* Field: File: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_default_classes'] = FALSE;
  /* Field: File: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Content: Bild */
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
    'colorbox_node_style' => 'image_style_nefo_list_thumbnail',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'image_style_nefo_big',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'custom',
    'colorbox_caption_custom' => '[file:field-image-caption-text], [file:field-file-image-credit-text]',
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
  /* Field: Wrapper */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Wrapper';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="nefo-view-list-article-col2">
<div class="nefo-view-list-article-img">[field_nefo_article_img]</div>
<div class="nefo-view-list-article-img-caption">[field_image_caption_text]</div>
<div class="nefo-view-list-article-img-credit">[field_file_image_credit_text]</div>
</div>
<div class="nefo-view-list-article-col1">
[body]
<div class="nefo-view-list-article-link">[view_node]</div>
</div>';
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
  $handler->display->display_options['path'] = 'presse';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Presse';
  $handler->display->display_options['menu']['description'] = 'Presse';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nefo-top-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_view_list_article'] = $view;

  $view = new view();
  $view->name = 'nefo_view_list_factsheet';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle Faktenblätter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Faktenblätter';
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Typ */
  $handler->display->display_options['fields']['field_nefo_product_field_type']['id'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['table'] = 'field_data_field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['field'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_field_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_field_type']['element_default_classes'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['id'] = 'field_nefo_factsheet_link';
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['table'] = 'field_data_field_nefo_factsheet_link';
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['field'] = 'field_nefo_factsheet_link';
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['type'] = 'link_absolute';
  /* Field: Content: Dokument */
  $handler->display->display_options['fields']['field_nefo_factsheet']['id'] = 'field_nefo_factsheet';
  $handler->display->display_options['fields']['field_nefo_factsheet']['table'] = 'field_data_field_nefo_factsheet';
  $handler->display->display_options['fields']['field_nefo_factsheet']['field'] = 'field_nefo_factsheet';
  $handler->display->display_options['fields']['field_nefo_factsheet']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_factsheet']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_factsheet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_factsheet']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_factsheet']['empty'] = '[field_nefo_factsheet_link]';
  $handler->display->display_options['fields']['field_nefo_factsheet']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_factsheet']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_nefo_factsheet']['settings'] = array(
    'text' => 'Download [file:name]',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_nefo_factsheet]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_nefo_product_icon']['id'] = 'field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['table'] = 'field_data_field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['field'] = 'field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['path'] = '[field_nefo_factsheet]';
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_nefo_product_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_product_icon']['settings'] = array(
    'image_style' => 'image_style_nefo_product_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Beschreibung */
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
    'field_nefo_product_field_type' => 0,
    'field_nefo_factsheet_link' => 0,
    'field_nefo_factsheet' => 0,
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
    'nefo_product_factsheet' => 'nefo_product_factsheet',
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
  $handler->display->display_options['path'] = 'schnittstellen/produkte/faktenblaetter';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Faktenblätter';
  $handler->display->display_options['menu']['description'] = 'Faktenblätter';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_view_list_factsheet'] = $view;

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
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-interview-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Bild (field_nefo_interview_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['id'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['table'] = 'field_data_field_nefo_interview_img';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['field'] = 'field_nefo_interview_img_fid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Erstellt am';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'nefo-view-list-interview-date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'nefo_date_type_din5008';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Thema (Zitat) */
  $handler->display->display_options['fields']['field_nefo_interview_thema']['id'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['table'] = 'field_data_field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['field'] = 'field_nefo_interview_thema';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_thema']['type'] = 'text_plain';
  /* Field: Content: Im NeFo-Interview */
  $handler->display->display_options['fields']['field_nefo_interview_with']['id'] = 'field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['table'] = 'field_data_field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['field'] = 'field_nefo_interview_with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_with']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['alter']['text'] = 'Interview mit [field_nefo_interview_with]';
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_class'] = 'nefo-view-list-interview-with';
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_with']['type'] = 'text_plain';
  /* Field: Content: Body */
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
  /* Field: File: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_default_classes'] = FALSE;
  /* Field: File: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Content: Bild */
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
    'colorbox_node_style' => 'image_style_nefo_list_thumbnail',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'image_style_nefo_big',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'custom',
    'colorbox_caption_custom' => '[file:field-image-caption-text], [file:field-file-image-credit-text]',
  );
  /* Field: Wrapper */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Wrapper';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="nefo-view-list-interview-col2">
<div class="nefo-view-list-interview-img">[field_nefo_interview_img]</div>
<div class="nefo-view-list-interview-img-caption">[field_image_caption_text]</div>
<div class="nefo-view-list-interview-img-credit">[field_file_image_credit_text]</div>
</div>
<div class="nefo-view-list-interview-col1">
[body]
<div class="nefo-view-list-interview-link">[view_node]</div>
</div>';
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
  /* Field: Content: Bild */
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
  /* Field: Content: Ziel-URL */
  $handler->display->display_options['fields']['field_nefo_target_url']['id'] = 'field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['table'] = 'field_data_field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['field'] = 'field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_target_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_target_url']['alter']['text'] = 'Mehr';
  $handler->display->display_options['fields']['field_nefo_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['click_sort_column'] = 'url';
  /* Field: Content: Beschreibung */
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
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-news-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Bild (field_nefo_news_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['id'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['table'] = 'field_data_field_nefo_news_img';
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['field'] = 'field_nefo_news_img_fid';
  /* Field: Content: Kategorie */
  $handler->display->display_options['fields']['field_nefo_news_category']['id'] = 'field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['table'] = 'field_data_field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['field'] = 'field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_news_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_category']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_news_category']['element_wrapper_class'] = 'nefo-view-list-news-category';
  $handler->display->display_options['fields']['field_nefo_news_category']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Erstellt am';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'nefo-view-list-news-date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'nefo_date_type_din5008';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
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
  $handler->display->display_options['fields']['view_node']['text'] = 'mehr';
  /* Field: Content: Body */
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
  /* Field: Content: Ziel-URL */
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
  /* Field: File: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_default_classes'] = FALSE;
  /* Field: File: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Content: Bild */
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
    'colorbox_node_style' => 'image_style_nefo_list_thumbnail',
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
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="nefo-view-list-news-col2">
<div class="nefo-view-list-news-img">[field_nefo_news_img]</div>
</div>
<div class="nefo-view-list-news-col1">
[body]
<div class="nefo-view-list-news-link">[field_nefo_target_url]</div>
</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'nefo-view-list-news-content';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
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
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-news-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Bild (field_nefo_news_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['id'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['table'] = 'field_data_field_nefo_news_img';
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['field'] = 'field_nefo_news_img_fid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Erstellt am';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'nefo-view-list-news-date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'nefo_date_type_din5008';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Kategorie */
  $handler->display->display_options['fields']['field_nefo_news_category']['id'] = 'field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['table'] = 'field_data_field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['field'] = 'field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_news_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_news_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_category']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_news_category']['element_wrapper_class'] = 'nefo-view-list-news-category';
  $handler->display->display_options['fields']['field_nefo_news_category']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
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
  $handler->display->display_options['fields']['view_node']['text'] = 'mehr';
  /* Field: Content: Ziel-URL */
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
  /* Field: File: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_default_classes'] = FALSE;
  /* Field: File: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Content: Bild */
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
    'colorbox_node_style' => 'image_style_nefo_list_thumbnail',
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
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="nefo-view-list-news-col2">
<div class="nefo-view-list-news-img">[field_nefo_news_img]</div>
</div>
<div class="nefo-view-list-news-col1">
[body]
<div class="nefo-view-list-news-link">[field_nefo_target_url]</div>
</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'nefo-view-list-news-content';
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
  $view->name = 'nefo_view_list_opinion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle Stellungnahmen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stellungnahmen';
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Stellungnahme */
  $handler->display->display_options['fields']['field_nefo_opinion']['id'] = 'field_nefo_opinion';
  $handler->display->display_options['fields']['field_nefo_opinion']['table'] = 'field_data_field_nefo_opinion';
  $handler->display->display_options['fields']['field_nefo_opinion']['field'] = 'field_nefo_opinion';
  $handler->display->display_options['fields']['field_nefo_opinion']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_opinion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_opinion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_opinion']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_opinion']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_opinion']['type'] = 'file_url_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_nefo_opinion]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_nefo_product_icon']['id'] = 'field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['table'] = 'field_data_field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['field'] = 'field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['path'] = '[field_nefo_opinion]';
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_nefo_product_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_product_icon']['settings'] = array(
    'image_style' => 'image_style_nefo_product_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Beschreibung */
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
    'field_nefo_opinion' => 0,
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
    'nefo_product_opinion' => 'nefo_product_opinion',
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
  $handler->display->display_options['path'] = 'schnittstellen/produkte/stellungnahmen';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Stellungnahmen';
  $handler->display->display_options['menu']['description'] = 'Stellungnahmen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_view_list_opinion'] = $view;

  $view = new view();
  $view->name = 'nefo_view_list_press_release';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle Pressemitteilungen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Eigene Pressemitteilungen';
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
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-press-release-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Bild (field_nefo_press_release_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_press_release_img_fid']['id'] = 'field_nefo_press_release_img_fid';
  $handler->display->display_options['relationships']['field_nefo_press_release_img_fid']['table'] = 'field_data_field_nefo_press_release_img';
  $handler->display->display_options['relationships']['field_nefo_press_release_img_fid']['field'] = 'field_nefo_press_release_img_fid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Erstellt am';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'nefo-view-list-press-release-date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'nefo_date_type_din5008';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
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
  /* Field: File: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_press_release_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  /* Field: File: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_press_release_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = 'Foto';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_nefo_press_release_img']['id'] = 'field_nefo_press_release_img';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['table'] = 'field_data_field_nefo_press_release_img';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['field'] = 'field_nefo_press_release_img';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_press_release_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_press_release_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['settings'] = array(
    'colorbox_node_style' => 'image_style_nefo_list_thumbnail',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'image_style_nefo_big',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'custom',
    'colorbox_caption_custom' => '[file:field-image-caption-text], [file:field-file-image-credit-text]',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'nefo-view-list-press-release-link';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Weiterlesen';
  /* Field: Wrapper */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Wrapper';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="nefo-view-list-press-release-col2">
<div class="nefo-view-list-press-release-img">[field_nefo_press_release_img]</div>
<div class="nefo-view-list-press-release-img-caption">[field_image_caption_text]</div>
<div class="nefo-view-list-press-release-img-credit">[field_file_image_credit_text]</div>
</div>
<div class="nefo-view-list-press-release-col1">
[body]
<div class="nefo-view-list-press-release-link">[view_node]</div>
</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'nefo-view-list-press-release-content';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
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
    'nefo_product_press_release' => 'nefo_product_press_release',
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
  $handler->display->display_options['path'] = 'presse/pressemitteilungen';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Eigene Pressemitteilungen';
  $handler->display->display_options['menu']['description'] = 'Eigene Pressemitteilungen';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-nefo-top-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_view_list_press_release'] = $view;

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
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['type']['element_wrapper_class'] = 'nefo-view-list-product-icon';
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
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
    'nefo_product_article' => 'nefo_product_article',
    'nefo_product_report' => 'nefo_product_report',
    'nefo_product_factsheet' => 'nefo_product_factsheet',
    'nefo_product_interview' => 'nefo_product_interview',
    'nefo_product_press_release' => 'nefo_product_press_release',
    'nefo_product_opinion' => 'nefo_product_opinion',
    'nefo_product_study' => 'nefo_product_study',
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
  $view->name = 'nefo_view_list_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle Berichte ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Berichte ';
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
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-document-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Typ */
  $handler->display->display_options['fields']['field_nefo_product_field_type']['id'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['table'] = 'field_data_field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['field'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_field_type']['element_label_colon'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_nefo_report_url']['id'] = 'field_nefo_report_url';
  $handler->display->display_options['fields']['field_nefo_report_url']['table'] = 'field_data_field_nefo_report_url';
  $handler->display->display_options['fields']['field_nefo_report_url']['field'] = 'field_nefo_report_url';
  $handler->display->display_options['fields']['field_nefo_report_url']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_report_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_report_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_report_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nefo_report_url']['type'] = 'link_absolute';
  /* Field: Content: Dokument */
  $handler->display->display_options['fields']['field_nefo_report_file']['id'] = 'field_nefo_report_file';
  $handler->display->display_options['fields']['field_nefo_report_file']['table'] = 'field_data_field_nefo_report_file';
  $handler->display->display_options['fields']['field_nefo_report_file']['field'] = 'field_nefo_report_file';
  $handler->display->display_options['fields']['field_nefo_report_file']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_report_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_report_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_report_file']['empty'] = '[field_nefo_report_url]';
  $handler->display->display_options['fields']['field_nefo_report_file']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_report_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_report_file']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_nefo_report_file']['settings'] = array(
    'text' => 'Download [file:name]',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_nefo_report_file]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_nefo_product_icon']['id'] = 'field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['table'] = 'field_data_field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['field'] = 'field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['path'] = '[field_nefo_report_file]';
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_nefo_product_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_product_icon']['settings'] = array(
    'image_style' => 'image_style_nefo_product_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Beschreibung */
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
    'field_nefo_product_field_type' => 0,
    'field_nefo_report_url' => 0,
    'field_nefo_report_file' => 0,
    'title' => 0,
    'field_nefo_description' => 0,
    'field_nefo_report_cat' => 0,
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
    'nefo_product_report' => 'nefo_product_report',
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
  $handler->display->display_options['path'] = 'schnittstellen/produkte/berichte';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Berichte';
  $handler->display->display_options['menu']['description'] = 'Berichte';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_view_list_report'] = $view;

  $view = new view();
  $view->name = 'nefo_view_list_study';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle Studien';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Studien';
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Studie */
  $handler->display->display_options['fields']['field_nefo_study']['id'] = 'field_nefo_study';
  $handler->display->display_options['fields']['field_nefo_study']['table'] = 'field_data_field_nefo_study';
  $handler->display->display_options['fields']['field_nefo_study']['field'] = 'field_nefo_study';
  $handler->display->display_options['fields']['field_nefo_study']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_study']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_study']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_study']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_study']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_study']['type'] = 'file_url_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_nefo_study]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Bild */
  $handler->display->display_options['fields']['field_nefo_product_icon']['id'] = 'field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['table'] = 'field_data_field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['field'] = 'field_nefo_product_icon';
  $handler->display->display_options['fields']['field_nefo_product_icon']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['path'] = '[field_nefo_study]';
  $handler->display->display_options['fields']['field_nefo_product_icon']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_nefo_product_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_product_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_product_icon']['settings'] = array(
    'image_style' => 'image_style_nefo_product_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Beschreibung */
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
    'field_nefo_study' => 0,
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
    'nefo_product_study' => 'nefo_product_study',
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
  $handler->display->display_options['path'] = 'schnittstellen/produkte/studien';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Studien';
  $handler->display->display_options['menu']['description'] = 'Studien';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_view_list_study'] = $view;

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
  /* Field: Content: Typ */
  $handler->display->display_options['fields']['field_nefo_product_field_type']['id'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['table'] = 'field_data_field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['field'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_field_type']['element_label_colon'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_nefo_workshop_url']['id'] = 'field_nefo_workshop_url';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['table'] = 'field_data_field_nefo_workshop_url';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['field'] = 'field_nefo_workshop_url';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_workshop_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_workshop_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['type'] = 'link_absolute';
  /* Field: Content: Dokument */
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
  /* Field: Content: Beschreibung */
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

  return $export;
}
