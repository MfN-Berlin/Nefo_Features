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
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
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
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
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
      'description' => t('Benutzen Sie <em>Artikel</em> für zeitkritische Inhalte wie Nachrichten, Pressemeldungen oder Blogeinträge.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_news' => array(
      'name' => t('NeFo-News'),
      'base' => 'node_content',
      'description' => t('Bio-Div und IPBES Nachrichten'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_product_article' => array(
      'name' => t('NeFo-Produkt Artikel'),
      'base' => 'node_content',
      'description' => t('NeFo-Artikel (Top-Menü: Presse)'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_product_factsheet' => array(
      'name' => t('NeFo-Produkt Faktenblatt'),
      'base' => 'node_content',
      'description' => t('NeFo-Faktenblätter'),
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
    'nefo_product_opinion' => array(
      'name' => t('NeFo-Produkt Stellungnahme'),
      'base' => 'node_content',
      'description' => t('NeFo-Stellungnahmen'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_product_press_release' => array(
      'name' => t('NeFo-Produkt Pressemitteilung'),
      'base' => 'node_content',
      'description' => t('NeFo-Pressemitteilungen (Top-Menü: Presse / Eigene Pressemitteilungen)'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_product_report' => array(
      'name' => t('NeFo-Produkt Bericht'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_product_study' => array(
      'name' => t('NeFo-Produkt Studie'),
      'base' => 'node_content',
      'description' => t('NeFo-Studien'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_product_workshop' => array(
      'name' => t('NeFo-Produkt Workshop'),
      'base' => 'node_content',
      'description' => t('NeFo-Workshops'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_slide_products' => array(
      'name' => t('Präsentationsfolie Produkte'),
      'base' => 'node_content',
      'description' => t('Folie für die Dreier-Leiste "Aktuelle Produkte" auf der Startseite.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'nefo_slideshow' => array(
      'name' => t('Slideshow Eintrag'),
      'base' => 'node_content',
      'description' => '',
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
