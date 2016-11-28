<?php
/**
 * @file
 * shariff_social_sharing.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function shariff_social_sharing_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'schariff_social_sharing_block';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
        'blog' => 'blog',
        'nefo_event' => 'nefo_event',
        'nefo_news' => 'nefo_news',
        'nefo_product_article' => 'nefo_product_article',
        'nefo_product_factsheet' => 'nefo_product_factsheet',
        'nefo_product_interview' => 'nefo_product_interview',
        'nefo_product_opinion' => 'nefo_product_opinion',
        'nefo_product_press_release' => 'nefo_product_press_release',
        'nefo_product_report' => 'nefo_product_report',
        'nefo_product_study' => 'nefo_product_study',
        'nefo_product_workshop' => 'nefo_product_workshop',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'shariff-shariff_block' => array(
          'module' => 'shariff',
          'delta' => 'shariff_block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['schariff_social_sharing_block'] = $context;

  return $export;
}
