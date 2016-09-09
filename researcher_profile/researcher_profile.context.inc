<?php
/**
 * @file
 * researcher_profile.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function researcher_profile_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'researcher_layout';
  $context->description = 'Activate Layout for Researcher Profile Page';
  $context->tag = 'theme layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'forscherprofile' => 'forscherprofile',
      ),
    ),
    'views' => array(
      'values' => array(
        'view_researcher_profile' => 'view_researcher_profile',
        'view_researcher_profile:page' => 'view_researcher_profile:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-3acc27666b2d103e3909bfaf54a3587c' => array(
          'module' => 'views',
          'delta' => '3acc27666b2d103e3909bfaf54a3587c',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
      ),
      'layout' => 'researcher',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Activate Layout for Researcher Profile Page');
  t('theme layout');
  $export['researcher_layout'] = $context;

  return $export;
}
