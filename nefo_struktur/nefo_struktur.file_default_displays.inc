<?php
/**
 * @file
 * nefo_struktur.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function nefo_struktur_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_colorbox';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'colorbox_node_style' => 'large',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'image_style_nefo_big',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['image__default__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__default__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_owlcarousel_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'settings_group' => 'owlcarousel_settings_default',
  );
  $export['image__default__file_field_owlcarousel_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__media_oembed_thumbnail';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__default__media_oembed_thumbnail'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_nefo_cover_photo__file_field_colorbox';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'colorbox_node_style' => 'image_style_nefo_cover_photo',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => 'image_style_nefo_cover_photo',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['image__media_nefo_cover_photo__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_nefo_cover_photo__file_field_file_default';
  $file_display->weight = -41;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['image__media_nefo_cover_photo__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_nefo_cover_photo__file_field_file_download_link';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__media_nefo_cover_photo__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_nefo_cover_photo__file_field_file_table';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_nefo_cover_photo__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_nefo_cover_photo__file_field_file_url_plain';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__media_nefo_cover_photo__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_nefo_cover_photo__file_field_image';
  $file_display->weight = -43;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'image_style_nefo_cover_photo',
    'image_link' => '',
  );
  $export['image__media_nefo_cover_photo__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_nefo_cover_photo__file_field_media_large_icon';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__media_nefo_cover_photo__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_nefo_cover_photo__file_field_owlcarousel_formatter';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'settings_group' => 'owlcarousel_settings_default',
  );
  $export['image__media_nefo_cover_photo__file_field_owlcarousel_formatter'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_nefo_cover_photo__media_oembed';
  $file_display->weight = -46;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '360',
  );
  $export['image__media_nefo_cover_photo__media_oembed'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__media_nefo_cover_photo__media_oembed_thumbnail';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__media_nefo_cover_photo__media_oembed_thumbnail'] = $file_display;

  return $export;
}
