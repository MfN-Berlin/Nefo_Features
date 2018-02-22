<?php
/**
 * @file
 * nefo_metatags.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function nefo_metatags_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [current-page:pager][site:name]',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'twitter:card' => array(
        'value' => 'summary',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title]',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:404.
  $config['global:404'] = array(
    'instance' => 'global:404',
    'disabled' => FALSE,
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [current-page:pager][site:slogan]',
      ),
      'description' => array(
        'value' => 'The German Network-Forum for Biodiversity Research (NeFo) is the national focal point for scientists, policy-makers and other stakeholders working in the field of biodiversity research and policies.',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:description' => array(
        'value' => '[site:slogan]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'twitter:title' => array(
        'value' => '[node:title]',
      ),
      'twitter:description' => array(
        'value' => '[node:summary]',
      ),
    ),
  );

  // Exported Metatag config instance: node:article.
  $config['node:article'] = array(
    'instance' => 'node:article',
    'disabled' => FALSE,
    'config' => array(
      'twitter:image' => array(
        'value' => '[node:field_nefo_cover_photo]',
      ),
    ),
  );

  // Exported Metatag config instance: node:blog.
  $config['node:blog'] = array(
    'instance' => 'node:blog',
    'config' => array(
      'twitter:image' => array(
        'value' => '[node:field_nefo_cover_photo]',
      ),
    ),
  );

  // Exported Metatag config instance: node:nefo_news.
  $config['node:nefo_news'] = array(
    'instance' => 'node:nefo_news',
    'config' => array(
      'twitter:image' => array(
        'value' => '[node:field_nefo_news_img]',
      ),
    ),
  );

  // Exported Metatag config instance: node:nefo_product_article.
  $config['node:nefo_product_article'] = array(
    'instance' => 'node:nefo_product_article',
    'config' => array(
      'twitter:image' => array(
        'value' => '[node:field_nefo_article_img]',
      ),
    ),
  );

  // Exported Metatag config instance: node:nefo_product_document.
  $config['node:nefo_product_document'] = array(
    'instance' => 'node:nefo_product_document',
    'config' => array(
      'twitter:image' => array(
        'value' => '[node:field_nefo_slide_product_img]',
      ),
    ),
  );

  // Exported Metatag config instance: node:nefo_product_interview.
  $config['node:nefo_product_interview'] = array(
    'instance' => 'node:nefo_product_interview',
    'config' => array(
      'twitter:image' => array(
        'value' => '[node:field_nefo_interview_img]',
      ),
    ),
  );

  // Exported Metatag config instance: node:nefo_product_literature_tip.
  $config['node:nefo_product_literature_tip'] = array(
    'instance' => 'node:nefo_product_literature_tip',
    'config' => array(
      'twitter:image' => array(
        'value' => '[node:field_nefo_literature_tip_img]',
      ),
    ),
  );

  // Exported Metatag config instance: node:nefo_video.
  $config['node:nefo_video'] = array(
    'instance' => 'node:nefo_video',
    'config' => array(
      'twitter:image' => array(
        'value' => '[node:field_nefo_video_link]',
      ),
    ),
  );

  // Exported Metatag config instance: node:nefo_workshop.
  $config['node:nefo_workshop'] = array(
    'instance' => 'node:nefo_workshop',
    'config' => array(
      'twitter:image' => array(
        'value' => '[node:field_nefo_cover_photo]',
      ),
    ),
  );

  // Exported Metatag config instance: node:page.
  $config['node:page'] = array(
    'instance' => 'node:page',
    'config' => array(
      'twitter:image' => array(
        'value' => '[node:field_nefo_cover_photo]',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[term:name] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
      'twitter:description' => array(
        'value' => '[term:description]',
      ),
      'twitter:title' => array(
        'value' => '[term:name]',
      ),
    ),
  );

  return $config;
}
