<?php
/**
 * @file
 * nefo_struktur.taxonomy_display.inc
 */

/**
 * Implements hook_taxonomy_display_default_displays().
 */
function nefo_struktur_taxonomy_display_default_displays() {
  $export = array();

  $taxonomy_display = new stdClass();
  $taxonomy_display->api_version = 1;
  $taxonomy_display->machine_name = 'nefo_taxonomy_interview';
  $taxonomy_display->term_display_plugin = 'TaxonomyDisplayTermDisplayHandlerCore';
  $taxonomy_display->term_display_options = '';
  $taxonomy_display->associated_display_plugin = 'TaxonomyDisplayAssociatedDisplayHandlerViews';
  $taxonomy_display->associated_display_options = array(
    'view' => 'nefo_view_list_interviews_by_term',
    'display' => 'page',
  );
  $taxonomy_display->add_feed = FALSE;
  $taxonomy_display->breadcrumb_display_plugin = 'TaxonomyDisplayBreadcrumbDisplayHandlerHidden';
  $taxonomy_display->breadcrumb_display_options = '';
  $export['nefo_taxonomy_interview'] = $taxonomy_display;

  $taxonomy_display = new stdClass();
  $taxonomy_display->api_version = 1;
  $taxonomy_display->machine_name = 'nefo_taxonomy_news';
  $taxonomy_display->term_display_plugin = 'TaxonomyDisplayTermDisplayHandlerCore';
  $taxonomy_display->term_display_options = '';
  $taxonomy_display->associated_display_plugin = 'TaxonomyDisplayAssociatedDisplayHandlerViews';
  $taxonomy_display->associated_display_options = array(
    'view' => 'nefo_view_list_news_by_term',
    'display' => 'page',
  );
  $taxonomy_display->add_feed = FALSE;
  $taxonomy_display->breadcrumb_display_plugin = 'TaxonomyDisplayBreadcrumbDisplayHandlerHidden';
  $taxonomy_display->breadcrumb_display_options = '';
  $export['nefo_taxonomy_news'] = $taxonomy_display;

  $taxonomy_display = new stdClass();
  $taxonomy_display->api_version = 1;
  $taxonomy_display->machine_name = 'nefo_taxonomy_report';
  $taxonomy_display->term_display_plugin = 'TaxonomyDisplayTermDisplayHandlerCore';
  $taxonomy_display->term_display_options = '';
  $taxonomy_display->associated_display_plugin = 'TaxonomyDisplayAssociatedDisplayHandlerViews';
  $taxonomy_display->associated_display_options = array(
    'view' => 'nefo_view_list_report_by_term',
    'display' => 'default',
  );
  $taxonomy_display->add_feed = FALSE;
  $taxonomy_display->breadcrumb_display_plugin = 'TaxonomyDisplayBreadcrumbDisplayHandlerHidden';
  $taxonomy_display->breadcrumb_display_options = '';
  $export['nefo_taxonomy_report'] = $taxonomy_display;

  $taxonomy_display = new stdClass();
  $taxonomy_display->api_version = 1;
  $taxonomy_display->machine_name = 'nefo_taxonomy_tags';
  $taxonomy_display->term_display_plugin = 'TaxonomyDisplayTermDisplayHandlerCore';
  $taxonomy_display->term_display_options = '';
  $taxonomy_display->associated_display_plugin = 'TaxonomyDisplayAssociatedDisplayHandlerViews';
  $taxonomy_display->associated_display_options = array(
    'view' => 'nefo_view_list_products_by_term',
    'display' => 'default',
  );
  $taxonomy_display->add_feed = FALSE;
  $taxonomy_display->breadcrumb_display_plugin = 'TaxonomyDisplayBreadcrumbDisplayHandlerHidden';
  $taxonomy_display->breadcrumb_display_options = '';
  $export['nefo_taxonomy_tags'] = $taxonomy_display;

  return $export;
}