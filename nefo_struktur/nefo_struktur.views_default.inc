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
  /* Beziehung: Inhalt: Bild (field_nefo_article_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['id'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['table'] = 'field_data_field_nefo_article_img';
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['field'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['required'] = TRUE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Bild */
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
  /* Feld: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Body */
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
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'zum Artikel';
  /* Feld: Alle Artikel Link */
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
  /* Feld: Wrapper Col1 */
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
  /* Feld: Wrapper Col2 */
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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'nefo_product_article' => 'nefo_product_article',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  /* Beziehung: Inhalt: Bild (field_nefo_press_release_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_press_release_img_fid']['id'] = 'field_nefo_press_release_img_fid';
  $handler->display->display_options['relationships']['field_nefo_press_release_img_fid']['table'] = 'field_data_field_nefo_press_release_img';
  $handler->display->display_options['relationships']['field_nefo_press_release_img_fid']['field'] = 'field_nefo_press_release_img_fid';
  $handler->display->display_options['relationships']['field_nefo_press_release_img_fid']['required'] = TRUE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Bild */
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
  /* Feld: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_press_release_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = 'Foto';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Body */
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
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'zur Pressemitteilung';
  /* Feld: Alle Pressemitteilungen Link */
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
  /* Feld: Wrapper Col1 */
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
  /* Feld: Wrapper Col2 */
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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'nefo_product_press_release' => 'nefo_product_press_release',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  /* Feld: Inhalt: Ziel-URL */
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['id'] = 'field_nefo_slideshow_target_url_1';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['table'] = 'field_data_field_nefo_slideshow_target_url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['field'] = 'field_nefo_slideshow_target_url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url_1']['type'] = 'link_absolute';
  /* Feld: Inhalt: Bild */
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['id'] = 'field_nefo_slideshow_img';
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['table'] = 'field_data_field_nefo_slideshow_img';
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['field'] = 'field_nefo_slideshow_img';
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['alter']['path'] = '[field_nefo_slideshow_target_url_1]';
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_slideshow_img']['settings'] = array(
    'image_style' => 'image_style_nefo_main_slideshow',
    'image_link' => '',
  );
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['id'] = 'field_nefo_slideshow_desc';
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['table'] = 'field_data_field_nefo_slideshow_desc';
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['field'] = 'field_nefo_slideshow_desc';
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slideshow_desc']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Ziel-URL */
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url']['id'] = 'field_nefo_slideshow_target_url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url']['table'] = 'field_data_field_nefo_slideshow_target_url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url']['field'] = 'field_nefo_slideshow_target_url';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slideshow_target_url']['click_sort_column'] = 'url';
  /* Feld: Global: Benutzerdefinierter Text */
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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
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
  $view->name = 'nefo_view_block_factsheet';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block Faktenblatt';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-block-factsheet-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_nefo_slide_factsheet_refer_target_id_1']['id'] = 'field_nefo_slide_factsheet_refer_target_id_1';
  $handler->display->display_options['relationships']['field_nefo_slide_factsheet_refer_target_id_1']['table'] = 'field_data_field_nefo_slide_factsheet_refer';
  $handler->display->display_options['relationships']['field_nefo_slide_factsheet_refer_target_id_1']['field'] = 'field_nefo_slide_factsheet_refer_target_id';
  $handler->display->display_options['relationships']['field_nefo_slide_factsheet_refer_target_id_1']['label'] = 'Gehört zum Faktenblatt';
  $handler->display->display_options['relationships']['field_nefo_slide_factsheet_refer_target_id_1']['required'] = TRUE;
  /* Feld: Inhalt: Bild */
  $handler->display->display_options['fields']['field_nefo_slide_factsheet_img']['id'] = 'field_nefo_slide_factsheet_img';
  $handler->display->display_options['fields']['field_nefo_slide_factsheet_img']['table'] = 'field_data_field_nefo_slide_factsheet_img';
  $handler->display->display_options['fields']['field_nefo_slide_factsheet_img']['field'] = 'field_nefo_slide_factsheet_img';
  $handler->display->display_options['fields']['field_nefo_slide_factsheet_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slide_factsheet_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slide_factsheet_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_factsheet_img']['element_wrapper_class'] = 'nefo-view-block-factsheet-img';
  $handler->display->display_options['fields']['field_nefo_slide_factsheet_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_factsheet_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_slide_factsheet_img']['settings'] = array(
    'image_style' => 'image_style_nefo_frontpage_block',
    'image_link' => '',
  );
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_nefo_slide_factsheet_refer_target_id_1';
  $handler->display->display_options['fields']['view_node']['label'] = 'Bild';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[field_nefo_slide_factsheet_img]';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'nefo-view-block-factsheet-img';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['relationship'] = 'field_nefo_slide_factsheet_refer_target_id_1';
  $handler->display->display_options['fields']['view_node_1']['label'] = 'Titel';
  $handler->display->display_options['fields']['view_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['view_node_1']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['id'] = 'field_nefo_slide_product_desc';
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['table'] = 'field_data_field_nefo_slide_product_desc';
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['field'] = 'field_nefo_slide_product_desc';
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node_2']['id'] = 'view_node_2';
  $handler->display->display_options['fields']['view_node_2']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_2']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_2']['relationship'] = 'field_nefo_slide_factsheet_refer_target_id_1';
  $handler->display->display_options['fields']['view_node_2']['label'] = 'Absteigend';
  $handler->display->display_options['fields']['view_node_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_2']['alter']['text'] = '[field_nefo_slide_product_desc]';
  $handler->display->display_options['fields']['view_node_2']['element_default_classes'] = FALSE;
  /* Feld: Alle Faktenblätter Link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Alle Faktenblätter Link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'alle Faktenblätter';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'schnittstellen/produkte/faktenblaetter';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Feld: Wrapper 1 */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Wrapper 1';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="nefo-view-block-factsheet-img">[view_node]</div>
<div class="nefo-view-block-factsheet-text">
<div class="nefo-view-block-factsheet-title">[view_node_1]</div>
<div class="nefo-view-block-factsheet-desc">[view_node_2]</div>
</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'nefo-view-block-factsheet-content';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Feld: Wrapper 2 */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Wrapper 2';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<span class="nefo-view-block-factsheet-link-all">[nothing_1]</span>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'nefo-view-block-factsheet-nav';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_slide_factsheet' => 'nefo_slide_factsheet',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_view_block_factsheet'] = $view;

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
  /* Beziehung: Inhalt: Bild (field_nefo_interview_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['id'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['table'] = 'field_data_field_nefo_interview_img';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['field'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['required'] = TRUE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Bild */
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
  /* Feld: Inhalt: Body */
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
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'zum Interview';
  /* Feld: Alle Interviews Link */
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
  /* Feld: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Feld: Wrapper Col1 */
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
  /* Feld: Wrapper Col2 */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Wrapper Col2';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<h3 class="nefo-view-block-interview-title">[title]</h3>
[body]
<div class="nefo-view-block-interview-nav">
<span class="nefo-view-block-interview-link">[view_node]</span>
<span class="nefo-view-block-interview-link-all">[nothing_1]</span>
</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'nefo-view-block-interview-col2';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_interview' => 'nefo_product_interview',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  /* Feld: Inhalt: Titel */
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
  /* Feld: Inhalt: Bild */
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
  /* Feld: Inhalt: Link */
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
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'nefo-view-block-news-desc';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_news' => 'nefo_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  /* Fußbereich: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="view-block-newsbiodiv-link-all">[nothing_1]</div>';
  $handler->display->display_options['footer']['area_text_custom']['tokenize'] = TRUE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-block-newsbiodiv-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Feld: Alle Bio-Div Nachrichten Link */
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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_news' => 'nefo_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Hat einen Taxonomiebegriff */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '40',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'nefo_taxonomy_news';
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  $handler->display->display_options['title'] = 'IPBES Nachrichten';
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
  /* Fußbereich: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="view-block-newsipbes-link-all">[nothing_1]</div>';
  $handler->display->display_options['footer']['area_text_custom']['tokenize'] = TRUE;
  /* Feld: Inhalt: Titel */
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
  /* Feld: Global: Benutzerdefinierter Text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'alle IPBES Nachrichten';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'schnittstellen/ipbes/news';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_news' => 'nefo_news',
  );
  /* Filterkriterium: Inhalt: Hat einen Taxonomiebegriff */
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
  $view->name = 'nefo_view_block_opinion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block Stellungnahme';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-block-opinion-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_nefo_slide_opinion_refer_target_id']['id'] = 'field_nefo_slide_opinion_refer_target_id';
  $handler->display->display_options['relationships']['field_nefo_slide_opinion_refer_target_id']['table'] = 'field_data_field_nefo_slide_opinion_refer';
  $handler->display->display_options['relationships']['field_nefo_slide_opinion_refer_target_id']['field'] = 'field_nefo_slide_opinion_refer_target_id';
  $handler->display->display_options['relationships']['field_nefo_slide_opinion_refer_target_id']['label'] = 'Gehört zur Stellungnahme';
  $handler->display->display_options['relationships']['field_nefo_slide_opinion_refer_target_id']['required'] = TRUE;
  /* Feld: Inhalt: Bild */
  $handler->display->display_options['fields']['field_nefo_slide_opinion_img']['id'] = 'field_nefo_slide_opinion_img';
  $handler->display->display_options['fields']['field_nefo_slide_opinion_img']['table'] = 'field_data_field_nefo_slide_opinion_img';
  $handler->display->display_options['fields']['field_nefo_slide_opinion_img']['field'] = 'field_nefo_slide_opinion_img';
  $handler->display->display_options['fields']['field_nefo_slide_opinion_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slide_opinion_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slide_opinion_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_opinion_img']['element_wrapper_class'] = 'nefo-view-block-opinion-img';
  $handler->display->display_options['fields']['field_nefo_slide_opinion_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_opinion_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_slide_opinion_img']['settings'] = array(
    'image_style' => 'image_style_nefo_frontpage_block',
    'image_link' => '',
  );
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_nefo_slide_opinion_refer_target_id';
  $handler->display->display_options['fields']['view_node']['label'] = 'Bild';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[field_nefo_slide_opinion_img]';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'nefo-view-block-opinion-img';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-block-opinion-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['relationship'] = 'field_nefo_slide_opinion_refer_target_id';
  $handler->display->display_options['fields']['view_node_1']['label'] = 'Titel';
  $handler->display->display_options['fields']['view_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['view_node_1']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['id'] = 'field_nefo_slide_product_desc';
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['table'] = 'field_data_field_nefo_slide_product_desc';
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['field'] = 'field_nefo_slide_product_desc';
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node_2']['id'] = 'view_node_2';
  $handler->display->display_options['fields']['view_node_2']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_2']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_2']['relationship'] = 'field_nefo_slide_opinion_refer_target_id';
  $handler->display->display_options['fields']['view_node_2']['label'] = 'Absteigend';
  $handler->display->display_options['fields']['view_node_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_2']['alter']['text'] = '[field_nefo_slide_product_desc]';
  $handler->display->display_options['fields']['view_node_2']['element_default_classes'] = FALSE;
  /* Feld: Alle Stellungnahmen Link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Alle Stellungnahmen Link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'alle Stellungnahmen';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'schnittstellen/produkte/stellungnahmen';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Feld: Wrapper 1 */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Wrapper 1';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="nefo-view-block-opinion-img">[view_node]</div>
<div class="nefo-view-block-opinion-text">
<div class="nefo-view-block-opinion-title">[view_node_1]</div>
<div class="nefo-view-block-opinion-desc">[view_node_2]</div>
</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'nefo-view-block-opinion-content';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Feld: Wrapper 2 */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Wrapper 2';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<span class="nefo-view-block-opinion-link-all">[nothing_1]</span>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'nefo-view-block-opinion-nav';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_slide_opinion' => 'nefo_slide_opinion',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_view_block_opinion'] = $view;

  $view = new view();
  $view->name = 'nefo_view_block_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Block Bericht';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Berichte';
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
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-block-report-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Beziehung: Entity Reference: Entität, auf die verwiesen wird */
  $handler->display->display_options['relationships']['field_nefo_slide_report_refer_target_id']['id'] = 'field_nefo_slide_report_refer_target_id';
  $handler->display->display_options['relationships']['field_nefo_slide_report_refer_target_id']['table'] = 'field_data_field_nefo_slide_report_refer';
  $handler->display->display_options['relationships']['field_nefo_slide_report_refer_target_id']['field'] = 'field_nefo_slide_report_refer_target_id';
  $handler->display->display_options['relationships']['field_nefo_slide_report_refer_target_id']['label'] = 'Gehört zum Bericht';
  $handler->display->display_options['relationships']['field_nefo_slide_report_refer_target_id']['required'] = TRUE;
  /* Feld: Inhalt: Bild */
  $handler->display->display_options['fields']['field_nefo_slide_report_img']['id'] = 'field_nefo_slide_report_img';
  $handler->display->display_options['fields']['field_nefo_slide_report_img']['table'] = 'field_data_field_nefo_slide_report_img';
  $handler->display->display_options['fields']['field_nefo_slide_report_img']['field'] = 'field_nefo_slide_report_img';
  $handler->display->display_options['fields']['field_nefo_slide_report_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slide_report_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slide_report_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_report_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_report_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_slide_report_img']['settings'] = array(
    'image_style' => 'image_style_nefo_frontpage_block',
    'image_link' => '',
  );
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_nefo_slide_report_refer_target_id';
  $handler->display->display_options['fields']['view_node']['label'] = 'Bild';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[field_nefo_slide_report_img]';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'nefo-view-block-report-img';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-block-report-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['relationship'] = 'field_nefo_slide_report_refer_target_id';
  $handler->display->display_options['fields']['view_node_1']['label'] = 'Titel';
  $handler->display->display_options['fields']['view_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['view_node_1']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['id'] = 'field_nefo_slide_product_desc';
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['table'] = 'field_data_field_nefo_slide_product_desc';
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['field'] = 'field_nefo_slide_product_desc';
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_slide_product_desc']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node_2']['id'] = 'view_node_2';
  $handler->display->display_options['fields']['view_node_2']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_2']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_2']['relationship'] = 'field_nefo_slide_report_refer_target_id';
  $handler->display->display_options['fields']['view_node_2']['label'] = 'Absteigend';
  $handler->display->display_options['fields']['view_node_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node_2']['alter']['text'] = '[field_nefo_slide_product_desc]';
  $handler->display->display_options['fields']['view_node_2']['element_default_classes'] = FALSE;
  /* Feld: Alle Berichte Link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Alle Berichte Link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'alle Berichte';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'schnittstellen/produkte/berichte';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Feld: Wrapper 1 */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Wrapper 1';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="nefo-view-block-report-img">[view_node]</div>
<div class="nefo-view-block-report-text">
<div class="nefo-view-block-report-title">[view_node_1]</div>
<div class="nefo-view-block-report-desc">[view_node_2]</div>
</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'nefo-view-block-report-content';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Feld: Wrapper 2 */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Wrapper 2';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<span class="nefo-view-block-report-link-all">[nothing_1]</span>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'nefo-view-block-report-nav';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_slide_report' => 'nefo_slide_report',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nefo_view_block_report'] = $view;

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
  /* Fußbereich: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="view-block-study-link-all">[nothing_1]</div>';
  $handler->display->display_options['footer']['area_text_custom']['tokenize'] = TRUE;
  /* Feld: Inhalt: Titel */
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
  /* Feld: Alle Studien Link */
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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_study' => 'nefo_product_study',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  /* Beziehung: Inhalt: Bild (field_nefo_article_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['id'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['table'] = 'field_data_field_nefo_article_img';
  $handler->display->display_options['relationships']['field_nefo_article_img_fid']['field'] = 'field_nefo_article_img_fid';
  /* Feld: Inhalt: Beitragsdatum */
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
  /* Feld: Inhalt: Titel */
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
  /* Feld: Inhalt: Body */
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
  /* Feld: Inhalt: Bild */
  $handler->display->display_options['fields']['field_nefo_article_img']['id'] = 'field_nefo_article_img';
  $handler->display->display_options['fields']['field_nefo_article_img']['table'] = 'field_data_field_nefo_article_img';
  $handler->display->display_options['fields']['field_nefo_article_img']['field'] = 'field_nefo_article_img';
  $handler->display->display_options['fields']['field_nefo_article_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_article_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_article_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_article_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_article_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_article_img']['settings'] = array(
    'image_style' => 'image_style_nefo_list_thumbnail',
    'image_link' => '',
  );
  /* Feld: Datei: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_default_classes'] = FALSE;
  /* Feld: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_article_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Weiterlesen';
  /* Feld: Wrapper */
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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'nefo_product_article' => 'nefo_product_article',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-factsheet-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Feld: Inhalt: Typ */
  $handler->display->display_options['fields']['field_nefo_product_field_type']['id'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['table'] = 'field_data_field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['field'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_field_type']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: URL */
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['id'] = 'field_nefo_factsheet_link';
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['table'] = 'field_data_field_nefo_factsheet_link';
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['field'] = 'field_nefo_factsheet_link';
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nefo_factsheet_link']['type'] = 'link_absolute';
  /* Feld: Inhalt: Dokument */
  $handler->display->display_options['fields']['field_nefo_factsheet']['id'] = 'field_nefo_factsheet';
  $handler->display->display_options['fields']['field_nefo_factsheet']['table'] = 'field_data_field_nefo_factsheet';
  $handler->display->display_options['fields']['field_nefo_factsheet']['field'] = 'field_nefo_factsheet';
  $handler->display->display_options['fields']['field_nefo_factsheet']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_factsheet']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_factsheet']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_factsheet']['empty'] = '[field_nefo_factsheet_link]';
  $handler->display->display_options['fields']['field_nefo_factsheet']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_factsheet']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_nefo_factsheet']['settings'] = array(
    'text' => 'Download [file:name]',
  );
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_nefo_factsheet]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-list-factsheet-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_description']['id'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['table'] = 'field_data_field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['field'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_description']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_description']['element_wrapper_class'] = 'nefo-view-block-factsheet-desc';
  $handler->display->display_options['fields']['field_nefo_description']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Feld: Global: Contextual Links */
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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_factsheet' => 'nefo_product_factsheet',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  /* Beziehung: Inhalt: Bild (field_nefo_interview_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['id'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['table'] = 'field_data_field_nefo_interview_img';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['field'] = 'field_nefo_interview_img_fid';
  /* Feld: Inhalt: Monat */
  $handler->display->display_options['fields']['field_nefo_interview_month']['id'] = 'field_nefo_interview_month';
  $handler->display->display_options['fields']['field_nefo_interview_month']['table'] = 'field_data_field_nefo_interview_month';
  $handler->display->display_options['fields']['field_nefo_interview_month']['field'] = 'field_nefo_interview_month';
  $handler->display->display_options['fields']['field_nefo_interview_month']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_month']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_month']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_month']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Kategorie */
  $handler->display->display_options['fields']['field_nefo_interview_category']['id'] = 'field_nefo_interview_category';
  $handler->display->display_options['fields']['field_nefo_interview_category']['table'] = 'field_data_field_nefo_interview_category';
  $handler->display->display_options['fields']['field_nefo_interview_category']['field'] = 'field_nefo_interview_category';
  $handler->display->display_options['fields']['field_nefo_interview_category']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_category']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_interview_category']['element_wrapper_class'] = 'nefo-view-list-interview-category';
  $handler->display->display_options['fields']['field_nefo_interview_category']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Body */
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
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Weiterlesen';
  /* Feld: Inhalt: Bild */
  $handler->display->display_options['fields']['field_nefo_interview_img']['id'] = 'field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['table'] = 'field_data_field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['field'] = 'field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_interview_img']['settings'] = array(
    'image_style' => 'image_style_nefo_list_thumbnail',
    'image_link' => '',
  );
  /* Feld: Datei: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_default_classes'] = FALSE;
  /* Feld: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Feld: Wrapper */
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
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Feld: Global: Contextual Links */
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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_interview' => 'nefo_product_interview',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Kategorie (field_nefo_interview_category) */
  $handler->display->display_options['filters']['field_nefo_interview_category_tid']['id'] = 'field_nefo_interview_category_tid';
  $handler->display->display_options['filters']['field_nefo_interview_category_tid']['table'] = 'field_data_field_nefo_interview_category';
  $handler->display->display_options['filters']['field_nefo_interview_category_tid']['field'] = 'field_nefo_interview_category_tid';
  $handler->display->display_options['filters']['field_nefo_interview_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nefo_interview_category_tid']['expose']['operator_id'] = 'field_nefo_interview_category_tid_op';
  $handler->display->display_options['filters']['field_nefo_interview_category_tid']['expose']['label'] = 'Kategorie:';
  $handler->display->display_options['filters']['field_nefo_interview_category_tid']['expose']['operator'] = 'field_nefo_interview_category_tid_op';
  $handler->display->display_options['filters']['field_nefo_interview_category_tid']['expose']['identifier'] = 'interviewcattid';
  $handler->display->display_options['filters']['field_nefo_interview_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_nefo_interview_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nefo_interview_category_tid']['vocabulary'] = 'nefo_taxonomy_interview';

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
  $view->name = 'nefo_view_list_interviews_by_term';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NeFo-Übersichtstabelle Interviews per Begriff';
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
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_nefo_interview_month',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-interview-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Fußbereich: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div class="nefo-view-list-interview-link-all">[nothing_2]</div>';
  $handler->display->display_options['footer']['area_text_custom']['tokenize'] = TRUE;
  /* Beziehung: Inhalt: Bild (field_nefo_interview_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['id'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['table'] = 'field_data_field_nefo_interview_img';
  $handler->display->display_options['relationships']['field_nefo_interview_img_fid']['field'] = 'field_nefo_interview_img_fid';
  /* Feld: Inhalt: Monat */
  $handler->display->display_options['fields']['field_nefo_interview_month']['id'] = 'field_nefo_interview_month';
  $handler->display->display_options['fields']['field_nefo_interview_month']['table'] = 'field_data_field_nefo_interview_month';
  $handler->display->display_options['fields']['field_nefo_interview_month']['field'] = 'field_nefo_interview_month';
  $handler->display->display_options['fields']['field_nefo_interview_month']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_month']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_month']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_month']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Body */
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
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Weiterlesen';
  /* Feld: Alle Interviews Link */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Alle Interviews Link';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'alle Interviews';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '/schnittstellen/produkte/interviews';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Bild */
  $handler->display->display_options['fields']['field_nefo_interview_img']['id'] = 'field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['table'] = 'field_data_field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['field'] = 'field_nefo_interview_img';
  $handler->display->display_options['fields']['field_nefo_interview_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_interview_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_interview_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_interview_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_interview_img']['settings'] = array(
    'image_style' => 'image_style_nefo_list_thumbnail',
    'image_link' => '',
  );
  /* Feld: Datei: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_default_classes'] = FALSE;
  /* Feld: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_interview_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Feld: Wrapper */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Wrapper';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="nefo-view-list-interview-col2">
<div class="nefo-view-list-interview-img">[field_nefo_interview_img]</div>
<div class="nefo-view-list-interview-img-caption">[field_image_caption_text]</div>
<div class="nefo-view-list-interview-img-credit">[field_file_image_credit_text]</div>
</div>
<div class="nefo-view-list-interview-col1">
[body]
<div class="nefo-view-list-interview-link">[view_node]</div>
</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'nefo-view-list-interview-content';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Sortierkriterien: Inhalt: Monat (field_nefo_interview_month) */
  $handler->display->display_options['sorts']['field_nefo_interview_month_value']['id'] = 'field_nefo_interview_month_value';
  $handler->display->display_options['sorts']['field_nefo_interview_month_value']['table'] = 'field_data_field_nefo_interview_month';
  $handler->display->display_options['sorts']['field_nefo_interview_month_value']['field'] = 'field_nefo_interview_month_value';
  $handler->display->display_options['sorts']['field_nefo_interview_month_value']['order'] = 'DESC';
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontextfilter: Inhalt: Has taxonomy term ID (with depth) */
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
    'nefo_taxonomy_interview' => 'nefo_taxonomy_interview',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  /* Kontextfilter: Inhalt: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_interview' => 'nefo_product_interview',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'schnittstellen/produkte/interviews/%';
  $handler->display->display_options['menu']['title'] = 'Interviews';
  $handler->display->display_options['menu']['description'] = 'Interviews';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['nefo_view_list_interviews_by_term'] = $view;

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
  /* Feld: Inhalt: Beitragsdatum */
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
  /* Feld: Inhalt: Bild */
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
  /* Feld: Inhalt: Titel */
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
  /* Feld: Inhalt: Ziel-URL */
  $handler->display->display_options['fields']['field_nefo_target_url']['id'] = 'field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['table'] = 'field_data_field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['field'] = 'field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_target_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_target_url']['alter']['text'] = 'Mehr';
  $handler->display->display_options['fields']['field_nefo_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['click_sort_column'] = 'url';
  /* Feld: Inhalt: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_description']['id'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['table'] = 'field_data_field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['field'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_description']['element_default_classes'] = FALSE;
  /* Feld: Wrapper Col1 */
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
  /* Feld: Wrapper Col2 */
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
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Feld: Global: Contextual Links */
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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_literature_tip' => 'nefo_product_literature_tip',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  /* Beziehung: Inhalt: Bild (field_nefo_news_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['id'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['table'] = 'field_data_field_nefo_news_img';
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['field'] = 'field_nefo_news_img_fid';
  /* Feld: Inhalt: Beitragsdatum */
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
  /* Feld: Inhalt: Titel */
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
  /* Feld: Inhalt: Kategorie */
  $handler->display->display_options['fields']['field_nefo_news_category']['id'] = 'field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['table'] = 'field_data_field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['field'] = 'field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_news_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_category']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_news_category']['element_wrapper_class'] = 'nefo-view-list-news-category';
  $handler->display->display_options['fields']['field_nefo_news_category']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Feld: Inhalt: Ziel-URL */
  $handler->display->display_options['fields']['field_nefo_target_url']['id'] = 'field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['table'] = 'field_data_field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['field'] = 'field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_target_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['click_sort_column'] = 'url';
  /* Feld: Inhalt: Bild */
  $handler->display->display_options['fields']['field_nefo_news_img']['id'] = 'field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['table'] = 'field_data_field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['field'] = 'field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_news_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_news_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_news_img']['settings'] = array(
    'image_style' => 'image_style_nefo_list_thumbnail',
    'image_link' => '',
  );
  /* Feld: Datei: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_default_classes'] = FALSE;
  /* Feld: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Feld: Wrapper */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Wrapper';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="nefo-view-list-news-col2">
<div class="nefo-view-list-news-img">[field_nefo_news_img]</div>
<div class="nefo-view-list-news-img-caption">[field_image_caption_text] </div>
<div class="nefo-view-list-news-img-credit">[field_file_image_credit_text]</div>
</div>
<div class="nefo-view-list-news-col1">
[body]
<div class="nefo-view-list-news-link">[field_nefo_target_url]</div>
</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'nefo-view-list-news-content';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_news' => 'nefo_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Kategorie (field_nefo_news_category) */
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['id'] = 'field_nefo_news_category_tid';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['table'] = 'field_data_field_nefo_news_category';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['field'] = 'field_nefo_news_category_tid';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['expose']['operator_id'] = 'field_nefo_news_category_tid_op';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['expose']['label'] = 'Kategorie:';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['expose']['operator'] = 'field_nefo_news_category_tid_op';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['expose']['identifier'] = 'newscattid';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nefo_news_category_tid']['vocabulary'] = 'nefo_taxonomy_news';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'News & Events';
  $handler->display->display_options['menu']['description'] = 'News & Events';
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
  /* Beziehung: Inhalt: Bild (field_nefo_news_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['id'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['table'] = 'field_data_field_nefo_news_img';
  $handler->display->display_options['relationships']['field_nefo_news_img_fid']['field'] = 'field_nefo_news_img_fid';
  /* Feld: Inhalt: Beitragsdatum */
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
  /* Feld: Inhalt: Titel */
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
  /* Feld: Inhalt: Kategorie */
  $handler->display->display_options['fields']['field_nefo_news_category']['id'] = 'field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['table'] = 'field_data_field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['field'] = 'field_nefo_news_category';
  $handler->display->display_options['fields']['field_nefo_news_category']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_news_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_news_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_category']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_news_category']['element_wrapper_class'] = 'nefo-view-list-news-category';
  $handler->display->display_options['fields']['field_nefo_news_category']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Ziel-URL */
  $handler->display->display_options['fields']['field_nefo_target_url']['id'] = 'field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['table'] = 'field_data_field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['field'] = 'field_nefo_target_url';
  $handler->display->display_options['fields']['field_nefo_target_url']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_target_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_target_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_target_url']['click_sort_column'] = 'url';
  /* Feld: Inhalt: Bild */
  $handler->display->display_options['fields']['field_nefo_news_img']['id'] = 'field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['table'] = 'field_data_field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['field'] = 'field_nefo_news_img';
  $handler->display->display_options['fields']['field_nefo_news_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_news_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_news_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_img']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_news_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_news_img']['settings'] = array(
    'image_style' => 'image_style_nefo_list_thumbnail',
    'image_link' => '',
  );
  /* Feld: Datei: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_default_classes'] = FALSE;
  /* Feld: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_news_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Feld: Wrapper */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Wrapper';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="nefo-view-list-news-col2">
<div class="nefo-view-list-news-img">[field_nefo_news_img]</div>
<div class="nefo-view-list-news-img-caption">[field_image_caption_text] </div>
<div class="nefo-view-list-news-img-credit">[field_file_image_credit_text]</div>
</div>
<div class="nefo-view-list-news-col1">
[body]
<div class="nefo-view-list-news-link">[field_nefo_target_url]</div>
</div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'nefo-view-list-news-content';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontextfilter: Inhalt: Has taxonomy term ID (with depth) */
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
  /* Kontextfilter: Inhalt: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_news' => 'nefo_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-opinion-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Feld: Inhalt: Stellungnahme */
  $handler->display->display_options['fields']['field_nefo_opinion']['id'] = 'field_nefo_opinion';
  $handler->display->display_options['fields']['field_nefo_opinion']['table'] = 'field_data_field_nefo_opinion';
  $handler->display->display_options['fields']['field_nefo_opinion']['field'] = 'field_nefo_opinion';
  $handler->display->display_options['fields']['field_nefo_opinion']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_opinion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_opinion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_opinion']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_opinion']['type'] = 'file_url_plain';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_nefo_opinion]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-list-opinion-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_description']['id'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['table'] = 'field_data_field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['field'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_description']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_description']['element_wrapper_class'] = 'nefo-view-list-opinion-desc';
  $handler->display->display_options['fields']['field_nefo_description']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Feld: Global: Contextual Links */
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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_opinion' => 'nefo_product_opinion',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  /* Beziehung: Inhalt: Bild (field_nefo_press_release_img:fid) */
  $handler->display->display_options['relationships']['field_nefo_press_release_img_fid']['id'] = 'field_nefo_press_release_img_fid';
  $handler->display->display_options['relationships']['field_nefo_press_release_img_fid']['table'] = 'field_data_field_nefo_press_release_img';
  $handler->display->display_options['relationships']['field_nefo_press_release_img_fid']['field'] = 'field_nefo_press_release_img_fid';
  /* Feld: Inhalt: Beitragsdatum */
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
  /* Feld: Inhalt: Titel */
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
  /* Feld: Inhalt: Body */
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
  /* Feld: Inhalt: Bild */
  $handler->display->display_options['fields']['field_nefo_press_release_img']['id'] = 'field_nefo_press_release_img';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['table'] = 'field_data_field_nefo_press_release_img';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['field'] = 'field_nefo_press_release_img';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_press_release_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_press_release_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_press_release_img']['settings'] = array(
    'image_style' => 'image_style_nefo_list_thumbnail',
    'image_link' => '',
  );
  /* Feld: Datei: Bildunterschrift */
  $handler->display->display_options['fields']['field_image_caption_text']['id'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['table'] = 'field_data_field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['field'] = 'field_image_caption_text';
  $handler->display->display_options['fields']['field_image_caption_text']['relationship'] = 'field_nefo_press_release_img_fid';
  $handler->display->display_options['fields']['field_image_caption_text']['label'] = '';
  $handler->display->display_options['fields']['field_image_caption_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_caption_text']['element_label_colon'] = FALSE;
  /* Feld: Datei: Image Credit */
  $handler->display->display_options['fields']['field_file_image_credit_text']['id'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['table'] = 'field_data_field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['field'] = 'field_file_image_credit_text';
  $handler->display->display_options['fields']['field_file_image_credit_text']['relationship'] = 'field_nefo_press_release_img_fid';
  $handler->display->display_options['fields']['field_file_image_credit_text']['label'] = 'Foto';
  $handler->display->display_options['fields']['field_file_image_credit_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_credit_text']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Link */
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
  /* Feld: Wrapper */
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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_press_release' => 'nefo_product_press_release',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-list-product-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Typ */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['type']['element_wrapper_class'] = 'nefo-view-list-product-icon';
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Beitragsdatum */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Erstellt am';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'nefo-view-list-product-date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'nefo_date_type_din5008';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontextfilter: Inhalt: Has taxonomy term ID (with depth) */
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
  /* Kontextfilter: Inhalt: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  /* Filterkriterium: Inhalt: Typ */
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
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-report-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Feld: Inhalt: Typ */
  $handler->display->display_options['fields']['field_nefo_product_field_type']['id'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['table'] = 'field_data_field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['field'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_field_type']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: URL */
  $handler->display->display_options['fields']['field_nefo_report_url']['id'] = 'field_nefo_report_url';
  $handler->display->display_options['fields']['field_nefo_report_url']['table'] = 'field_data_field_nefo_report_url';
  $handler->display->display_options['fields']['field_nefo_report_url']['field'] = 'field_nefo_report_url';
  $handler->display->display_options['fields']['field_nefo_report_url']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_report_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_report_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_report_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nefo_report_url']['type'] = 'link_absolute';
  /* Feld: Inhalt: Dokument */
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
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_nefo_report_file]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-list-report-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_description']['id'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['table'] = 'field_data_field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['field'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_description']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_description']['element_wrapper_class'] = 'nefo-view-list-report-desc';
  $handler->display->display_options['fields']['field_nefo_description']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Feld: Global: Contextual Links */
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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_report' => 'nefo_product_report',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  $handler->display->display_options['style_options']['row_class'] = 'nefo-view-list-study-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Feld: Inhalt: Studie */
  $handler->display->display_options['fields']['field_nefo_study']['id'] = 'field_nefo_study';
  $handler->display->display_options['fields']['field_nefo_study']['table'] = 'field_data_field_nefo_study';
  $handler->display->display_options['fields']['field_nefo_study']['field'] = 'field_nefo_study';
  $handler->display->display_options['fields']['field_nefo_study']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_study']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_study']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_study']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nefo_study']['type'] = 'file_url_plain';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_nefo_study]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'nefo-view-list-study-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_description']['id'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['table'] = 'field_data_field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['field'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_description']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_description']['element_wrapper_class'] = 'nefo-view-list-study-desc';
  $handler->display->display_options['fields']['field_nefo_description']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Feld: Global: Contextual Links */
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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_study' => 'nefo_product_study',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
  /* Feld: Inhalt: Typ */
  $handler->display->display_options['fields']['field_nefo_product_field_type']['id'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['table'] = 'field_data_field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['field'] = 'field_nefo_product_field_type';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_product_field_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_product_field_type']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: URL */
  $handler->display->display_options['fields']['field_nefo_workshop_url']['id'] = 'field_nefo_workshop_url';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['table'] = 'field_data_field_nefo_workshop_url';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['field'] = 'field_nefo_workshop_url';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nefo_workshop_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_workshop_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nefo_workshop_url']['type'] = 'link_absolute';
  /* Feld: Inhalt: Dokument */
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
  /* Feld: Inhalt: Titel */
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
  /* Feld: Inhalt: Beschreibung */
  $handler->display->display_options['fields']['field_nefo_description']['id'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['table'] = 'field_data_field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['field'] = 'field_nefo_description';
  $handler->display->display_options['fields']['field_nefo_description']['label'] = '';
  $handler->display->display_options['fields']['field_nefo_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nefo_description']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nefo_description']['element_wrapper_class'] = 'nefo-view-list-workshop-desc';
  $handler->display->display_options['fields']['field_nefo_description']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Feld: Global: Contextual Links */
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
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nefo_product_workshop' => 'nefo_product_workshop',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
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
