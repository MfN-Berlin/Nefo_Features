<?php
/**
 * @file
 * nefo_struktur.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nefo_struktur_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nefo_struktur_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function nefo_struktur_image_default_styles() {
  $styles = array();

  // Exported image style: image_style_nefo_big.
  $styles['image_style_nefo_big'] = array(
    'label' => 'Big (640x640)',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => 640,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: image_style_nefo_cover_photo.
  $styles['image_style_nefo_cover_photo'] = array(
    'label' => 'Cover Photo (800x450)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_style_nefo_frontpage_block.
  $styles['image_style_nefo_frontpage_block'] = array(
    'label' => 'Frontpage Block',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 270,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_style_nefo_interview_slide.
  $styles['image_style_nefo_interview_slide'] = array(
    'label' => 'Interview Slide',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 430,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_style_nefo_list_thumbnail.
  $styles['image_style_nefo_list_thumbnail'] = array(
    'label' => 'List Thumbnail',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 120,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_style_nefo_literature_tip_thumbnail.
  $styles['image_style_nefo_literature_tip_thumbnail'] = array(
    'label' => 'Literature Tip Thumbnail',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 225,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: image_style_nefo_main_slideshow.
  $styles['image_style_nefo_main_slideshow'] = array(
    'label' => 'Main Slideshow',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 380,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_style_nefo_product_thumbnail.
  $styles['image_style_nefo_product_thumbnail'] = array(
    'label' => 'Product Thumbnail (150x*)',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 225,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function nefo_struktur_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Artikel'),
      'base' => 'node_content',
      'description' => t('Standard Drupal-Inhaltstyp. Neue Felder: Deadline und Ziel-URL für Ausschreibungen.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_news' => array(
      'name' => t('NeFo-News'),
      'base' => 'node_content',
      'description' => t('Bio-Div- und IPBES-Nachrichten, NeFo-Pressemitteilungen'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_product_article' => array(
      'name' => t('NeFo-Produkt Artikel'),
      'base' => 'node_content',
      'description' => t('NeFo-Artikel'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_product_document' => array(
      'name' => t('NeFo-Dokument'),
      'base' => 'node_content',
      'description' => t('Neuer Inhaltstyp für Berichte, Faktenblätter, Stellungnahmen und Studien.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_product_interview' => array(
      'name' => t('NeFo-Produkt Interview'),
      'base' => 'node_content',
      'description' => t('NeFo-Interviews'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_product_literature_tip' => array(
      'name' => t('NeFo-Produkt Literaturtipp'),
      'base' => 'node_content',
      'description' => t('NeFo-Literaturtipps'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_product_workshop' => array(
      'name' => t('NeFo-Produkt-Workshop-OLD'),
      'base' => 'node_content',
      'description' => t('Dieser Inhaltstyp muss gelöscht werden! Siehe Ticket-Nummer 440.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_slideshow' => array(
      'name' => t('Slideshow Eintrag'),
      'base' => 'node_content',
      'description' => t('Bild für Slider auf der Startseite'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_video' => array(
      'name' => t('NeFo-Video'),
      'base' => 'node_content',
      'description' => t('NeFo-Video'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_workshop' => array(
      'name' => t('NeFo-Workshop'),
      'base' => 'node_content',
      'description' => t('Workshops und Fachgespräche'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Einfache Seite'),
      'base' => 'node_content',
      'description' => t('Benutzen Sie <em>Einfache Seiten</em> für statischen Inhalt, wie z.B. eine „Über uns“ Seite.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
