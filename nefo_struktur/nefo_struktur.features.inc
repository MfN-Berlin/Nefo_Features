<?php
/**
 * @file
 * nefo_struktur.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nefo_struktur_ctools_plugin_api($module = NULL, $api = NULL) {
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

  // Exported image style: image_style_nefo_frontpage_block.
  $styles['image_style_nefo_frontpage_block'] = array(
    'label' => 'Frontpage Block',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 200,
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
          'width' => 432,
          'height' => 242,
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
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nefo_news' => array(
      'name' => t('NeFo-News'),
      'base' => 'node_content',
      'description' => t('Bio-Div und IPBES Nachrichten'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nefo_product_article' => array(
      'name' => t('NeFo-Produkt Artikel'),
      'base' => 'node_content',
      'description' => t('NeFo-Artikel'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nefo_product_factsheet' => array(
      'name' => t('NeFo-Produkt Faktenblatt'),
      'base' => 'node_content',
      'description' => t('NeFo-Faktenblätter'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nefo_product_interview' => array(
      'name' => t('NeFo-Produkt Interview'),
      'base' => 'node_content',
      'description' => t('NeFo-Interviews'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nefo_product_literature_tip' => array(
      'name' => t('NeFo-Produkt Literaturtipp'),
      'base' => 'node_content',
      'description' => t('NeFo-Literaturtipps'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nefo_product_opinion' => array(
      'name' => t('NeFo-Produkt Stellungnahme'),
      'base' => 'node_content',
      'description' => t('NeFo-Stellungnahmen'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nefo_product_press_release' => array(
      'name' => t('NeFo-Produkt Pressemitteilung'),
      'base' => 'node_content',
      'description' => t('NeFo-Pressemitteilungen'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nefo_product_report' => array(
      'name' => t('NeFo-Produkt Bericht'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nefo_product_study' => array(
      'name' => t('NeFo-Produkt Studie'),
      'base' => 'node_content',
      'description' => t('NeFo-Studien'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nefo_slide_factsheet' => array(
      'name' => t('Präsentationsfolie Faktenblatt'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nefo_slide_opinion' => array(
      'name' => t('Präsentationsfolie Stellungnahme'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'nefo_slide_report' => array(
      'name' => t('Präsentationsfolie Bericht'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Einfache Seite'),
      'base' => 'node_content',
      'description' => t('Benutzen Sie <em>Einfache Seiten</em> für statischen Inhalt, wie z.B. eine „Über uns“ Seite.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
